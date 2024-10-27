NUM_THREADS := $(shell nproc)

ifeq ($(NUM_THREADS), 0)
    NUM_THREADS := 2
else
    NUM_THREADS := $(shell echo "$$(( $(NUM_THREADS) - 2 ))")
endif

# Параметры компиляции
#VERILATOR_FLAGS += --binary
VERILATOR_FLAGS += --trace
VERILATOR_FLAGS += -cc $(TOP_MODULE_FILE)
VERILATOR_FLAGS += --top-module $(TARGET)
VERILATOR_FLAGS += --assert
VERILATOR_FLAGS += -Wno-fatal
VERILATOR_FLAGS += -Mdir $(BUILD_DIR)
VERILATOR_FLAGS += --exe $(CPP_SOURCES)
#VERILATOR_FLAGS += --no-main
VERILATOR_FLAGS += -j $(NUM_THREADS)
VERILATOR_FLAGS += --x-assign 0
VERILATOR_FLAGS += -I$(SRC_DIR)

# Цели
TARGET = alu_virtual_board
SRC_DIR = src
TB_DIR = testbench
BUILD_DIR = alu_virtual

# Исходные файлы
VERILOG_SOURCES = $(wildcard $(SRC_DIR)/*.sv) $(wildcard $(SRC_DIR)/*.v)
CPP_SOURCES = $(wildcard $(TB_DIR)/*.cpp)

# Основной файл модуля
TOP_MODULE_FILE = $(SRC_DIR)/alu_top.sv

# Сгенерированные файлы
VERILATED_CPP = $(BUILD_DIR)/V$(TARGET)__ALL.cpp
VERILATED_O = $(BUILD_DIR)/Valu_virtual_board__ALL.o
VERILATED_ARCHIVE = $(BUILD_DIR)/Valu_virtual_board__ALL.a

# Правила
.PHONY: all clean run gtkwave

all: $(BUILD_DIR)/V$(TARGET)

$(BUILD_DIR)/V$(TARGET): $(VERILOG_SOURCES) $(CPP_SOURCES)
	verilator $(VERILATOR_FLAGS)
	make -j $(NUM_THREADS) -C $(BUILD_DIR) -f V$(TARGET).mk V$(TARGET) CXXFLAGS="-I$(BUILD_DIR)"

run: $(BUILD_DIR)/V$(TARGET)
	./$(BUILD_DIR)/V$(TARGET)

gtkwave: $(VCD_FILE)

$(VCD_FILE): run
	gtkwave $(VCD_FILE)

clean:
	rm -rf $(BUILD_DIR) $(VCD_FILE)
