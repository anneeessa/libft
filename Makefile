# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: anmohamm <anmohamm@student.42abudhabi.a    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/01/17 15:43:25 by anmohamm          #+#    #+#              #
#    Updated: 2023/02/04 18:02:55 by anmohamm         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME := libft.a

.PHONY: all bonus clean fclean re

CFLAGS := -Wall -Werror -Wextra

SRCS := \
	ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c\
	ft_memset.c ft_atoi.c ft_bzero.c ft_calloc.c ft_memchr.c ft_memcmp.c\
	ft_memcpy.c ft_memmove.c ft_strlcpy.c ft_strlcat.c ft_strdup.c ft_strchr.c\
	ft_strrchr.c ft_toupper.c ft_tolower.c ft_strncmp.c ft_strlen.c ft_isdigit.c\
	ft_strnstr.c ft_strlcat.c ft_substr.c ft_strjoin.c ft_putchar_fd.c ft_putstr_fd.c \
	ft_putendl_fd.c ft_putnbr_fd.c ft_strmapi.c ft_striteri.c ft_itoa.c ft_split.c\
	ft_strtrim.c\

BONUS_SRCS := \
	ft_lstnew.c ft_lstadd_front.c ft_lstsize.c\
	ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c\
	ft_lstiter.c ft_lstmap.c\

OBJS := $(SRCS:.c=.o)

BONUS_OBJS := $(BONUS_SRCS:.c=.o)


all : $(NAME) bonus

$(NAME) : $(OBJS)
		ar -rcs $(NAME) $(OBJS)

bonus : $(BONUS_OBJS)
		ar -rcs $(NAME) $(BONUS_OBJS)

clean :
		rm -f $(OBJS) $(BONUS_OBJS)

fclean : clean
		rm -f $(NAME)

re : fclean all
