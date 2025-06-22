# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/11 09:03:55 by tat-nguy          #+#    #+#              #
#    Updated: 2025/06/22 22:49:41 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ***** Color Definition ***** #

RED 	= \033[91m
YELLOW 	= \033[33m
GREEN 	= \033[92m
RESET 	= \033[0m

# **************************** #

# ⚠️ with include guards << #prama once >>, we don't include .hpp files directly
# Instead, the complier will follow the #include ".hpp" directive inside the .cpp files
# Then compiles accordingly

NAME 	= banksters

# Source Files
SRCS 	= Account.cpp \
			tests.cpp

# Object Files
OBJS 	= $(SRCS:.cpp=.o)

# Include
# ⚠️ we don't use include here with ~ #prama once ~

# Compiler and Flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

# Target
all: $(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@echo "$(YELLOW) 🛠️  waiting for compilation...$(RESET)"
	@$(CXX) $(CXXFLAGS) $(OBJS) -o $(NAME) 
	@echo "$(GREEN) 🤖  Compiled successful ✴️  $(NAME) ✴️$(RESET)"

# Clean
clean:
	@$(RM) $(OBJS)
	@echo "$(RED) 🗑️  Deleted object files.$(RESET)"

fclean:	clean
	@$(RM) $(NAME)
	@echo "$(RED) 🚽  Deleted ❄️  $(NAME) ❄️$(RESET)"

re: fclean all

.PHONY: all clean fclean re
