################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/BInary\ addition.cpp 

OBJS += \
./src/BInary\ addition.o 

CPP_DEPS += \
./src/BInary\ addition.d 


# Each subdirectory must supply rules for building sources it contributes
src/BInary\ addition.o: ../src/BInary\ addition.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/BInary addition.d" -MT"src/BInary\ addition.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


