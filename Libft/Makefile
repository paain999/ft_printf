#VARIABLES:
NAME = libft.a
INCLUDE = ../include
LIB = ar rcs
RM = rm -f
CC = gcc
CCFLAGS = -Wall -Wextra -Werror

#SOURCES:
SRC =	ft_memset.c ft_bzero.c ft_strlen.c ft_atoi.c ft_isdigit.c ft_isalpha.c\
ft_isprint.c ft_isascii.c ft_isalnum.c ft_memchr.c ft_memcpy.c\
ft_memcmp.c ft_memmove.c ft_strchr.c ft_strdup.c ft_strlcat.c ft_strlcpy.c\
ft_strncmp.c ft_toupper.c ft_tolower.c ft_strnstr.c ft_strrchr.c ft_calloc.c ft_substr.c\
ft_strtrim.c ft_split.c ft_strjoin.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c\

### 

OBJ_DIR = obj/
OBJS = $(addprefix $(OBJ_DIR), $(addsuffix .o, $(SRC)))
#OBJ = $(SRC:.c=.o)
OBJSF	= .cache_exists

all: $(NAME)

$(NAME): $(OBJS) $(INCLUDE)
	@$(LIB) $(NAME) $(OBJS)
	@ranlib $(NAME)

$(OBJ_DIR)%.o: %.c | $(OBJSF)
	$(CC) $(CCFLAGS) -c $< -o $@

$(OBJSF):
		@mkdir -p $(OBJ_DIR)

clean:
	@$(RM) -rf $(OBJ_DIR)
	@$(RM) -f $(OBJSF)

fclean: clean
	@$(RM) $(NAME)

re: fclean all

