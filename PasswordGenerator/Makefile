CXX = g++

TARGET = PasswordGenerator.exe

SRCS = src/main.cpp src/util.cpp src/Generator.cpp

OBJS = obj/main.o obj/util.o obj/Generator.o

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $(TARGET) $(OBJS)

obj/%.o: src/%.cpp
	$(CXX) -c $< -o $@

clean:
	rm -f $(TARGET) obj/*.o
