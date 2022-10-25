TARGET = app

SRCS = $(shell find ./src -type f -name *.cpp)
HEADS = $(shell find ./include -type f -name *.h)
OBJS = $(SRCS:.cpp=.o)
DEPS = Makefile.depend

INCLUDES = -I./include
CXXFLAGS = -Wall $(INCLUDES) # -02 is optimization level, -Wall is warning level
LDFLAGS = # -1m is memory size

all: $(TARGET)

$(TARGET): $(OBJS) $(HEADS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

run: all
	@./$(TARGET)

depend:
	$(CXX) $(INCLUDES) -MM $(SRCS) > $(DEPS)

clean:
	$(RM) $(OBJS) $(TARGET) 

# -include $(DEPS)

# Notes
# $(RM) = rm -f
# make clean -s && make -j4 -s && make run 