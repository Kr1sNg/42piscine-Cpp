# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tat-nguy <tat-nguy@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2025/06/26 17:42:09 by tat-nguy          #+#    #+#              #
#    Updated: 2025/08/02 11:54:32 by tat-nguy         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# ***** Color Definition ***** #

RED = \033[91m
YELLOW = \033[33m
GREEN = \033[92m
RESET = \033[0m

# **************************** #

NAME 		= Iter

# Source Files
SRCS     	= main.cpp test.cpp

# Object Files
OBJS = $(SRCS:.cpp=.o)

# Compiler and Flags
CXX			= c++
CXXFLAGS	= -Wall -Wextra -Werror -std=c++98
RM			= rm -rf

# Targets
all:	$(NAME)

%.o: %.cpp
	@$(CXX) $(CXXFLAGS) -c $< -o $@

$(NAME):	$(OBJS)
	@echo "$(YELLOW) 🛠️  waiting for compilation...$(RESET)"
	@$(CXX) $(CXXFLAGS) -o $(NAME) $(OBJS)
	@echo "$(GREEN) 🤖  Compiled successful ✴️  $(NAME) ✴️$(RESET)"

# Clean
clean:
	@$(RM) $(OBJS)
	@echo "$(RED) 🗑️  Deleted object files.$(RESET)"

fclean:	clean
	@$(RM) $(NAME)
	@find . -name "*.dSYM" -type d -exec $(RM) {} +
	@echo "$(RED) 🚽  Deleted ❄️  $(NAME) ❄️$(RESET)"

re: fclean all

# Debug & Memory leaks (iOs)
ASANFLAGS = -fsanitize=address -g
asan: fclean
	$(CXX) $(CXXFLAGS) $(ASANFLAGS) -o $(NAME) $(SRCS)

.PHONY: all clean fclean re asan
