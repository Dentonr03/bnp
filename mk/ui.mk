UI_HEADERS := $(UI_INC_DIR)/*.hpp
UI_SOURCES := $(UI_SRC_DIR)/*.cpp
UI_OBJECTS := $(UI_BIN_DIR)/*.o
UI_INCLUDES := -I$(UI_INC_DIR) -I$(SHR_INC_DIR)


$(UI_OBJECTS): $(UI_BIN_DIR) $(UI_HEADERS) $(UI_SOURCES)
	$(CXX) $(CXXFLAGS) $(UI_INCLUDES) -c $(UI_SOURCES)
	mv *.o $<

$(UI_BIN_DIR): $(BIN_DIR)
	-mkdir -p $@