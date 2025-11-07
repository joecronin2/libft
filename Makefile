CC = cc
AR = ar
MAKE = make
CFLAGS = -Iinclude -Wall -Wextra -Werror -pedantic -fsanitize=address

TARGET = libft.a

SRCS := $(shell find ./src -type f -name '*.c')

OBJS = $(SRCS:.c=.o)

$(TARGET): $(OBJS)
	$(AR) rcs $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

all: $(TARGET)

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)

re: fclean 
	$(MAKE) all

.PHONY: all clean fclean re
