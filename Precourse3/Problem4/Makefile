CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++11

SRCS = main.cpp KMeans.cpp Point.cpp
OBJS = $(SRCS:.cpp=.o)
EXEC = kmeans

all: $(EXEC)

$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $(EXEC) $(OBJS)

%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

clean:
	rm -f $(OBJS) $(EXEC)

