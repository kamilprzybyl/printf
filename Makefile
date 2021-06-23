FAGS = 	-Wall -Wextra -Werror
NAME = 	libftprintf.a
SRC = 	ft_printf.c \
		handle_char.c \
		handle_hex.c \
		handle_int.c \
		handle_pointer.c \
		handle_prec.c \
		handle_width.c \
		handle_zero_flag.c \
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
		ft_strlcpy.c \
		ft_strlcat.c \
		ft_memcmp.c

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