# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:19:42 by tat-nguy          #+#    #+#              #
#    Updated: 2025/06/20 19:58:49 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

# Source Files
SRC_DIR 	= src
SRCS     	= $(wildcard $(SRC_DIR)/*.cpp)

# Object Files
OBJS = $(SRCS:.cpp=.o)

# Include
INCLUDES	= -I includes

# Compiler and Flags
CC			= c++
CFLAGS		= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

# Targets
all:	$(NAME)

$(NAME):	$(OBJS)
	$(CC) $(CFLAGS) $(INCLUDES) -o $(NAME) $(OBJS)

# Clean
clean:
	@$(RM) $(OBJS)

fclean:	clean
	@$(RM) $(NAME)

re: fclean all

.PHONY: all clean fclean re
