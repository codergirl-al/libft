# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: apeposhi <apeposhi@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/17 14:25:17 by apeposhi          #+#    #+#              #
#    Updated: 2022/11/25 17:21:40 by apeposhi         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# myname:
# 	@clear
# 	@echo "                                      __     __"
# 	@echo ".---.-.-----.-----.-----.-----.-----.|  |--.|__|"
# 	@echo "|  _  |  _  |  -__|  _  |  _  |__ --||     ||  |"
# 	@echo "|___._|   __|_____|   __|_____|_____||__|__||__|"
# 	@echo "      |__|        |__|"

CC = cc
CFLAGS = -Wall -Wextra -Werror

NAME=libft.a
SRCS=ft_bzero.c ft_isalpha.c    ft_isprint.c    ft_memcpy.c     ft_strchr.c     ft_strlcpy.c    ft_strrchr.c\
ft_calloc.c     ft_isascii.c    ft_memchr.c     ft_memmove.c    ft_strdup.c     ft_strlen.c     ft_tolower.c\
ft_atoi.c       ft_isalnum.c    ft_isdigit.c    ft_memcmp.c     ft_memset.c     ft_strlcat.c    ft_strnstr.c    ft_toupper.c\
ft_strncmp.c	ft_substr.c		ft_strjoin.c	ft_strtrim.c	ft_split.c		ft_itoa.c		ft_strmapi.c	ft_striteri.c\
ft_putchar_fd.c	ft_putstr_fd.c	ft_putendl_fd.c	ft_putnbr_fd.c

OBJS=$(SRCS:.c=.o)

BONUSES=ft_lstnew.c		ft_lstadd_front.c		ft_lstsize.c	ft_lstlast.c	ft_lstadd_back.c	ft_lstdelone.c\
		ft_lstclear.c	ft_lstiter.c	ft_lstmap.c\

BONUS_OBJS = $(BONUSES:.c=.o)

all: $(NAME)

%.o: %.c
	@$(CC) $(CFLAGS) -c $^ -o $@

$(NAME): $(SRCS) $(OBJS)
	@ar rcs $(NAME) $(OBJS)

bonus:	$(OBJS) $(BONUS_OBJS)
	ar rcs $(NAME) $(OBJS) $(BONUS_OBJS)

clean:
	rm -f $(OBJS) $(BONUS_OBJS) libft.a a.out

fclean:
	rm -f $(NAME)

norm: $(SRCS)
	$(shell norminette $(SRCS) | grep Error)

re: fclean all
