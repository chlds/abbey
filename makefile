# Making libabbey.a

L = abbey
LBY_A = lib$(L).a
DESTDIR ?=
PREFIX ?= /usr/local
DIR_INC = $(DESTDIR)$(PREFIX)/include/$(L)
DIR_LIB = $(DESTDIR)$(PREFIX)/lib
LIBDIR ?= $(DIR_LIB)
INCLUDEDIR ?= $(DIR_INC)
INC_DIR = ./incl/
HDRS = $(wildcard $(INC_DIR)*.h)
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
CAT_LBY_DIR = $(LBY_DIR)cat/
CAT_OBJ_DIR = $(CAT_LBY_DIR)obj/
CAT_SRC_DIR = $(CAT_OBJ_DIR)src/
CAT_HDR_DIR = $(CAT_SRC_DIR)incl/
CAT_ASM_DIR = $(CAT_HDR_DIR)asm/
CAT_ASMS = $(CAT_SRCS:$(CAT_SRC_DIR)%.c=$(CAT_ASM_DIR)%.s)
CAT_HDRS = $(wildcard $(CAT_HDR_DIR)*.h)
CAT_SRCS = $(wildcard $(CAT_SRC_DIR)*.c)
CAT_OBJS = $(CAT_SRCS:$(CAT_SRC_DIR)%.c=$(CAT_OBJ_DIR)%.o)
TARGET = $(LBY_DIR)$(LBY_A)
TARGET_H = $(HDRS)
AS = gcc
SFLAGS = -masm=intel
CC = gcc
CFLAGS = -fPIC -Ofast
LB = ar
LFLAGS = rcs
MSG = "< Building static library $(LBY_A) "
MSG_I = "Root privileges may be required to install the library."
MSG_U = "Root privileges may be required to uninstall the library."

all: $(TARGET)
$(TARGET): $(ARC_OBJS) $(CAR_OBJS) $(CAT_OBJS) # ./makefile
	@echo $(MSG)
	$(LB) $(LFLAGS) -o $@ $^

$(ARC_LBY_DIR)makefile:
	$(MAKE) -C $(ARC_LBY_DIR)

$(CAR_LBY_DIR)makefile:
	$(MAKE) -C $(CAR_LBY_DIR)

$(CAT_LBY_DIR)makefile:
	$(MAKE) -C $(CAT_LBY_DIR)

# $(ARC_OBJ_DIR)%.o: $(ARC_SRC_DIR)%.c $(ARC_HDRS) ./makefile
$(ARC_OBJS): $(ARC_OBJ_DIR)%.o: $(ARC_SRC_DIR)%.c $(ARC_HDRS) ./makefile
	$(CC) $(CFLAGS) -c $< -o $@

# $(CAR_OBJ_DIR)%.o: $(CAR_SRC_DIR)%.c $(CAR_HDRS) ./makefile
$(CAR_OBJS): $(CAR_OBJ_DIR)%.o: $(CAR_SRC_DIR)%.c $(CAR_HDRS) ./makefile
	$(CC) $(CFLAGS) -c $< -o $@

# $(CAT_OBJ_DIR)%.o: $(CAT_SRC_DIR)%.c $(CAT_HDRS) ./makefile
$(CAT_OBJS): $(CAT_OBJ_DIR)%.o: $(CAT_SRC_DIR)%.c $(CAT_HDRS) ./makefile
	$(CC) $(CFLAGS) -c $< -o $@

asm:
	$(MAKE) -C $(ARC_LBY_DIR) asm
	$(MAKE) -C $(CAR_LBY_DIR) asm
	$(MAKE) -C $(CAT_LBY_DIR) asm

clean_asm:
	$(MAKE) -C $(ARC_LBY_DIR) clean_asm
	$(MAKE) -C $(CAR_LBY_DIR) clean_asm
	$(MAKE) -C $(CAT_LBY_DIR) clean_asm

clean_obj:
	$(MAKE) -C $(ARC_LBY_DIR) clean_obj
	$(MAKE) -C $(CAR_LBY_DIR) clean_obj
	$(MAKE) -C $(CAT_LBY_DIR) clean_obj

clean_lib:
	rm $(TARGET)

clean_all: clean_lib clean_obj clean_asm

install: all
	@echo ""
	@echo $(MSG_I)
	@echo ""
	$(info HDRS=$(HDRS))
	install -d -m 755 $(LIBDIR) # mkdir -p
	install -d -m 755 $(INCLUDEDIR) # mkdir -p
	install -m 644 $(TARGET_H) $(INCLUDEDIR)/ # cp
	install -m 644 $(TARGET) $(LIBDIR)/ # cp
	# ranlib $(LIBDIR)/$(LBY_A)

uninstall:
	@echo ""
	@echo $(MSG_U)
	@echo ""
	rm -f $(LIBDIR)/$(LBY_A)
	rm -f $(addprefix $(INCLUDEDIR)/,$(notdir $(HDRS)))
	# rm -rf $(INCLUDEDIR)/

.PHONY: uninstall install clean_all clean_lib clean_obj clean_asm asm all
