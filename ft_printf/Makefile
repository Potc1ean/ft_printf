# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: ichpakov <ichpakov@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/30 03:25:27 by ichpakov          #+#    #+#              #
#    Updated: 2023/11/30 03:39:46 by ichpakov         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libftprintf.a

CFLAGS = -Wall -Werror -Wextra

SOURCES = ft_printf.c print_format.c print_character.c print_digit.c print_string.c print_hex_lower.c print_hex_upper.c print_unsigned_int.c print_void_pointer.c 

OBJ_FILES = $(SOURCES:.c=.o)

#colours
GREEN = \033[0;92m

all: $(NAME)

$(NAME):
	cc $(CFLAGS) -c $(SOURCES)
	@ar rcs $(NAME) $(OBJ_FILES)
	@echo "$(GREEN)libftprintf.a has been compiled!"

clean:
	@rm -f $(OBJ_FILES)
	@echo "$(GREEN)The object files have been removed!"

fclean: 
	@rm -f $(OBJ_FILES)
	@rm -f $(NAME)
	@echo "$(GREEN)The object files and library have been removed!"

re:	fclean $(NAME)

.PHONY:			all clean fclean re bonus