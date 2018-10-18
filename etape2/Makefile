CC =    gcc
CFLAGS =    -Wall -Werror -Wextra
FILES =         main.o  \
                readline.o              \
                move.o          \
                fillchar.o      \
                move_bottom.o   \
                move_top.o      \
                move_right.o    \
                move_left.o     \
		move2.o
PROG =  not_mg
LIB =   -lmy -L../lib_my

all:    $(FILES)
	$(CC) $(CFLAGS) $(FILES) $(LIB) -o $(PROG)

fillchar.o: fillchar.c
	$(CC) -c $(CFLAGS) fillchar.c

move.o: move/move.c
	$(CC) -c $(CFLAGS) move/move.c

move2.o: move/move2.c
	$(CC) -c $(CFLAGS) move/move2.c

move_bottom.o: move/move_bottom.c
	$(CC) -c $(CFLAGS) move/move_bottom.c

move_top.o: move/move_top.c
	$(CC) -c $(CFLAGS) move/move_top.c

move_right.o: move/move_right.c
	$(CC) -c $(CFLAGS) move/move_right.c

move_left.o: move/move_left.c
	$(CC) -c $(CFLAGS) move/move_left.c

main.o: main.c
	$(CC) -c $(CFLAGS) main.c

readline.o: readline.c
	$(CC) -c $(CFLAGS) readline.c

clean:
	rm -rf *.o

fclean:
	rm -rf $(PROG)

re:
	fclean all

.PHONY: clean

