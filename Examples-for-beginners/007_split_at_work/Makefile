.PHONY: build all clean distributed

SPL_MAIN_COMPOSITE = sample::split_at_work
SPL_CMD_ARGS ?=
SPLC_FLAGS = -a
OUTPUT_DIR = output
TO_BE_DELETED = 

ifeq ($(STREAMS_INSTALL),)
  $(error error: environment variable STREAMS_INSTALL has to be set.)
else
  SPLC = $(STREAMS_INSTALL)/bin/sc
  SPLC_CLEAN = $(SPLC) -C -M $(SPL_MAIN_COMPOSITE)
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
	$(SPLC) $(SPLC_FLAGS) -M $(SPL_MAIN_COMPOSITE) $(SPL_CMD_ARGS) --output-directory=$(OUTPUT_DIR)

clean:
	$(SPLC_CLEAN)
	rm -rf $(TO_BE_DELETED)
