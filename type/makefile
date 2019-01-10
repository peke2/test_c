
CC = g++

TARGETS = auto.exe rvalue.exe

all : $(TARGETS)

%.exe : %.cpp
	$(CC) $< -o $@

clean:
	rm *.exe
