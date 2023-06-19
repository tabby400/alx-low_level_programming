#ifndef _MAIN_H_
#define _MAIN_H_

int _abs(int n);
int _putchar(char c);
unsigned int _strspn(char *s, char *accept);
void _puts(char *s);
int _isalpha(int c);
int _strlen(char *s);
int _islower(int c);
char *_strcpy(char *dest, char *src);
char *_strncpy(char *dest, char *src, int n);
char *_strncat(char *dest, char *src, int n);
char *_strcat(char *dest, char *src);
char *_strchr(char *s, char c);
char *_strpbrk(char *s, char *accept);
char *_strstr(char *haystack, char *needle);
int _atoi(char *s);
char *_memset(char *s, char b, unsigned int n);
char *_memcpy(char *dest, char *src, unsigned int n);
int _strcmp(char *s1, char *s2);
int _isdigit(int c);
int _isupper(int c);

#endif
