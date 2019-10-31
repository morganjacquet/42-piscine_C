# **************************************************************************** #
#                                                           LE - /             #
#                                                               /              #
#    Makefile                                         .::    .:/ .      .::    #
#                                                  +:+:+   +:    +:  +:+:+     #
#    By: lsanchez <marvin@le-101.fr>                +:+   +:    +:    +:+      #
#                                                  #+#   #+    #+    #+#       #
#    Created: 2019/08/18 13:11:03 by lsanchez     #+#   ##    ##    #+#        #
#    Updated: 2019/08/21 21:13:05 by lsanchez    ###    #+. /#+    ###.fr      #
#                                                          /                   #
#                                                         /                    #
# **************************************************************************** #

NAME	=	bsq
SRCS	=	./treat_map_tab.c\
			./strlenrow.c\
			./valid_map.c\
			./create_tab.c\
			./functions.c\
			./malloc_free.c\
			./malloc_free_mapless.c\
			./make_square.c

OBJS	=	${SRCS:.c=.o}
CC		=	gcc
CFLAGS	+=	-Wall -Wextra -Werror $(OPTION)
H_F		=	header.h
OPTION	=	-I$(H_F)
RM		=	rm -f

all		:	$(NAME)

$(NAME)	:
			$(CC) $(CFLAGS) -c $(SRCS)
			$(CC) $(CFLAGS) -o $(NAME) $(OBJS)
clean	:
			$(RM) $(OBJS)

fclean	:	clean
			$(RM) $(NAME)

re		:	fclean all
