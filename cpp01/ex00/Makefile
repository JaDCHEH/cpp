NAME = zombie

CC = c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp        \
			newZombie.cpp   \
			Zombie.cpp      \
			randomChump.cpp \

all : $(NAME)

$(NAME) : $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o $(NAME)

clean :
	rm -rf $(NAME)

re : $(clean) $(all)