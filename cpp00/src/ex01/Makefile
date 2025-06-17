# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/07 15:19:42 by tat-nguy          #+#    #+#              #
#    Updated: 2025/01/01 12:34:17 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

# Source Files
SRCS = megaphone.cpp

# Object Files
OBJS = $(SRCS:.cpp=.o)

# # Include
# INCLUDES	= -I includes

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
