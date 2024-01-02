CXX=g++

CFLAGS=-std=c++14 -O3 -Wall -march=native -I/usr/local/include
LDFLAGS=-L/usr/local/lib
LDLIBS=-lstdc++

TARGET=main
OBJECTS=main.o

all: $(TARGET)

$(TARGET): $(OBJECTS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJECTS) $(LDFLAGS) $(LDLIBS)

%.o: %.cpp
	$(CXX) $(CFLAGS) -c -o $@ $^

clean:
	rm -rf $(TARGET) $(OBJECTS)

run: all
	./$(TARGET)
