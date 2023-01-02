# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: dajimene <dajimene@student.42urduliz.co    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 13:35:01 by dajimene          #+#    #+#              #
#    Updated: 2022/12/30 16:08:45 by dajimene         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

#VARIABLES:
NAME		=libftprintf.a
LIBFT		=Libft
INCLUDE		=include
SRC_DIR		=src/
OBJ_DIR		=obj/
CC			=gcc
CFLAGS		= -Wall -Wextra -Werror -I
RM			= rm -f
AR			 = ar rcs

#SOURCES
SRC_FILES	= ft_printf utils
SRC			= $(addprefix $(SRC_DIR), $(addsuffix .c, $(SRC_FILES)))
OBJ			= $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC_FILES)))


OBJSF		=.cache_exists

all: 		$(NAME)

$(NAME):	$(OBJ)
	@make -C $(LIBFT)
	@cp $(LIBFT)/libft.a
	@mv libft.a $(NAME)
	@$(AR) $(NAME) $(OBJ)

$(OBJ_DIR)%.o: $(SRC_DIR)%.c | $(OBJSF)
	@$(CC) $(CFLAGS) $(INCLUDE) -c $< -o $@	
			
$(OBJSF):
	@mkdir -p $(OBJ_DIR)
clean:
	$(RM) -rf $(OBJ_DIR)
	@make clean -C $(LIBFT)
	$(RM) $(OBJSF)
	
fclean:		clean
	$(RM) $(NAME)
	$(RM) $(LIBFT)/libft.a
			
re:			fclean all