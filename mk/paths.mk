BIN_DIR := bin
INC_DIR := inc
SRC_DIR := src
SHR_DIR := shared

SHR_INC_DIR := $(INC_DIR)/$(SHR_DIR)
SHR_SRC_DIR := $(SRC_DIR)/$(SHR_DIR)
SHR_BIN_DIR := $(BIN_DIR)/$(SHR_DIR)


$(BIN_DIR):
	-mkdir -p $@