NAME = PhoneBook

CPP	 = c++

CPP_FLAGS = -Wall -Wextra -Werror


CPP_VERSION = -std=c++98

FILES = main.cpp \

all	: $(NAME)

$(NAME) : $(FILES)
		$(CPP) $(CPP_FLAGS) $(CPP_VERSION) $(FILES) -o $(NAME)

RM = rm -rf

clean :
		$(RM) $(NAME)

re		: clean all