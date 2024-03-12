NAME = libftprintf.a
SRCS = ft_print_char.c \
		ft_print_dec.c \
		ft_print_hex.c \
		ft_print_ptr.c \
		ft_print_str.c \
		ft_print_uns.c \
		ft_printf_utils.c \
		ft_printf.c
OBJS = $(SRCS:.c=.o)
CFLAGS = -Wall -Wextra -Werror
.PHONY: all re, clean ft_lstclear_bonus

all : $(NAME)

$(NAME) : $(OBJS)
	ar rcs libftprintf.a $(OBJS)

%.o : %.c
	gcc -c -MD $(CFLAGS) $< -o $@

-include *.d

re: fclean all

fclean : clean
	rm -rf $(NAME)
clean :
	rm -rf $(OBJS) *.d