CXX = g++
FILES = main.cpp civilization.cpp tech_card.cpp tech_tree.cpp \
		attribute.cpp resource.cpp 

TEST = test.cpp tech_card.cpp civilization.cpp \
	   resource.cpp attribute.cpp tech_tree.cpp \
	   building.cpp unit.cpp army.cpp tile.cpp \
	   city.cpp square.cpp game_board.cpp \
	   culture_hand.cpp culture_card.cpp

OUT_EXE = civilization.exe

build: $(FILES) 
	$(CXX) $(FILES) -o $(OUT_EXE)

test: $(TEST) 
	$(CXX) $(TEST) -o $(OUT_EXE)