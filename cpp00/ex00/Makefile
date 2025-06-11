# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 09:03:55 by tat-nguy          #+#    #+#              #
#    Updated: 2025/06/11 09:22:33 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# *************** Color Definition **************** #

RED = \033[91m
YELLOW = \033[33m
GREEN = \033[92m

# ************************************************* #

NAME = megaphone

# Source Files
SRC			= megaphone.cpp

# Object Files
OBJS 		= $(SRC:.cpp=.o)

# Include and Flags
CFLAGS 		= -Wall -Wextra -Werror -std=c++98 -g
CC 			= c++
RM			= rm -rf

# Target
all: $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)wait for compilation...\n"
	@$(CC) $(OBJS) -o $(NAME) $(CFLAGS)
	@echo "$(GREEN)Compiled!\n"

# Clean
clean:
	@$(RM) $(OBJS)
	@echo "$(RED)Deleted object files!\n"
	
fclean: clean
	@$(RM) $(NAME)
	@echo "$(RED)Deleted $(NAME)!\n"

re: fclean all

.PHONY: all clean fclean re


