NAME = Base

CC = @c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = util.cpp \
			Base.cpp \

all : $(NAME)

$(NAME) : $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o $(NAME)

clean :
	@rm -rf $(NAME)

re : clean all