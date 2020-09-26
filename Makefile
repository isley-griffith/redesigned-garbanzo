CXX = g++
LDFLAGS = -lsfml-graphics -lsfml-window -lsfml-system
TARGET = g.out
SFML=

all: $(TARGET)

run: main.cpp
	$(CXX) $(SFML) main.cpp -o $(TARGET) $(LDFLAGS)

$(TARGET): run

clean:
	rm -f *.o *~ $(TARGET)