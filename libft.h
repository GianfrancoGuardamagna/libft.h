#ifndef MYLIB_H
# define MYLIB_H

int	ft_atoi(const char *str);
void	bzero(void *s, size_t n);
void	*calloc(size_t nmemb, size_t size);
int	ft_isalnum(int c);
int	ft_isalpha(int c);
int	ft_isdigit(int c)
int	isprint(int c);
void	*memchar(void *s, int c, size_t n);
void	*memchr(void *s, int c, size_t n);
int	memcmpi(const void *s1, const void *s2, size_t n);
void	*memcpy(void *dest, const void *src, size_t n);
void	*memmove(void *dest, const void *src, size_t n);
void	*memset(void *s, int c, size_t n);
char	*ft_strchr(const char *s, int c);
char	*strdup(const char *s);
size_t	strlcat(char *dst, const char *src, size_t dsize);
size_t	strlcpy(char *dst, const char *src, size_t size);
size_t	strlength(const char *s);
int	strncmp(const char *s1, const char *s2, size_t n);
char	 strnstr(const char *big, const char *little, size_t len);
char	*ft_strrchr(const char *s, int c);
int	tolower(int c);
int	toupper(int c);

#endif