CXX = g++
FILES = main.cpp civilization.cpp tech_card.cpp tech_tree.cpp \
		attribute.cpp resource.cpp 

TEST := test.cpp $(wildcard source/*.cpp) $(wildcard source/techcards/*.cpp) 

OUT_EXE = civilization.exe

build: $(FILES) 
	$(CXX) $(FILES) -o $(OUT_EXE)

test: $(TEST) 
	$(CXX) $(TEST) -o $(OUT_EXE)

new: $(TEST)
	@echo $(TEST)