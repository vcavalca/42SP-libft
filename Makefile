# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: vcavalca <vcavalca@student.42sp.org.br>    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/05/24 18:56:58 by vcavalca          #+#    #+#              #
#    Updated: 2021/09/21 07:05:17 by vcavalca         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a

CFLAGS = -Wall -Wextra -Werror
CC = gcc

SRCS = src/ft_memset.c src/ft_bzero.c src/ft_memcpy.c src/ft_memccpy.c src/ft_memmove.c \
		src/ft_memchr.c src/ft_memcmp.c src/ft_strlen.c src/ft_strlcpy.c src/ft_strlcat.c \
		src/ft_strchr.c src/ft_strrchr.c src/ft_strnstr.c src/ft_strncmp.c src/ft_atoi.c \
		src/ft_isalpha.c src/ft_isdigit.c src/ft_isalnum.c src/ft_isascii.c src/ft_isprint.c \
		src/ft_toupper.c src/ft_tolower.c src/ft_calloc.c src/ft_strdup.c src/ft_substr.c \
		src/ft_strjoin.c src/ft_strtrim.c src/ft_split.c src/ft_itoa.c src/ft_strmapi.c \
		src/ft_putchar_fd.c src/ft_putstr_fd.c src/ft_putendl_fd.c src/ft_putnbr_fd.c \
		src/ft_putchar.c src/ft_putnbr.c src/ft_putstr.c src/ft_strcat.c src/ft_strcmp.c \
		src/ft_strcpy.c src/ft_strncat.c src/ft_strncpy.c src/ft_strstr.c src/ft_strmalloc.c

BONUS_SRCS = src/ft_lstnew.c src/ft_lstadd_front.c src/ft_lstadd_back.c src/ft_lstsize.c \
				src/ft_lstlast.c src/ft_lstdelone.c src/ft_lstclear.c src/ft_lstiter.c \
				src/ft_lstmap.c

OBJS = $(SRCS:.c=.o)
BONUS_OBJS = $(BONUS_SRCS:.c=.o)

all: $(NAME)

.c.o:
	$(CC) $(CFLAGS) -I incl -c $< -o $@

$(NAME): $(OBJS)
	@ar rsc $@ $^
	@echo "Successfully compiled $(NAME)"

bonus: $(NAME) $(BONUS_OBJS)
	@ar rsc $(NAME) $(BONUS_OBJS)

clean:
	@rm -f $(OBJS) $(BONUS_OBJS)
	@echo "Removed objects files"

fclean: clean
	@rm -f $(NAME)
	@echo "Removed $(NAME) file"

re: fclean all

.PHONY: all clean fclean re bonus
