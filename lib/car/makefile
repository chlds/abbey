# Making libcar.so

MSG = "< Building dynamic library libcar.so"

L = car
LBY = lib$(L).so

LBY_DIR = ./
OBJ_DIR = ./obj/
SRC_DIR = ./obj/src/
ASM_DIR = ./obj/src/
HDR_DIR = ./obj/src/incl/
HDRS = $(HDR_DIR)*.h
ASMS = $(ASM_DIR)*.s
SRCS = $(SRC_DIR)*.c
OBJS = $(OBJ_DIR)*.o
TARGET = $(LBY_DIR)$(LBY)

LB = gcc
LFLAG = -shared -o
AS = gcc
SFLAG = -masm=intel -S
CC = gcc
CFLAG = -fPIC -c

$(TARGET): $(OBJS)
	@echo $(MSG)
	$(LB) $(LFLAG) $(TARGET) $(OBJS)

$(OBJS): $(SRCS) $(HDRS)
	@echo $(MSG)
	$(CC) $(CFLAG) $(SRCS)
	cp -t $(OBJ_DIR) $(LBY_DIR)*.o
	rm $(LBY_DIR)*.o

.PHONY: _asm
_asm:
	$(AS) $(SFLAG) $(SRCS)
	cp -t $(ASM_DIR) $(LBY_DIR)*.s
	rm $(LBY_DIR)*.s

.PHONY: _clean_asm
_clean_asm:
	rm $(ASM_DIR)*.s

.PHONY: _clean_obj
_clean_obj:
	rm $(OBJ_DIR)*.o

.PHONY: _clean_all
_clean_all:
	rm $(TARGET)
	rm $(OBJS)
	rm $(ASMS)

# and more..
