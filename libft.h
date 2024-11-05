#ifndef LIBFT_H
#define LIBFT_H
#include <stddef.h>
#include <stdlib.h>
typedef struct s_list
{
    void *content;
    struct s_list *next;
}   t_list;
int ft_isascii(int c);
int ft_isalpha(int c);
int ft_isdigit(int x);
int ft_isalnum(int c);
int ft_isprint(int c);
size_t ft_strlen(char *str);
void *ft_memset(void *s, int c, size_t n);
void ft_bzero(void *s,size_t n);
void *ft_memcpy(void *dest, const void *src, size_t n);
size_t  ft_strlcpy(char *dest, const char *src, size_t size);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t  ft_strlcat(char *dest, const char *src, size_t size);
int ft_toupper(int c);
int ft_tolower(int c);
char *ft_strchr(const char *str, int c);
int ft_strncmp(const char *s1, const char *s2, size_t n);
#endif

