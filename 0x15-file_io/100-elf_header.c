#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <elf.h>

void _printdata(unsigned char *e_ident);
void _printmagic(unsigned char *e_ident);
void _printclass(unsigned char *e_ident);
void _check_elf(unsigned char *e_ident);
void _printosabi(unsigned char *e_ident);
void _printentry(unsigned long int e_entry, unsigned char *e_ident);
void _printtype(unsigned int e_type, unsigned char *e_ident);
void _printabi(unsigned char *e_ident);
void _printversion(unsigned char *e_ident);
void close_elf(int elf);

/**
 * _check_elf - function which checks if the file is ELF
 *
 * @e_ident: points to an array with ELF magic numbers
 *
 */

void _check_elf(unsigned char *e_ident)
{
	int p;

	for (p = 0 ; p < 4 ; p++)
	{
			if (e_ident[p] != 127 &&
			e_ident[p] != 'E' &&
			e_ident[p] != 'L' &&
			e_ident[p] != 'F')
		{
			dprintf(STDERR_FILENO, "Error: Not an ELF file\n");
			exit(98);
		}
	}
}

/**
 * _printclass - function which prints the class an ELF header belongs to
 *
 * @e_ident: points to an array with ELF class
 */

void _printclass(unsigned char *e_ident)
{
	printf(" Class: ");

	switch (e_ident[EI_CLASS])
	{
	case ELFCLASSNONE:
		printf("none\n");
		break;
	case ELFCLASS32:
		printf("ELF32\n");
		break;
	case ELFCLASS64:
		printf("ELF64\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
	}
}

/**
 * _printmagic - function which prints the magic numbers in ELF header
 *
 * @e_ident: points to an array with ELF magic numbers
 */

void _printmagic(unsigned char *e_ident)
{
	int ind;

	printf(" Magic: ");

	for (ind = 0 ; ind < EI_NIDENT ; ind++)/*16 bytes*/
	{
		printf("%02x", e_ident[ind]);

		if (ind == EI_NIDENT - 1)
			printf("\n");
		else
			printf(" ");
	}
}

/**
 * _printdata - functiion which printd data of ELF header
 *
 * @e_ident: points to an array with ELF class
 */

void _printdata(unsigned char *e_ident)
{
	printf(" Data: ");

	switch (e_ident[EI_DATA])
	{
	case ELFDATANONE:
		printf("none\n");
		break;
	case ELFDATA2LSB:
		printf("2's complement, little endian\n");
		break;
	case ELFDATA2MSB:
		printf("2's complement, big endian\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_CLASS]);
}

/**
 * _printosabi - function which prints OS/ABI of an ELF header
 *
 * @e_ident: points to an array with ELF version
 */

void _printosabi(unsigned char *e_ident)
{
	printf(" OS/ABI: ");

	switch (e_ident[EI_OSABI])
	{
	case ELFOSABI_NONE:
		printf("UNIX - System V\n");
		break;
	case ELFOSABI_HPUX:
		printf("UNIX - HP-UX\n");
		break;
	case ELFOSABI_NETBSD:
		printf("UNIX - NetBSD\n");
		break;
	case ELFOSABI_LINUX:
		printf("UNIX - Linux\n");
		break;
	case ELFOSABI_SOLARIS:
		printf("UNIX - Solaris\n");
		break;
	case ELFOSABI_IRIX:
		printf("UNIX - IRIX\n");
		break;
	case ELFOSABI_FREEBSD:
		printf("UNIX - FreeBSD\n");
		break;
	case ELFOSABI_TRU64:
		printf("UNIX - TRU64\n");
		break;
	case ELFOSABI_ARM:
		printf("ARM\n");
		break;
	case ELFOSABI_STANDALONE:
		printf("Standalone App\n");
		break;
	default:
		printf("<unknown: %x>\n", e_ident[EI_OSABI]);
	}
}

/**
 * _printversion - function which prints the version of ELF header
 *
 * @e_ident: points to the array with ELF version
 */

void _printversion(unsigned char *e_ident)
{
	printf(" Version: %d",
			  e_ident[EI_VERSION]);

	switch (e_ident[EI_VERSION])
	{
	case EV_CURRENT:
		printf(" (current)\n");
		break;
	default:
		printf("\n");
		break;
	}
}

/**
 * _printabi - function which prints the ABI of an ELF file
 *
 * @e_ident: points to array with ELF ABI
 */

void _printabi(unsigned char *e_ident)
{
	printf(" ABI Version: %d\n",
		e_ident[EI_ABIVERSION]);
}

/**
 * _printtype - function which prints type of ELF header
 * @e_ident: points to the array with ELF class
 * @e_type: ELF type
 */

void _printtype(unsigned int e_type, unsigned char *e_ident)
{
	if (e_ident[EI_DATA] == ELFDATA2MSB)
		e_type >>= 8;

	printf(" Type: ");

	switch (e_type)
	{
	case ET_NONE:
		printf("NONE (None)\n");
		break;
	case ET_REL:
		printf("REL (Relocatable file)\n");
		break;
	case ET_EXEC:
		printf("EXEC (Executable file)\n");
		break;
	case ET_DYN:
		printf("DYN (Shared object file)\n");
		break;
	case ET_CORE:
		printf("CORE (Core file)\n");
		break;
	default:
		printf("<unknown: %x>\n", e_type);
	}
}

/**
 * _printentry - function which prints entry point of ELF header
 *
 * @e_ident: points to array of ELF class
 * @e_entry: shows address of entry of ELF
 */

void _printentry(unsigned long int e_entry, unsigned char *e_ident)
{
	printf(" Entry point address: ");

	if (e_ident[EI_DATA] == ELFDATA2MSB)
	{
		e_entry = ((e_entry << 8) & 0xFF00FF00) |
			  ((e_entry >> 8) & 0xFF00FF);
		e_entry = (e_entry << 16) | (e_entry >> 16);
	}

	if (e_ident[EI_CLASS] == ELFCLASS32)
		printf("%#x\n", (unsigned int)e_entry);

	else
	{
		printf("%#lx\n", e_entry);
	}
}
/**
 * close_elf - function which closes ELF file
 *
 * @elf: the descriptor of ELF file
 */

void close_elf(int elf)
{
	if (close(elf) == -1)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't close fd %d\n", elf);
		exit(98);
	}
}
/**
 * main - shows what is in the ELF header file
 *
 * @argc: the number of arguments in program
 * @argv: array of pointers to arguments
 *
 * Return: 0 if it is successful
 */

int main(int __attribute__((__unused__)) argc, char *argv[])
{
	int op;
	int rd;
	Elf64_Ehdr *header;

	op = open(argv[1], O_RDONLY);
	if (op == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	header = malloc(sizeof(Elf64_Ehdr));
	if (header == NULL)
	{
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: Can't read file %s\n", argv[1]);
		exit(98);
	}
	rd = read(op, header, sizeof(Elf64_Ehdr));
	if (rd == -1)
	{
		free(header);
		close_elf(op);
		dprintf(STDERR_FILENO, "Error: `%s`: No such file\n", argv[1]);
		exit(98);
	}
	_check_elf(header->e_ident);
	printf("ELF Header:\n");
	_printmagic(header->e_ident);
	_printclass(header->e_ident);
	_printdata(header->e_ident);
	_printversion(header->e_ident);
	_printosabi(header->e_ident);
	_printabi(header->e_ident);
	_printtype(header->e_type, header->e_ident);
	_printentry(header->e_entry, header->e_ident);

	free(header);
	close_elf(op);
	return (0);
}
}
