/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atenhune <atenhune@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/02 15:49:51 by atenhune          #+#    #+#             */
/*   Updated: 2021/11/24 13:28:48 by atenhune         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <string.h>
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}	t_list;

char	*ft_strncpy(char *dst, const char *src, size_t len);
size_t	ft_strlen(const char *s);
int		ft_atoi(const char *str);
int		ft_strcmp(const char *s1, const char *s2);
char	*ft_strdup(const char *s);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strcat(char *s1, const char *s2);
char	*ft_strncat(char *s1, const char*s2, size_t n);
size_t	ft_strlcat( char *dst, const char *src, size_t dstsize);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isalnum(int c);
char	*ft_strstr(const char *haystack, const char *needle);
int		ft_toupper(int c);
int		ft_tolower(int c);
char	*ft_strchr(const char *s, int c);
char	*ft_strrchr(const char *s, int c);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_isprint(int c);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memset(void *b, int c, size_t len);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dst, const void *src, size_t n);
void	*ft_memccpy(void *dst, const void *src, int c, size_t n);
void	*ft_memmove(void *dst, const void *src, size_t len);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
void	ft_putchar(char c);
void	ft_putstr(const char *s);
void	ft_putendl(const char *s);
void	ft_putnbr(int n);
char	*ft_itoa(int n);
void	ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(const char *s, int fd);
void	ft_putendl_fd(const char *s, int fd);
void	ft_putnbr_fd(int n, int fd);
char	*ft_strjoin(const char *s1, const char *s2);
char	*ft_strtrim(const char *s);
int		ft_strequ(const char *s1, const char *s2);
int		ft_strnequ(const char *s1, const char *s2, size_t n);
void	*ft_memalloc(size_t size);
char	*ft_strnew(size_t size);
void	ft_strclr(char *s);
void	ft_memdel(void **ap);
void	ft_strdel(char **as);
void	ft_striter(char *s, void (*f)(char *));
void	ft_striteri(char *s, void (*f)(unsigned int, char *));
char	*ft_strmap(const char *s, char (*f)(char));
char	*ft_strmapi(const char *s, char (*f)(unsigned int, char));
char	*ft_strsub(const char *s, unsigned int start, size_t len);
char	**ft_strsplit(const char *s, char c);
t_list	*ft_lstnew(const void *content, size_t content_size);
void	ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void	ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void	ft_lstadd(t_list **alst, t_list *new);
void	ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));

#endif
