CXX = g++
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
TARGET = target/redesigned-garbanzo
INCLUDE = -I ./include
CFLAGS = -g -Wall -std=c++11 $(INCLUDE)

CLEANFILES = obj/* *~ $(TARGET)

all: $(TARGET)

obj/main.o: src/main.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

obj/Game.o: src/Game.cpp
	$(CXX) $(CFLAGS) -c $< -o $@

$(TARGET): obj/main.o obj/Game.o
	$(CXX) obj/*.o -o $(TARGET) $(LDFLAGS)


.PHONY: clean
clean:
	rm -f $(CLEANFILES)
