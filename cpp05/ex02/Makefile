NAME = Bureau

CC = @c++

CFLAGS = -Wall -Wextra -Werror -std=c++98

CPP_FILES = main.cpp \
			Bureaucrat.cpp \
			Form.cpp \
			ShrubberyCreationForm.cpp \
			RobotomyRequestForm.cpp \
			PresidentialPardonForm.cpp \

all : $(NAME)

$(NAME) : $(CPP_FILES)
	$(CC) $(CFLAGS) $(CPP_FILES) -o $(NAME)

clean :
	@rm -rf $(NAME) *_shrubbery

re : $(clean) $(all)