CC := gcc
CFLAGS := -Wall -Wextra -Werror -pedantic
SRC := $(wildcard *.c)
TARGET := tree_node

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) $^ -o $@

clean:
	rm -f $(TARGET)

.PHONY: all clean
