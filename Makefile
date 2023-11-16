NAME = libftprintf.a

CC = cc
CFLAGS = -Wall -Wextra -Werror

SRC_DIR = .
OBJ_DIR = .

SRCS = 

BONUS = 

OBJS = $(SRCS:.c=.o)
BOBJS = $(BONUS:.c=.o)

$(NAME) : $(OBJS)
	ar rcs $(NAME) $(OBJS)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	cc $(CFLAGS) -c $< -o $@

all: $(NAME)

bonus: .bonus

.bonus: $(BOBJS) $(OBJS) 
	ar rcs $(NAME) $(BOBJS) $(OBJS)
	touch .bonus

clean:
	rm -f $(OBJS) $(BOBJS) .bonus

fclean: clean
	rm -f $(NAME)

re: fclean all

.PHONY : all clean fclean bonus re
