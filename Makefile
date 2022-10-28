TARGET = app


SRCS = $(shell find ./src -type f -name *.cpp)
HEADS = $(shell find ./include -type f -name *.h)
OBJS = $(SRCS:.cpp=.o)
DEPS = Makefile.depend

INCLUDES = -I./include
CXXFLAGS = -std=c++20 -Wall $(INCLUDES) # -02 is optimization level, -Wall is warning level
LDFLAGS = # -1m is memory size

# Library Paths

# Library include pahtes


# Google Test Lib
GTEST_DIR = ../libs/googletest/googletest
GTEST_HEADERS = $(GTEST_DIR)/include/gtest/*.h \
                $(GTEST_DIR)/include/gtest/internal/*.h

all: $(TARGET)

$(TARGET): $(OBJS) $(HEADS)
	$(CXX) $(LDFLAGS) -o $@ $(OBJS)

run: all
	@./$(TARGET)

run_test:


depend:
	$(CXX) $(INCLUDES) -MM $(SRCS) > $(DEPS)

clean:
	$(RM) $(OBJS) $(TARGET) 

# -include $(DEPS)

# Notes
# $(RM) = rm -f
# make clean -s && make -j4 -s && make run 