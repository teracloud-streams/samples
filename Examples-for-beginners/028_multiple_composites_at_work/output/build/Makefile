# NOTE: This makefile is designed to be run from one level up in the directory
# hierarchy compared to where it resides. For instance, if this makefile is
# located at 'output/build/Makefile', then it can be launched as:
# 'make -f build/Makefile' from the 'output' directory.

SHELL=/bin/bash
ifeq ($(CXX),)
  CXX=g++
endif
ifeq ($(CXX_LN),)
  CXX_LN=g++
endif
PKGCONFIG := /homes/mbranson/streams/7.2.0.1/bin/dst-pe-pkg-config-alternative.sh
SPL_BUNDLE_BUILDER := /homes/mbranson/streams/7.2.0.1/system/impl/bin/spl-bundle-builder
SO_INCLUDE := $(shell $(PKGCONFIG) --cflags dst-spl-pe-install)
SO_LIB := $(shell $(PKGCONFIG) --libs dst-spl-pe-install)
SO_STAND_LIB := $(shell $(PKGCONFIG) --libs dst-spl-pe-install-standalone)
SPL_CXXFLAGS = -Wall -Wno-unused -Wno-sign-compare
SPL_CXXFLAGS += -D_REENTRANT -fPIC -finline-functions -fmessage-length=0
SPL_CXXFLAGS += $(SO_INCLUDE) -O3 -DNDEBUG  -std=gnu++17 
SPL_LDFLAGS = $(SO_LIB)

SPL_TYPES = build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o \
            build/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.o 
SPL_FUNCTIONS = 
SPL_OPERATORS = build/operator/StockOrderRecord.o \
                build/operator/ScreenWriter1.o \
                build/operator/MatchStockOrderResult/ResultFromStockMatch.o \
                build/operator/MatchStockOrderResult/Output.o \
                build/operator/MatchedStockOrder/Output.o 
SPL_SO_BINS = bin/StockOrderRecord.so \
              bin/ScreenWriter1.so \
              bin/MatchStockOrderResult.ResultFromStockMatch.so \
              bin/MatchStockOrderResult.Output.so \
              bin/MatchedStockOrder.Output.so 

SPL_ADL_FILE = my.sample1.Main.adl

SPL_OUTPUT_DIR_ROOT = $(shell printf '%q' '/homes/mbranson/new-samples/samples/Examples-for-beginners/028_multiple_composites_at_work')
SPL_OUTPUT_DIR = $(shell printf '%q' 'output')

.PHONY: distclean clean all types functions operators sos bundle toolkits standalone sablink

all: bin types functions operators sos standalone bundle sablink

