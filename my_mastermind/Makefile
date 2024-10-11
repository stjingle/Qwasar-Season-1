CC = gcc
CFLAGS = -Wall -Wextra -std=c99
LDFLAGS =

SRCS = my_mastermind.c Stephen_functions.c
OBJS = $(SRCS:.c=.o)
HEADERS = Stephen_functions.h

TARGET = my_mastermind

.PHONY: all clean fclean

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(LDFLAGS) -o $@ $^

%.o: %.c $(HEADERS)
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	rm -f $(OBJS)

fclean: clean
	rm -f $(TARGET)
