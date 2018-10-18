CC =    gcc
CFLAGS =    -Wall -Werror -Wextra
FILES =		etape1main.o	\
		readline.o		\
		movement.o		\
		fillchar.o
PROG =  not_mg
LIB =   -lmy -L../lib_my

all:	$(FILES)
	$(CC) $(CFLAGS) $(FILES) $(LIB) -o $(PROG)

fillchar.o: fillchar.c
	$(CC) -c $(CFLAGS) fillchar.c

movement.o: movement.c
	$(CC) -c $(CFLAGS) movement.c

etape1main.o: etape1main.c
	$(CC) -c $(CFLAGS) etape1main.c

readline.o: readline.c
	$(CC) -c $(CFLAGS) readline.c

clean:
	rm -rf *.o

fclean:
	rm -rf $(PROG)

re:
	fclean all

.PHONY: clean
