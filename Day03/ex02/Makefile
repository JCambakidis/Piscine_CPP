# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jcambaki <jcambaki@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/11/24 13:37:35 by jcambaki          #+#    #+#              #
#    Updated: 2021/10/07 15:40:39 by jcambaki         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Colors
GREY = \033[4;34m
RED = \033[1;31m
GREEN = \033[3;32m
YELLOW = \033[2;49;33m
BLUE = \033[4;34m
BLUEE = \033[3;34m
PURPLE = \033[3;35m
CYAN = \033[3;36m
RESET = \033[0m
ICONOK = \033[1;32m
ICONKO = \033[1;31m
CO_DELET = \033[3;31m
CO_A_OUT = \033[96m
WHITE = \033[1;49;97m

INCLUDES	=	./ClapTrap.hpp ./ScavTrap.hpp ./FragTrap.hpp

NAME		= 	ClapTrap

CFLAGS		= 	-Wall -Wextra -Werror

SRCS		=	./main.cpp ./ClapTrap.cpp ./ScavTrap.cpp ./FragTrap.cpp

OBJS		= 	$(SRCS:.c=.o)

GCC			= 	clang++

RM			= 	@rm -f

all:			$(NAME)

%.o:			
				$(GCC) $(CFLAGS) $(INCLUDES) -c $< -o $@
				@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUEE): $(PURPLE)$<$(RESET)"

$(NAME): 		$(OBJS) $(INCLUDES)
				$(GCC) $(CFLAGS) -o $(NAME) $(OBJS)
				@printf "\033[2K\r$(BLUE)$(NAME)$(RESET)$(BLUEE): $(ICONOK)Compiled [√]$(RESET)\n"


clean:
				@printf "\033[2K\r$(CYAN)cleaning$(RESET)$(BLUEE): $(ICONOK)Complete [√]$(RESET)\n"

fclean:			clean
				@$(RM) $(NAME)

re:				fclean	all

norminette: 	clean
				@echo " "
				norminette srcs
				@echo " "
				norminette includes

sh:				
				./scripts/make.sh

.PHONY:			make all clean fclean re lbxmk sh norminette