distclean clean:
	@rm -fr bin/* build/type build/function build/operator build/bundle build/standalone my.sample1.Main.sab

bin:
	@mkdir -m 755 bin

types: $(SPL_TYPES)

build/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.o: \
	    src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.h \
	    src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] enum{csv,txt,bin,block,line}'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.cpp

build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o: \
	    src/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.h \
	    src/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring symbol,float32 price,uint32 quantity,rstrin...,float32 commission>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.cpp

build/type:
	-@mkdir -m 755 build/type

operators: $(SPL_OPERATORS)

-include build/operator/StockOrderRecord.d
build/operator/StockOrderRecord.o: \
	    src/operator/StockOrderRecord.h \
	    src/operator/StockOrderRecord.cpp\
	    build/dep/operator/StockOrderRecord.dep \
	    src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.h  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] StockOrderRecord'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.sample1.Main.adl\" -c $(SPL_CXXFLAGS) src/operator/StockOrderRecord.cpp

-include build/operator/ScreenWriter1.d
build/operator/ScreenWriter1.o: \
	    src/operator/ScreenWriter1.h \
	    src/operator/ScreenWriter1.cpp\
	    build/dep/operator/ScreenWriter1.dep  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] ScreenWriter1'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.sample1.Main.adl\" -c $(SPL_CXXFLAGS) src/operator/ScreenWriter1.cpp

-include build/operator/MatchStockOrderResult/ResultFromStockMatch.d
build/operator/MatchStockOrderResult/ResultFromStockMatch.o: \
	    src/operator/MatchStockOrderResult/ResultFromStockMatch.h \
	    src/operator/MatchStockOrderResult/ResultFromStockMatch.cpp\
	    build/dep/operator/MatchStockOrderResult/ResultFromStockMatch.dep  \
	    build/cppOptions \
	    | build/operator/MatchStockOrderResult
	@echo ' [CXX-operator] MatchStockOrderResult.ResultFromStockMatch'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.sample1.Main.adl\" -c $(SPL_CXXFLAGS) src/operator/MatchStockOrderResult/ResultFromStockMatch.cpp

-include build/operator/MatchStockOrderResult/Output.d
build/operator/MatchStockOrderResult/Output.o: \
	    src/operator/MatchStockOrderResult/Output.h \
	    src/operator/MatchStockOrderResult/Output.cpp\
	    build/dep/operator/MatchStockOrderResult/Output.dep  \
	    build/cppOptions \
	    | build/operator/MatchStockOrderResult
	@echo ' [CXX-operator] MatchStockOrderResult.Output'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.sample1.Main.adl\" -c $(SPL_CXXFLAGS) src/operator/MatchStockOrderResult/Output.cpp

-include build/operator/MatchedStockOrder/Output.d
build/operator/MatchedStockOrder/Output.o: \
	    src/operator/MatchedStockOrder/Output.h \
	    src/operator/MatchedStockOrder/Output.cpp\
	    build/dep/operator/MatchedStockOrder/Output.dep  \
	    build/cppOptions \
	    | build/operator/MatchedStockOrder
	@echo ' [CXX-operator] MatchedStockOrder.Output'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.sample1.Main.adl\" -c $(SPL_CXXFLAGS) src/operator/MatchedStockOrder/Output.cpp

build/operator/MatchedStockOrder:
	-@mkdir -m 755 -p build/operator/MatchedStockOrder

build/operator/MatchStockOrderResult:
	-@mkdir -m 755 -p build/operator/MatchStockOrderResult

build/operator:
	-@mkdir -m 755 -p build/operator

functions: $(SPL_FUNCTIONS)

sos: $(SPL_SO_BINS)

SOStockOrderRecord = \
	    build/operator/StockOrderRecord.o \
	    build/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.o \
	    build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o 

bin/StockOrderRecord.so: \
	$(SOStockOrderRecord) \
	build/dep/StockOrderRecord.so \
	build/ldOptions
	@echo ' [LD-so] so StockOrderRecord'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/StockOrderRecord.so -fPIC -shared $(SOStockOrderRecord) -lstreams-stdtk-runtime $(SPL_LDFLAGS)

SOScreenWriter1 = \
	    build/operator/ScreenWriter1.o \
	    build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o 

bin/ScreenWriter1.so: \
	$(SOScreenWriter1) \
	build/dep/ScreenWriter1.so \
	build/ldOptions
	@echo ' [LD-so] so ScreenWriter1'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/ScreenWriter1.so -fPIC -shared $(SOScreenWriter1) $(SPL_LDFLAGS)

SOMatchStockOrderResult.ResultFromStockMatch = \
	    build/operator/MatchStockOrderResult/ResultFromStockMatch.o \
	    build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o 

bin/MatchStockOrderResult.ResultFromStockMatch.so: \
	$(SOMatchStockOrderResult.ResultFromStockMatch) \
	build/dep/MatchStockOrderResult.ResultFromStockMatch.so \
	build/ldOptions
	@echo ' [LD-so] so MatchStockOrderResult.ResultFromStockMatch'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/MatchStockOrderResult.ResultFromStockMatch.so -fPIC -shared $(SOMatchStockOrderResult.ResultFromStockMatch) $(SPL_LDFLAGS)

SOMatchStockOrderResult.Output = \
	    build/operator/MatchStockOrderResult/Output.o \
	    build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o 

bin/MatchStockOrderResult.Output.so: \
	$(SOMatchStockOrderResult.Output) \
	build/dep/MatchStockOrderResult.Output.so \
	build/ldOptions
	@echo ' [LD-so] so MatchStockOrderResult.Output'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/MatchStockOrderResult.Output.so -fPIC -shared $(SOMatchStockOrderResult.Output) $(SPL_LDFLAGS)

SOMatchedStockOrder.Output = \
	    build/operator/MatchedStockOrder/Output.o \
	    build/type/BEqO_0Ev7XRaaviprs3CdvGHRyS2gp2Rfs49NHKVkxja62OEoFdALjnIL3lURN5ANhPLcnPV34ITuVxzg_1TSldCE.o 

bin/MatchedStockOrder.Output.so: \
	$(SOMatchedStockOrder.Output) \
	build/dep/MatchedStockOrder.Output.so \
	build/ldOptions
	@echo ' [LD-so] so MatchedStockOrder.Output'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/MatchedStockOrder.Output.so -fPIC -shared $(SOMatchedStockOrder.Output) $(SPL_LDFLAGS)

standalone: bin/standalone.exe

build/standalone/standalone.o: \
	    src/standalone/standalone.h \
	    src/standalone/standalone.cpp  \
	    build/cppOptions \
	    | build/standalone
	@echo ' [CXX-standalone] standalone'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/standalone/standalone.cpp

bin/standalone.exe: build/standalone/standalone.o build/ldOptions
	@echo ' [LD-standalone] standalone'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/standalone.exe build/standalone/standalone.o $(SO_STAND_LIB)
	@echo ' [LN-standalone] standalone '
	@ln -sf standalone bin/my.sample1.Main
build/standalone:
	-@mkdir -m 755 build/standalone

sablink:

	@ln -sf ../my.sample1.Main.sab bin/sab

bundle: my.sample1.Main.sab

-include build/dep/my.sample1.Main.sab.d
my.sample1.Main.sab: $(SPL_SO_BINS) $(SPL_ADL_FILE) build/dep/my.sample1.Main.sab.d bin/standalone.exe
	@echo ' [Bundle] my.sample1.Main.sab'
	@$(SPL_BUNDLE_BUILDER) $(SPL_OUTPUT_DIR_ROOT) $(SPL_OUTPUT_DIR) $(SPL_ADL_FILE) my.sample1.Main.sab

