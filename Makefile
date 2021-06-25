FAGS = 	-Wall -Wextra -Werror
NAME = 	libftprintf.a
SRC = 	ft_printf.c \
		handle_char.c \
		handle_hex.c \
		handle_int.c \
		handle_pointer.c \
		handle_precision.c \
		handle_width.c \
		handle_string.c \
		handle_modulo.c \
		check_format.c \
		ft_isdigit.c \
		ft_putchar.c \
		ft_putstr.c \
		ft_dec_to_hex.c \
		ft_strlen.c \
		ft_toupper.c \
		ft_strrev.c \
		ft_atoi.c \
		ft_itoa.c \
		ft_utoa.c \
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memcmp.c \
		ft_memset.c \
		ft_abs.c \
		ft_strdup.c

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