# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 14:25:17 by apeposhi          #+#    #+#              #
#    Updated: 2022/11/20 15:52:40 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# myname:
# 	@clear
# 	@echo "                                      __     __"
# 	@echo ".---.-.-----.-----.-----.-----.-----.|  |--.|__|"
# 	@echo "|  _  |  _  |  -__|  _  |  _  |__ --||     ||  |"
# 	@echo "|___._|   __|_____|   __|_____|_____||__|__||__|"
# 	@echo "      |__|        |__|"

CC = gcc
CFLAGS = -Wall -Wextra -Werror

NAME=libft.a
SRCS=ft_bzero.c ft_isalpha.c    ft_isprint.c    ft_memcpy.c     ft_strchr.c     ft_strlcpy.c    ft_strrchr.c\
ft_calloc.c     ft_isascii.c    ft_memchr.c     ft_memmove.c    ft_strdup.c     ft_strlen.c     ft_tolower.c\
ft_atoi.c       ft_isalnum.c    ft_isdigit.c    ft_memcmp.c     ft_memset.c     ft_strlcat.c    ft_strnstr.c    ft_toupper.c\
ft_strncmp.c	ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c

OBJS=$(SRCS:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(SRCS) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

clean:
	rm -f $(OBJS)

fclean:
	rm -f $(NAME)

norm: $(SRCS)
	$(shell norminette $(SRCS) | grep Error)

re: fclean all
