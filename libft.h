#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>

size_t		ft_strlcpy(char *str, const char *src, size_t t);
size_t		ft_strlcat(char *str, const char *src, size_t t);
size_t		ft_strlen(const char *str);

char		*ft_strchr(const char *str, int c);
char		*ft_strrchr(const char *str, int c);
char		*ft_strnstr(const char *str, const char *src, size_t t);
char		*ft_strdup(const char *str);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_itoa(int n);
char		*ft_strtrim(char const *s1, char const *set);
char		**ft_split(char const *s, char c);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));

void		ft_putstr_fd(char *s, int fd);
void		ft_putendl_fd(char *s, int fd);
void		ft_putnbr_fd(int n, int fd);
void		ft_putchar_fd(char c, int fd);
void		ft_bzero( void *str, size_t t);
void		*ft_memset(void *str, int c, size_t t);
void		*ft_memmove(void *str, const void *src, size_t t);
void		*ft_memchr(const void *str, int src, size_t t);
void		*ft_memcpy(void *str, const void *src, size_t t);
void		*ft_memccpy(void *str, const void *src, int c, size_t n);
void		*ft_calloc(size_t n, size_t t);

int			ft_memcmp(const void *str, const void *src, size_t n);
int			ft_atoi(const char *str);
int			ft_strncmp(const char *str, const char *src, size_t count);
int			ft_isalpha(int c);
int			ft_isdigit(int c);
int			ft_toupper(int c);
int			ft_tolower(int c);
int			ft_isprint(int c);
int			ft_isascii(int c);
int			ft_isalnum(int c);

#endif
