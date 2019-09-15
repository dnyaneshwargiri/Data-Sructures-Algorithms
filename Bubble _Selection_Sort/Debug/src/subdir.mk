################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/bubble\ selection\ sort.cpp 

OBJS += \
./src/bubble\ selection\ sort.o 

CPP_DEPS += \
./src/bubble\ selection\ sort.d 


# Each subdirectory must supply rules for building sources it contributes
src/bubble\ selection\ sort.o: ../src/bubble\ selection\ sort.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/bubble selection sort.d" -MT"src/bubble\ selection\ sort.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


