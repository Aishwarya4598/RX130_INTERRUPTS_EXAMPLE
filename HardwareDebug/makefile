################################################################################
# Automatically-generated file. Do not edit!
################################################################################

-include makefile.init

RM := rm -rf *.sni *.dbg *.lst *.lis *.lpp *.map *.x *.lbp *.bls *.libelf *.rel *.lbk *.abs *.mi *.jmp *.fsy *.ud *.udm 1st/*.abs 1st/*.jmp 1st/*.fsy

# All of the sources participating in the build are defined here
-include sources.mk
-include src/subdir.mk
-include src/smc_gen/Config_SCI12/subdir.mk
-include src/smc_gen/r_bsp/mcu/all/subdir.mk
-include src/smc_gen/r_bsp/board/generic_rx130/subdir.mk
-include src/smc_gen/r_bsp/mcu/rx130/subdir.mk
-include src/smc_gen/r_pincfg/subdir.mk
-include src/smc_gen/general/subdir.mk
-include src/smc_gen/Config_PORT/subdir.mk
-include src/smc_gen/Config_ICU/subdir.mk

ifneq ($(MAKECMDGOALS),clean)
ifneq ($(strip $(C_DEPS)),)
-include $(C_DEPS)
endif 
ifneq ($(strip $(C_UPPER_DEPS)),)
-include $(C_UPPER_DEPS)
endif 
ifneq ($(strip $(CPP_DEPS)),)
-include $(CPP_DEPS)
endif 
ifneq ($(strip $(CXX_DEPS)),)
-include $(CXX_DEPS)
endif 
ifneq ($(strip $(CC_DEPS)),)
-include $(CC_DEPS)
endif 
ifneq ($(strip $(C++_DEPS)),)
-include $(C++_DEPS)
endif 
ifneq ($(strip $(S_UPPER_DEPS)),)
-include $(S_UPPER_DEPS)
endif 
ifneq ($(strip $(ASM_DEPS)),)
-include $(ASM_DEPS)
endif 
ifneq ($(strip $(SX_DEPS)),)
-include $(SX_DEPS)
endif 
ifneq ($(strip $(JMP_DEPS)),)
-include $(JMP_DEPS)
endif 
ifneq ($(strip $(SRC_DEPS)),)
-include $(SRC_DEPS)
endif 
ifneq ($(strip $(PP_DEPS)),)
-include $(PP_DEPS)
endif 
ifneq ($(strip $(P_DEPS)),)
-include $(P_DEPS)
endif 
ifneq ($(strip $(FSY_DEPS)),)
-include $(FSY_DEPS)
endif 
endif

ifneq ($(strip $(SRC_UPPER_SRCS)),)
ALL_ASMS += $(SRC_UPPER_SRCS) 
endif
ifneq ($(strip $(SRC_SRCS)),)
ALL_ASMS += $(SRC_SRCS) 
endif
ifneq ($(strip $(S_UPPER_SRCS)),)
ALL_ASMS += $(S_UPPER_SRCS) 
endif
ifneq ($(strip $(S_SRCS)),)
ALL_ASMS += $(S_SRCS) 
endif


-include ../makefile.defs

# Add inputs and outputs from these tool invocations to the build variables
LINKER_OUTPUT_OUTPUTS += \
INTERRUPTS.abs

LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS += \
INTERRUPTS.lib

OBJS := \
$(COMPILER_OBJS) \
$(INDIVIDUAL_COMPILER_OBJS) \
$(ASSEMBLER_OBJS) \
$(CUSTOM_OBJS)

# All Target
all: $(LINKER_OUTPUT_OUTPUTS) INTERRUPTS.x INTERRUPTS.udm

	@echo 'Build complete.'

INTERRUPTS.abs: $(OBJS)  $(ALL_ASMS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS) 
	@echo 'Invoking: Linker'
	@echo 'Building target:'
	@echo LinkerINTERRUPTS.tmp=
	@sed -e "s/^/    /" "LinkerINTERRUPTS.tmp"
	rlink -subcommand="LinkerINTERRUPTS.tmp"
	@echo 'Finished building target:'
	@echo ''


INTERRUPTS.lib: 
	@echo 'Invoking: Library Generator'
	@echo LibraryGeneratorINTERRUPTS.tmp=
	@sed -e "s/^/    /" "LibraryGeneratorINTERRUPTS.tmp"
	lbgrx -subcommand="LibraryGeneratorINTERRUPTS.tmp"
	@echo 'Finished building:'
	@echo ''

INTERRUPTS.x: INTERRUPTS.abs
		-C:\Users\aishw\.eclipse\com.renesas.platform_1901882494\Utilities\\ccrx\renesas_cc_converter INTERRUPTS.abs INTERRUPTS.x

INTERRUPTS.udm: $(LINKER_OUTPUT_OUTPUTS)
	udcollector -subcommand=udSubcommand.tmp -output=INTERRUPTS.udm

# Other Targets
clean:
	-$(RM) $(LINKER_OUTPUT_OUTPUTS) $(LIBRARY_GENERATOR_OUTPUTTYPE_OUTPUTS)
ifneq ($(strip $(OBJS)),)
	-$(file > clean_OBJS.tmp, $(OBJS))
	-@xargs -s 4000 -t -a clean_OBJS.tmp rm -rf
	-@rm -rf clean_OBJS.tmp
endif
ifneq ($(strip $(C_DEPS)),)
	-$(file > clean_C_DEPS.tmp, $(C_DEPS))
	-@xargs -s 4000 -t -a clean_C_DEPS.tmp rm -rf
	-@rm -rf clean_C_DEPS.tmp
endif
ifneq ($(strip $(CPP_DEPS)),)
	-$(file > clean_CPP_DEPS.tmp, $(CPP_DEPS))
	-@xargs -s 4000 -t -a clean_CPP_DEPS.tmp rm -rf
	-@rm -rf clean_CPP_DEPS.tmp
endif
ifneq ($(strip $(ASM_DEPS)),)
	-$(file > clean_ASM_DEPS.tmp, $(ASM_DEPS))
	-@xargs -s 4000 -t -a clean_ASM_DEPS.tmp rm -rf
	-@rm -rf clean_ASM_DEPS.tmp
endif
ifneq ($(strip $(DSP_DEPS)),)
	-$(file > clean_DSP_DEPS.tmp, $(DSP_DEPS))
	-@xargs -s 4000 -t -a clean_DSP_DEPS.tmp rm -rf
	-@rm -rf clean_DSP_DEPS.tmp
endif
	-rm -rf src/*.asm src/*.p src/*.pp src/*.src src/*.jmp src/*.lst src/*.prn src/*.i src/*.ud 
	-rm -rf src/smc_gen/Config_SCI12/*.asm src/smc_gen/Config_SCI12/*.p src/smc_gen/Config_SCI12/*.pp src/smc_gen/Config_SCI12/*.src src/smc_gen/Config_SCI12/*.jmp src/smc_gen/Config_SCI12/*.lst src/smc_gen/Config_SCI12/*.prn src/smc_gen/Config_SCI12/*.i src/smc_gen/Config_SCI12/*.ud 
	-rm -rf src/smc_gen/r_bsp/mcu/all/*.asm src/smc_gen/r_bsp/mcu/all/*.p src/smc_gen/r_bsp/mcu/all/*.pp src/smc_gen/r_bsp/mcu/all/*.src src/smc_gen/r_bsp/mcu/all/*.jmp src/smc_gen/r_bsp/mcu/all/*.lst src/smc_gen/r_bsp/mcu/all/*.prn src/smc_gen/r_bsp/mcu/all/*.i src/smc_gen/r_bsp/mcu/all/*.ud 
	-rm -rf src/smc_gen/r_bsp/board/generic_rx130/*.asm src/smc_gen/r_bsp/board/generic_rx130/*.p src/smc_gen/r_bsp/board/generic_rx130/*.pp src/smc_gen/r_bsp/board/generic_rx130/*.src src/smc_gen/r_bsp/board/generic_rx130/*.jmp src/smc_gen/r_bsp/board/generic_rx130/*.lst src/smc_gen/r_bsp/board/generic_rx130/*.prn src/smc_gen/r_bsp/board/generic_rx130/*.i src/smc_gen/r_bsp/board/generic_rx130/*.ud 
	-rm -rf src/smc_gen/r_bsp/mcu/rx130/*.asm src/smc_gen/r_bsp/mcu/rx130/*.p src/smc_gen/r_bsp/mcu/rx130/*.pp src/smc_gen/r_bsp/mcu/rx130/*.src src/smc_gen/r_bsp/mcu/rx130/*.jmp src/smc_gen/r_bsp/mcu/rx130/*.lst src/smc_gen/r_bsp/mcu/rx130/*.prn src/smc_gen/r_bsp/mcu/rx130/*.i src/smc_gen/r_bsp/mcu/rx130/*.ud 
	-rm -rf src/smc_gen/r_pincfg/*.asm src/smc_gen/r_pincfg/*.p src/smc_gen/r_pincfg/*.pp src/smc_gen/r_pincfg/*.src src/smc_gen/r_pincfg/*.jmp src/smc_gen/r_pincfg/*.lst src/smc_gen/r_pincfg/*.prn src/smc_gen/r_pincfg/*.i src/smc_gen/r_pincfg/*.ud 
	-rm -rf src/smc_gen/general/*.asm src/smc_gen/general/*.p src/smc_gen/general/*.pp src/smc_gen/general/*.src src/smc_gen/general/*.jmp src/smc_gen/general/*.lst src/smc_gen/general/*.prn src/smc_gen/general/*.i src/smc_gen/general/*.ud 
	-rm -rf src/smc_gen/Config_PORT/*.asm src/smc_gen/Config_PORT/*.p src/smc_gen/Config_PORT/*.pp src/smc_gen/Config_PORT/*.src src/smc_gen/Config_PORT/*.jmp src/smc_gen/Config_PORT/*.lst src/smc_gen/Config_PORT/*.prn src/smc_gen/Config_PORT/*.i src/smc_gen/Config_PORT/*.ud 
	-rm -rf src/smc_gen/Config_ICU/*.asm src/smc_gen/Config_ICU/*.p src/smc_gen/Config_ICU/*.pp src/smc_gen/Config_ICU/*.src src/smc_gen/Config_ICU/*.jmp src/smc_gen/Config_ICU/*.lst src/smc_gen/Config_ICU/*.prn src/smc_gen/Config_ICU/*.i src/smc_gen/Config_ICU/*.ud 
	@echo ''
	@echo 'Clean complete.'

.PHONY: all clean 
-include ../makefile.targets