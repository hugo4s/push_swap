NAME = push_swap

SRCS =  $(wildcard src/*.c utils/*.c)

OBJS = ${SRCS:.c=.o}

CC = cc
CFLAGS = -Wall -Wextra -Werror -I includes

RM = rm -rf

all: ${NAME}
${NAME}: ${OBJS}
	@${MAKE} -C ./libft
	@${CC} ${CFLAGS} ${OBJS} ./libft/libft.a -o ${NAME}

clean: 
	@${MAKE} -C ./libft fclean
	@${RM} ${OBJS}

fclean: clean
	@${RM} ${NAME}

re: fclean all

.PHONY: all clean fclean re