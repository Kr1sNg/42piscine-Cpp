# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 09:03:55 by tat-nguy          #+#    #+#              #
#    Updated: 2025/06/22 10:43:25 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ***** Color Definition ***** #

RED = \033[91m
YELLOW = \033[33m
GREEN = \033[92m
RESET = \033[0m

# **************************** #

NAME = banksters

# Source Files
SRC_DIR 	= src
SRCS     	= $(wildcard $(SRC_DIR)/*.cpp)

# Object Files
OBJS = $(SRCS:.cpp=.o)

# Include
INCLUDES	= includes

# Compiler and Flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98 -I$(INCLUDES)
RM			= rm -rf

# Target
all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@echo "$(YELLOW)waiting for compilation...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 
	@echo "$(GREEN)Compiled successful << $(NAME) >>$(RESET)"

# Clean
clean:
	@$(RM) $(OBJS)
	@echo "$(RED)Deleted object files!$(RESET)"

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(RED)Deleted << $(NAME) >>!$(RESET)"

re: fclean all

.PHONY: all clean fclean re


