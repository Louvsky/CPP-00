# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lgasqui <lgasqui@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/11/20 09:42:33 by lgasqui           #+#    #+#              #
#    Updated: 2024/11/20 09:42:34 by lgasqui          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #


##########################################################
#######ARGUMENTS

NAME            = megaphone
FLAGS          	= -Wall -Wextra -Werror -std=c++98
FILES           = megaphone.cpp
OBJECTS         = $(FILES:.cpp=.o)
CC              = c++
RM              = rm -f

##########################################################
#######RULES

all:	$(NAME)

.cpp.o:
			$(CC) $(FLAGS) -c $< -o ${<:.cpp=.o}
                
$(NAME):	$(OBJECTS)
			$(CC) $(FLAGS) -I ./ -o $(NAME) $(OBJECTS)    
                            
clean:
		$(RM) $(OBJECTS)                
fclean: clean
			$(RM) $(NAME)
re: fclean all
.PHONY: all clean fclean re