# Imported source files

# 

PROJECT = test_main

FWSRC = src/main.c src/seatest.c src/platform_utils.c src/format/src/format.c src/format/lib/format_printf.c src/format/lib/format_snprintf.c\
		src/test_example.c \
		../cecc-lib/bignum/bignum.c \
		../cecc-lib/ecc/ecc.c \
		src/test_bignum.c \
		src/test_ecc.c

FWINC = . src src/format/src src/format/lib ../cecc-lib/bignum ../cecc-lib/ecc

PRJ_ROOT = 

FIXTURES_ROOT = src/fixtures

ifeq ($(MAKECMDGOALS),)
$(error Please specify make goals!. More info -> make help)
endif

ifeq ($(fix_num),)
$(info Using default number of fixtures -> 10)
fix_num = 10
else
ifeq ($(fix_num),0)
$(info Using default number of fixtures instead 0 -> 10)
fix_num = 10
endif
endif


BUILDDIR = build_$(target)
ifeq ($(target),posix)
    include targets/posix.mk
else
ifeq ($(target),stm32f4)
    CHIBIOS = ../../ChibiOS_2.4.2
    include targets/STM32F4.mk
    UDEFS += -DCHIBIOS_PRINTF
else
ifeq ($(target),arm32_linux)
    include targets/arm-linux.mk
else
ifeq ($(target),)
$(info Using default target -> posix)
    BUILDDIR = build_posix
    include targets/posix.mk
else
$(error Please specify properly target. More info -> make help)
endif
endif
endif
endif



help:
	@echo "***********  CECC MAKEFILE HELP  **********"
	@echo ""
	@echo ""
	@echo "USAGE:"
	@echo "make help                                        Show this help"
	@echo "make target-list                                 List available targets"
	@echo "make configure                                   Configure environement for fixture generators"
	@echo "make clean-all                                   Deconfigure environement, remove additional and builds files"
	@echo "make generate-fixtures [fix_num=...]             Generate new fixtures for tests. In fix_num please specify number of new fixtures"
	@echo "make [target=...] all                            Simply compile test for target using available files"
	@echo "make [target=...] [fix_num=...] compile-fixgen   Simply compile test for target with generate new fixtures"
	@echo "make [target=...] clean                          Simply clean all files for specific target"
	@echo "make [target=...] test-nofixgen                  Simply test available code without generate new fixtures"
	@echo "make [target=...] file=... test-nofixgen         Simply test available code without generate new fixtures and save result to file"
	@echo "make [target=...] [fix_num=...] test             Generate new fixtures and compile test for target"
	@echo "make [target=...] [fix_num=...] file=... test    Generate new fixtures, compile test for target and save result to file"
	@echo ""
	@echo "Default values:"
	@echo "    target   -> posix"
	@echo "    fix_num  -> 10"

target-list:
	@echo "|******************  CECC  *****************|"
	@echo "|    Availatble targets : target=...        |"
	@echo "|-------------------------------------------|"
	@echo "|         TARGET         |      STRING      |"
	@echo "|------------------------|------------------|"
	@echo "| Linux posix (default)  | posix            |"
	@echo "| STM32F4                | stm32f4          |"
	@echo "| ARM, like raspberry pi | arm32_linux      |"
	@echo "|-------------------------------------------|"
	
configure:
	@echo "Configure environement..."
	@if test -e ext/BC_java/bcprov-jdk15on-150.jar; then echo "Find provider! Download abort!"; else wget -P ext/BC_java http://www.bouncycastle.org/download/bcprov-jdk15on-150.jar; fi
	@if test -e ext/BC_java/bcpkix-jdk15on-150.jar; then echo "Find pkix! Download abort!"; else wget -P ext/BC_java http://www.bouncycastle.org/download/bcpkix-jdk15on-150.jar; fi
	@if test -e ext/NIST-186-3ecdsatestvectors/SigGen.txt; then echo "Find NIST ecdsa test vectors! Download abort!"; else wget -P ext/NIST-186-3ecdsatestvectors http://csrc.nist.gov/groups/STM/cavp/documents/dss/186-3ecdsatestvectors.zip; unzip ext/NIST-186-3ecdsatestvectors/186-3ecdsatestvectors.zip -d ext/NIST-186-3ecdsatestvectors/ ;rm -f ext/NIST-186-3ecdsatestvectors/186-3ecdsatestvectors.zip; fi
	@echo "Done!"
	
clean-all:
	@echo "Deconfigure environement..."
	@echo "Removing ext..."
	@rm -Rf ext
	@echo "Done!"
	@echo "Removing java class files..."
	@rm -f java/*.class
	@echo "Done!"
	@echo "Removing builds..."
	@rm -Rf build*
	@echo "Done!"
	
generate-fixtures: configure
	@echo "Compile Bignum fixtures generator..."
	@javac java/Bignum_fixture_generator.java
	@echo "Creating Bignum fixtures (number:$(fix_num))..."
	@java -cp java Bignum_fixture_generator $(FIXTURES_ROOT)/test_bignum_fixtures.h $(fix_num)
	@echo "Created."
	@echo "Compile Ecc fixtures generator..."
	@javac -cp ext/BC_java/bcpkix-jdk15on-150.jar -cp ext/BC_java/bcprov-jdk15on-150.jar java/Ecc_fixture_generator.java
	@echo "Creating ECC fixtures (number:$(fix_num))..."
	@java -cp java:ext/BC_java/bcpkix-jdk15on-150.jar:ext/BC_java/bcprov-jdk15on-150.jar Ecc_fixture_generator $(FIXTURES_ROOT)/test_ecc_fixtures.h ext/NIST-186-3ecdsatestvectors/SigGen.txt $(fix_num)
	@echo "Created."

compile-fixgen:clean generate-fixtures
	@make target=$(target) all

test: clean generate-fixtures
	@echo "Testing with generation new fixtures..."
	@make target=$(target) all
ifneq ($(file),)
	@echo "Writing output to file:$(file)"
	@./$(OUT) >> $(file)
else
	@./$(OUT)
endif

test-nofixgen: clean
	@echo "Testing without generation new fixtures..."
	@make target=$(target) all
ifneq ($(file),)
	@echo "Writing output to file:$(file)"
	@./$(OUT) >> $(file)
else
	@./$(OUT)
endif
