

ifneq ($(words $(CURDIR)),1)
 $(error Unsupported: GNU Make cannot build in directories containing spaces, build elsewhere: '$(CURDIR)')
endif

######################################################################
# Set up variables

VERILATOR = verilator
VERILATOR_COVERAGE = verilator_coverage
test_name ?= DATASHEET_VECTORS_TEST

VERILATOR_FLAGS = +incdir+./tb
# Generate C++ in executable form
VERILATOR_FLAGS += --binary
# Optimize
VERILATOR_FLAGS += --x-assign 0
# Check SystemVerilog assertions
VERILATOR_FLAGS += --assert
# Generate coverage analysis
VERILATOR_FLAGS += --coverage

VERILATOR_FLAGS += --trace

VERILATOR_FLAGS += -Wno-fatal

VERILATOR_FLAGS += +define+$(test_name)

VERILATOR_FLAGS += --top tb


# Input files for Verilator
VERILATOR_INPUT = -f file_lists/src.f -f file_lists/tb.f

default: run

run:
	@echo

	@echo
	@echo "-- VERILATE ----------------"
	$(VERILATOR) --version
	$(VERILATOR) $(VERILATOR_FLAGS) $(VERILATOR_INPUT)

	@echo
	@echo "-- RUN ---------------------"
	@rm -rf logs
	@mkdir -p logs
	obj_dir/Vtb

	@echo
	@echo "-- DONE --------------------"


######################################################################
# Other targets

show-config:
	$(VERILATOR) -V

maintainer-copy::
clean mostlyclean distclean maintainer-clean::
	-rm -rf obj_dir logs *.log *.dmp *.vpd core tb/*.txt *.dat