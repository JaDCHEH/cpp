# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: cjad <cjad@student.42.fr>                  +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/29 11:51:48 by cjad              #+#    #+#              #
#    Updated: 2022/06/02 14:08:04 by cjad             ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = PhoneBook

CC = @c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp \
			Contact.class.cpp \
			PhoneBook.class.cpp \

all : $(NAME)

$(NAME) : $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o $(NAME)

clean :
	@rm -rf $(NAME)

re : $(clean) $(all)