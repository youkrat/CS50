CC = gcc 
#CFLAGS for flagging suspicious codde even when compilation succeeds
CFLAGS = -Wall -Wextra -Wpedantic -Wformat=2 -Wstrict-prototypes

all : final

final: main.o sensor.o
	$(CC) $(CFLAGS) main.o sensor.o -o final

main.o: main.c sensor.h
	$(CC) $(CFLAGS) -c main.c

sensor.o: sensor.c sensor.h
	$(CC) $(CFLAGS) -c sensor.c

clean:
	@echo "Removing program files..."
	rm -f *.o final

#Prevents make from treating all and clean as files 
.PHONY : all clean