NAME:=Logger
CC:=gcc
CFLAGS:=-c -Isrc/include
LD:=gcc
LDFLAGS:=-o bin/$(NAME)
AR=ar
ARFLAGS=rcs bin/lib$(NAME).a
SOURCES=$(wildcard src/*.c)
OBJS:=$(patsubst src/%.c, bin/int/%.o, $(SOURCES))

.PHONY: clean build run

build: $(OBJS) src/include/logger.h
	$(AR) $(ARFLAGS) bin/int/*.o
	cp src/include/* include/logger

bin/int/%.o: src/%.c
	$(CC) $(CFLAGS) $< -o bin/int/$*.o

clean:
	rm -r bin
	mkdir -p bin/int
	rm -r include
	mkdir -p include/logger

run:
	./bin/$(NAME)
