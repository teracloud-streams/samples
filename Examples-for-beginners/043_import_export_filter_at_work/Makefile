.PHONY: build all clean distributed

SPL_MAIN_COMPOSITE1 = importing.exporting.filter::export_with_filter
SPL_MAIN_COMPOSITE2 = importing.exporting.filter::import_with_filter
SPL_CMD_ARGS ?=
SPLC_FLAGS = -a
OUTPUT_DIR = output
TO_BE_DELETED = 
ifeq ($(STREAMS_INSTALL),)
  $(error error: environment variable STREAMS_INSTALL has to be set.)
else
  SPLC = $(STREAMS_INSTALL)/bin/sc
  SPLC_CLEAN = $(SPLC) -C -M $(SPL_MAIN_COMPOSITE1)
  SPLC_CLEAN = rm -f toolkit.xml
  SPL_OUTDIR1 = --output-directory=$(OUTPUT_DIR)/sample1
  SPL_OUTDIR2 = --output-directory=$(OUTPUT_DIR)/sample2
endif  

# additional toolkits
SPL_PATH ?= 

TO_BE_DELETED += $(OUTPUT_DIR)

ifneq ($(SPL_PATH),)
  SPLC_FLAGS += -t $(SPL_PATH)
endif

build: distributed 

all: clean build

distributed:
	$(SPLC) $(SPLC_FLAGS) -M $(SPL_MAIN_COMPOSITE1) $(SPL_CMD_ARGS) $(SPL_OUTDIR1)
	$(SPLC) $(SPLC_FLAGS) -M $(SPL_MAIN_COMPOSITE2) $(SPL_CMD_ARGS) $(SPL_OUTDIR2)

clean:
	$(SPLC_CLEAN)
	rm -rf $(TO_BE_DELETED)
