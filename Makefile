CC = gcc
CFLAGS = -Wall -Wextra
TARGET1 = main
DEP1= strfunc

all: $(TARGET1)

$(TARGET1): $(TARGET1).c $(DEP1).o
	$(CC) $(CFLAGS) $(DEP1).o -o $(TARGET1) $(TARGET1).c
$(DEP1).o: $(DEP1).c
	$(CC) $(CFLAGS) -c $(DEP1).c

clean:
	rm $(TARGET1) *.o