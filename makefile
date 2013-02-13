CXX = g++

SRCS := $(wildcard source/*/*.cpp)
OBJS := $(SRCS:.cpp=.o)
OBJS := $(notdir $(CFILES))
OBJS := $(patsubst %, $(BUILD)%.o, $(OBJS))

all: test

$(OBJS): %.o : %.h

.cpp.o:
	$(CXX) -Wall -c $<

test: $(OBJS)
	$(CXX) -Wall $^ test.cpp -o $@

clean:
	rm -f $(OBJS) test

# CXX = g++
# FILES = main.cpp civilization.cpp tech_card.cpp tech_tree.cpp \
# 		attribute.cpp resource.cpp 

# # TEST := test.cpp $(wildcard source/*.cpp) $(wildcard source/techcards/*.cpp) $(wildcard source/buildings/*.cpp) $(wildcard source/abilities/*.cpp) 
# #TEST := test.cpp $(wildcard source/*/*.cpp)

# OUT_EXE = civilization.exe

# build: $(FILES) 
# 	$(CXX) $(FILES) -o $(OUT_EXE)

# test: $(TEST) 
# 	$(CXX) $(TEST) -o $(OUT_EXE)

# new: $(TEST)
# 	@echo $(TEST)