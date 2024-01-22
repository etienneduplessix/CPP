CC = g++
CFLAGS = -Wall -Wextra -Werror

all: megaphone

megaphone: cpp00/ex00/megaphone.cpp
	$(CC) $(CFLAGS) cpp00/ex00/megaphone.cpp -o megaphone

clean:
	rm -f megaphone

.PHONY: all clean
