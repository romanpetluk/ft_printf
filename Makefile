NAME = libftprintf.a

GCC = gcc -Wall -Wextra -Werror

INCLUDES = -I.

OBJECTS = 						    \
			./ft_printf.o		    \
			./ft_printf_putstr.o	\
			./ft_printf_put.o		\
			./ft_printf_size.o		\
			./ft_printf_type.o      \
			./ft_printf_putstr.o    \
			./ft_printf_putnbr.o    \
			./ft_printf_putbase.o   \
			./ft_printf_putbasex.o  \
			./ft_printf_pointer.o   \
			./ft_printf_unicode.o   \
			./ft_printf_unimask.o   \
			./ft_printf_auxiliary.o \

all : $(NAME)

$(NAME) : $(OBJECTS)
	@ ar rc $(NAME) $(OBJECTS)
	@ ranlib $(NAME)

%.o : %.c
	@ $(GCC) -o $@ -c $< $(INCLUDES)

clean :
	@ rm -rf $(OBJECTS)

fclean : clean
	@ rm -rf $(NAME)

re : fclean all
