#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: oumali <oumali@student.42.fr>              +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/10/06 10:29:24 by oumali            #+#    #+#              #
#    Updated: 2021/10/11 17:21:28 by oumali           ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	= libft.a
SRCS	= ft_isalnum.c ft_isalpha.c ft_tolower.c ft_strjoin.c \
          ft_isascii.c ft_isdigit.c ft_isprint.c ft_strtrim.c \
          ft_memcpy.c ft_memmove.c ft_memset.c  ft_atoi.c \
	  	  ft_strlen.c ft_strchr.c ft_toupper.c ft_strmapi.c \
	      ft_bzero.c ft_memchr.c ft_memcmp.c ft_strrchr.c \
	      ft_strlcpy.c ft_strncmp.c ft_strnstr.c  ft_split.c \
	      ft_strlcat.c ft_calloc.c ft_strdup.c ft_substr.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c \
		  ft_striteri.c ft_itoa.c
BONUS 	= ft_lstnew.c ft_lstlast.c ft_lstadd_back.c ft_lstclear.c \
		  ft_lstsize.c ft_lstdelone.c ft_lstiter.c ft_lstmap.c \
		  ft_lstadd_front.c

			

HEADER	= ./libft.h
OBJS	= $(SRCS:.c=.o)
OBJB	= $(BONUS:.c=.o)
LIBC	= ar rc
LIBR	= ranlib
CC		= gcc
CFLAGS	= -Wall -Wextra -Werror
RM		= rm -f

.c.o:
			$(CC) $(CFLAGS) -c $< -o $(<:.c=.o) -I$(HEADER)

$(NAME):	$(OBJS)
			$(LIBC) $(NAME) $(OBJS)
			$(LIBR) $(NAME)

all:		$(NAME)

bonus:		$(OBJB)
			$(LIBC) $(NAME) $(OBJB)
			$(LIBR) $(NAME)

clean:
			$(RM) $(OBJS) $(OBJB)

fclean:		clean
			$(RM) $(NAME)

re:			fclean all

rebonus:	fclean bonus

norm:
			norminette -R CheckForbiddenSourceHeader *.c
			norminette -R CheckDefine *.h

.PHONY:		all clean fclean re .c.o norm bonus rebonus