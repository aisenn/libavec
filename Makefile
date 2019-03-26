#******************************************************************************#
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: aabdulla <aabdulla@student.unit.ua>        +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2019/02/19 15:27:38 by aabdulla          #+#    #+#              #
#    Updated: 2019/02/19 15:27:43 by aabdulla         ###   ########.fr        #
#                                                                              #
#******************************************************************************#

NAME = libavec.a
HEADER = libavec.h
OBJDIR	= ./obj/
OBJ = $(addprefix $(OBJDIR),$(SRC:.c=.o))

SRC = 	ft_vdot.c \
        ft_vlength.c \
        ft_vmult.c \
        ft_vnorm.c \
        ft_vopmult.c \
        ft_vcross.c \
		ft_vdist.c \

all: obj $(NAME)

obj:
	@ mkdir -p $(OBJDIR)

$(NAME): $(OBJ)
	@ar rc $(NAME) $(OBJ)
	@ranlib $(NAME)

$(OBJDIR)%.o: %.c
	@ gcc $(CFLAGS) -I $(HEADER) -c -o $@ $^

clean:
	@ /bin/rm -rf $(OBJDIR)

fclean: clean
	@ /bin/rm -f $(NAME)

re: fclean all

.PHONY: all clean fclean re