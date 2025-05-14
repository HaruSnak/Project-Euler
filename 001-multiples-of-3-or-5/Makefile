NAME = euler001
CXX = c++
CXXFLAGS = -std=c++98 -Wall -Wextra -Werror
SRC_1 = main.cpp

all: $(NAME)

$(NAME): $(SRC_1)
	$(CXX) $(CXXFLAGS) -o $(NAME) $(SRC_1)

clean:
	rm -f $(NAME)

re: clean all