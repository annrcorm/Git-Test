#Annabelle Cormia

#Compiler version
CC = g++

#Target
TARGET = test

#Compile
CFLAGS = -c -Wall 

all: $(TARGET)

$(TARGET): main.o
	$(CC) main.o -o $(TARGET)

main.o: main.cpp
	$(CC) $(CFLAGS) main.cpp

clean:
	rm *.o $(TARGET) *~
