NAME = libftprintf.a

SRCS = ft_treat_char.c\
       ft_treat_unsigned.c\
	   ft_change_base.c\
	   ft_treat_hexa.c\
	   ft_count_output.c\
	   ft_treat_int.c\
	   printf_check.c\
	   ft_printf.c\
	   ft_treat_point.c\
	   ft_putstr_count.c\
	   ft_treat_something.c\
	   ft_tolower_all.c\
	   ft_treat_string.c

OBJS = $(SRCS:%.c=%.o)
LIBFTDIR = ./libft
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)
$(NAME): $(OBJS)
	$(MAKE) -C $(LIBFTDIR)
	cp libft/libft.a $(NAME)
	ar rcs $(NAME) $(OBJS)
srcs/%.o:srcs/%.c
	cc $(CFLAGS) -Iincludes -c $< -o $@

.PHONY: clean
clean:
		$(MAKE) -C $(LIBFTDIR) clean
		rm -f $(OBJS)

.PHONY: fclean
fclean: clean $(LIBFTDIR) fclean
		rm -f $(NAME)

re : fclean all
