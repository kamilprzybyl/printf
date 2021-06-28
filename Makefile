FAGS = 	-Wall -Wextra -Werror
NAME = 	libftprintf.a
SRC = 	ft_printf.c \
		handle_char.c \
		handle_hex.c \
		handle_int.c \
		handle_u_int.c \
		handle_pointer.c \
		handle_precision.c \
		handle_width.c \
		handle_string.c \
		handle_modulo.c \
		check_format.c \
		utils/ft_isdigit.c \
		utils/ft_putchar.c \
		utils/ft_putstr.c \
		utils/ft_dec_to_hex.c \
		utils/ft_strlen.c \
		utils/ft_toupper.c \
		utils/ft_strrev.c \
		utils/ft_atoi.c \
		utils/ft_itoa.c \
		utils/ft_utoa.c \
		utils/ft_strlcpy.c \
		utils/ft_strlcat.c \
		utils/ft_memcmp.c \
		utils/ft_memset.c \
		utils/ft_abs.c \
		utils/ft_strdup.c

OBJ = 	$(SRC:.c=.o)

all: $(NAME) #make all if $(NAME) doesn't exist

%.o: %.c
	gcc -c $(FLAGS) $^ -o $@

$(NAME): $(OBJ)
	ar -rc $@ $^

test: 
	gcc test.c $(NAME) -o $@
	./test

clean:
	rm -fr $(OBJ)

fclean:
	make clean
	rm -fr test
	rm -fr $(NAME)

re: fclean all