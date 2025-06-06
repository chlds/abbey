# Making libcar.a

L = car
LBY = lib$(L).a
LBY_DIR = ./
OBJ_DIR = ./obj/
SRC_DIR = ./obj/src/
HDR_DIR = ./obj/src/incl/
ASM_DIR = ./obj/src/incl/asm/
ASMS = $(SRCS:$(SRC_DIR)%.c=$(ASM_DIR)%.s)
HDRS = $(wildcard $(HDR_DIR)*.h)
SRCS = $(wildcard $(SRC_DIR)*.c)
OBJS = $(SRCS:$(SRC_DIR)%.c=$(OBJ_DIR)%.o)
TARGET = $(LBY_DIR)$(LBY)
AS = gcc
SFLAGS = -masm=intel
CC = gcc
CFLAGS = -fPIC
LB = ar
LFLAGS = rcs
MSG = "< Building static library $(LBY) "
MSG_X = "< Installing static library $(LBY) to $(X_DIR) "
X_DIR = /usr/local/lib/

all: $(TARGET)
$(TARGET): $(OBJS)
	@echo $(MSG)
	$(LB) $(LFLAGS) -o $@ $^

$(OBJ_DIR)%.o: $(SRC_DIR)%.c $(HDRS)
	$(CC) $(CFLAGS) -c $< -o $@

asm: $(ASMS)
$(ASM_DIR)%.s: $(SRC_DIR)%.c $(HDRS)
	@mkdir -p $(ASM_DIR)
	$(AS) $(SFLAGS) -S $< -o $@

clean_asm:
	rm -rf $(ASM_DIR)

clean_obj:
	rm $(OBJ_DIR)*.o

clean_lib:
	rm $(TARGET)

clean_all: clean_lib clean_obj clean_asm

install: $(TARGET)
	@echo $(MSG_X)
	# sudo cp $(TARGET) $(X_DIR)
	# sudo ranlib $(X_DIR)$(LBY)

.PHONY: install clean_all clean_lib clean_obj clean_asm asm all
