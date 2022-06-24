NAME = Account

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = tests.cpp \
			Account.cpp \

all : $(NAME)

$(NAME) : $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o $(NAME)

clean :
	rm -rf $(NAME)

re : clean all