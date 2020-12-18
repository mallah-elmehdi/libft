# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: emallah <marvin@42.fr>                     +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/10/24 13:04:52 by emallah           #+#    #+#              #
#    Updated: 2019/11/04 22:17:49 by emallah          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

BS = ft_lstsize_bonus.c ft_lstnew_bonus.c ft_lstlast_bonus.c ft_lstdelone_bonus.c
	
all: $(NAME)
	
$(NAME):
	@gcc -Wall -Wextra -Werror -c ft_atoi.c ft_bzero.c ft_calloc.c ft_isalnum.c ft_isalpha.c ft_isascii.c\
		 ft_isdigit.c ft_isprint.c ft_itoa.c ft_memccpy.c ft_memchr.c ft_memcmp.c ft_memcpy.c ft_memmove.c\
		 ft_memset.c ft_putchar_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c\
		 ft_strdup.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c ft_strmapi.c ft_strncmp.c\
		 ft_strnstr.c ft_strrchr.c ft_strtrim.c ft_substr.c ft_tolower.c ft_toupper.c
	@ar -rc $(NAME) *.o 
clean:
	@rm -f *.o

fclean: clean
	@rm -f $(NAME)

re: fclean all

bonus:
	@gcc -Wall -Wextra -Werror -c $(BS)
	ar -rc $(NAME) *.o
