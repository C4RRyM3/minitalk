SOURCES = server.c
OBJECTS = $(SOURCES:.c=.o)

CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: server


server: server.o libft
	$(CC) -o $@ $< -Llibft -lft

%.o: %.c
	$(CC) -c $(CFLAGS) $?

libft:
	make -C libft

clean:
	rm -f $(OBJECTS)
	make -C libft clean

fclean: clean
	rm -f server libft/libft.a

re: fclean all

.PHONY: all bonus libft clean fclean re