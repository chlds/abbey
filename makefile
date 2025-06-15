# Making libabbey.a

L = abbey
LBY = lib$(L).a
LBY_DIR = ./lib/
ARC_LBY_DIR = $(LBY_DIR)arc/
ARC_OBJ_DIR = $(ARC_LBY_DIR)obj/
ARC_SRC_DIR = $(ARC_OBJ_DIR)src/
ARC_HDR_DIR = $(ARC_SRC_DIR)incl/
ARC_ASM_DIR = $(ARC_HDR_DIR)asm/
ARC_ASMS = $(ARC_SRCS:$(ARC_SRC_DIR)%.c=$(ARC_ASM_DIR)%.s)
ARC_HDRS = $(wildcard $(ARC_HDR_DIR)*.h)
ARC_SRCS = $(wildcard $(ARC_SRC_DIR)*.c)
ARC_OBJS = $(ARC_SRCS:$(ARC_SRC_DIR)%.c=$(ARC_OBJ_DIR)%.o)
CAR_LBY_DIR = $(LBY_DIR)car/
CAR_OBJ_DIR = $(CAR_LBY_DIR)obj/
CAR_SRC_DIR = $(CAR_OBJ_DIR)src/
CAR_HDR_DIR = $(CAR_SRC_DIR)incl/
CAR_ASM_DIR = $(CAR_HDR_DIR)asm/
CAR_ASMS = $(CAR_SRCS:$(CAR_SRC_DIR)%.c=$(CAR_ASM_DIR)%.s)
CAR_HDRS = $(wildcard $(CAR_HDR_DIR)*.h)
CAR_SRCS = $(wildcard $(CAR_SRC_DIR)*.c)
CAR_OBJS = $(CAR_SRCS:$(CAR_SRC_DIR)%.c=$(CAR_OBJ_DIR)%.o)
TARGET = $(LBY_DIR)$(LBY)
AS = gcc
SFLAGS = -masm=intel
CC = gcc
CFLAGS = -fPIC -Ofast
LB = ar
LFLAGS = rcs
MSG = "< Building static library $(LBY) "
MSG_X = "< Installing static library $(LBY) to $(X_DIR) "
X_DIR = /usr/local/lib/

all: $(TARGET)
$(TARGET): $(ARC_OBJS) $(CAR_OBJS) ./makefile
	@echo $(MSG)
	$(LB) $(LFLAGS) -o $@ $^

$(ARC_LBY_DIR)makefile:
	$(MAKE) -C $(ARC_LBY_DIR)

$(CAR_LBY_DIR)makefile:
	$(MAKE) -C $(CAR_LBY_DIR)

# $(ARC_OBJ_DIR)%.o: $(ARC_SRC_DIR)%.c $(ARC_HDRS) ./makefile
$(ARC_OBJS): $(ARC_OBJ_DIR)%.o: $(ARC_SRC_DIR)%.c $(ARC_HDRS) ./makefile
	$(CC) $(CFLAGS) -c $< -o $@

# $(CAR_OBJ_DIR)%.o: $(CAR_SRC_DIR)%.c $(CAR_HDRS) ./makefile
$(CAR_OBJS): $(CAR_OBJ_DIR)%.o: $(CAR_SRC_DIR)%.c $(CAR_HDRS) ./makefile
	$(CC) $(CFLAGS) -c $< -o $@

asm:
	$(MAKE) -C $(ARC_LBY_DIR) asm
	$(MAKE) -C $(CAR_LBY_DIR) asm

clean_asm:
	$(MAKE) -C $(ARC_LBY_DIR) clean_asm
	$(MAKE) -C $(CAR_LBY_DIR) clean_asm

clean_obj:
	$(MAKE) -C $(ARC_LBY_DIR) clean_obj
	$(MAKE) -C $(CAR_LBY_DIR) clean_obj

clean_lib:
	rm $(TARGET)

clean_all: clean_lib clean_obj clean_asm

install: $(TARGET)
	@echo $(MSG_X)
	# sudo cp $(TARGET) $(X_DIR)
	# sudo ranlib $(X_DIR)$(LBY)

.PHONY: install clean_all clean_lib clean_obj clean_asm asm all
