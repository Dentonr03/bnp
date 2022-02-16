BNP := bnp

.PHONY: all clean
all:
	@$(MAKE) $(BNP)
clean:
	rm -rf $(BIN_DIR) $(BNP) *.o


include mk/cc.mk
include mk/paths.mk
include mk/shared.mk
include mk/bnp.mk