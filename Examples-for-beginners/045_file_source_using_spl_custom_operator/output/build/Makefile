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

SPL_TYPES = build/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.o \
            build/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.o \
            build/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.o \
            build/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.o 
SPL_FUNCTIONS = 
SPL_OPERATORS = build/operator/StockRecord.o \
                build/operator/FileSink1.o 
SPL_SO_BINS = bin/StockRecord.so \
              bin/FileSink1.so 

SPL_ADL_FILE = my.file.source.file_source_using_spl_custom_operator.adl

SPL_OUTPUT_DIR_ROOT = $(shell printf '%q' '/homes/mbranson/samples-git-space/samples/Examples-for-beginners/045_file_source_using_spl_custom_operator')
SPL_OUTPUT_DIR = $(shell printf '%q' 'output')

.PHONY: distclean clean all types functions operators sos bundle toolkits standalone sablink

all: bin types functions operators sos standalone bundle sablink

distclean clean:
	@rm -fr bin/* build/type build/function build/operator build/bundle build/standalone my.file.source.file_source_using_spl_custom_operator.sab

bin:
	@mkdir -m 755 bin

types: $(SPL_TYPES)

build/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.o: \
	    src/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.h \
	    src/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] enum{error,warn,info,debug,trace}'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.cpp

build/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.o: \
	    src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.h \
	    src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] enum{csv,txt,bin,block,line}'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.cpp

build/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.o: \
	    src/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.h \
	    src/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] enum{WindowMarker,FinalMarker}'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.cpp

build/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.o: \
	    src/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.h \
	    src/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.cpp \
	    build/cppOptions \
	    | build/type
	@echo ' [CXX-type] tuple<rstring symbol,rstring dateTime,float64 closingPrice,uint32 volume>'
	@$(CXX) -o $@ -c $(SPL_CXXFLAGS) src/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.cpp

build/type:
	-@mkdir -m 755 build/type

operators: $(SPL_OPERATORS)

-include build/operator/StockRecord.d
build/operator/StockRecord.o: \
	    src/operator/StockRecord.h \
	    src/operator/StockRecord.cpp\
	    build/dep/operator/StockRecord.dep \
	    src/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.h \
	    src/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.h  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] StockRecord'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.file.source.file_source_using_spl_custom_operator.adl\" -c $(SPL_CXXFLAGS) src/operator/StockRecord.cpp

-include build/operator/FileSink1.d
build/operator/FileSink1.o: \
	    src/operator/FileSink1.h \
	    src/operator/FileSink1.cpp\
	    build/dep/operator/FileSink1.dep \
	    src/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.h  \
	    build/cppOptions \
	    | build/operator
	@echo ' [CXX-operator] FileSink1'
	@$(CXX) -o $@ -MD -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/nl/include -I /homes/mbranson/streams/7.2.0.1/toolkits/spl/impl/include -DSPLJAVAFUNCTION_ADL_FILENAME=\"my.file.source.file_source_using_spl_custom_operator.adl\" -c $(SPL_CXXFLAGS) src/operator/FileSink1.cpp

build/operator:
	-@mkdir -m 755 -p build/operator

functions: $(SPL_FUNCTIONS)

sos: $(SPL_SO_BINS)

SOStockRecord = \
	    build/operator/StockRecord.o \
	    build/type/BcyIw_123yuxalGHt_0UPzvHr6jutVOfqYy4EjyWMc7ELFtCMYkxYjxKoc_1GyrP3_0eilO0roi7TbPc_14tWTm1iZBT.o \
	    build/type/BIRcdMK4d_0i6vUpi35EvfuXSH4RefdmmGwtUQ_0UWZGo6_09lXFSXFfk7e03riz1c5HSVI91Qimv_0ZzKDRwCB6XDd.o \
	    build/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.o 

bin/StockRecord.so: \
	$(SOStockRecord) \
	build/dep/StockRecord.so \
	build/ldOptions
	@echo ' [LD-so] so StockRecord'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/StockRecord.so -fPIC -shared $(SOStockRecord) $(SPL_LDFLAGS)

SOFileSink1 = \
	    build/operator/FileSink1.o \
	    build/type/BuoCzre0fg5iJdQnrwapkCyjYEMMfTagKrJ53r_0jmfdVfmhf4hwant6OIuyi_14dk4y_0FAB2rdBfcbFQiN6Jd_0An.o \
	    build/type/B33ET1MOyZwcEWURZeRItrPY5cu_1oM1W9_0NU7Lkb3pnWlsBXpTeskthB4K1SWEu5pogyU9dlmWAt7VfISZoN_0Cz.o 

bin/FileSink1.so: \
	$(SOFileSink1) \
	build/dep/FileSink1.so \
	build/ldOptions
	@echo ' [LD-so] so FileSink1'
	@$(CXX_LN) $(SPL_CXXFLAGS) -o bin/FileSink1.so -fPIC -shared $(SOFileSink1) -lstreams-stdtk-runtime $(SPL_LDFLAGS)

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
	@ln -sf standalone bin/my.file.source.file_source_using_spl_custom_operator
build/standalone:
	-@mkdir -m 755 build/standalone

sablink:

	@ln -sf ../my.file.source.file_source_using_spl_custom_operator.sab bin/sab

bundle: my.file.source.file_source_using_spl_custom_operator.sab

-include build/dep/my.file.source.file_source_using_spl_custom_operator.sab.d
my.file.source.file_source_using_spl_custom_operator.sab: $(SPL_SO_BINS) $(SPL_ADL_FILE) build/dep/my.file.source.file_source_using_spl_custom_operator.sab.d bin/standalone.exe
	@echo ' [Bundle] my.file.source.file_source_using_spl_custom_operator.sab'
	@$(SPL_BUNDLE_BUILDER) $(SPL_OUTPUT_DIR_ROOT) $(SPL_OUTPUT_DIR) $(SPL_ADL_FILE) my.file.source.file_source_using_spl_custom_operator.sab

