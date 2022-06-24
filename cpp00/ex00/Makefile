# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/28 15:55:01 by cjad              #+#    #+#              #
#    Updated: 2022/06/24 14:10:21 by cjad             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = megaphone

CC = @c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = megaphone.cpp

all : $(NAME)

$(NAME) : $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o $(NAME)

clean :
	@rm -rf $(NAME)

re : clean all