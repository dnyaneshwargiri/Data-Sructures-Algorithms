################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/ice\ cream.cpp 

OBJS += \
./src/ice\ cream.o 

CPP_DEPS += \
./src/ice\ cream.d 


# Each subdirectory must supply rules for building sources it contributes
src/ice\ cream.o: ../src/ice\ cream.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/ice cream.d" -MT"src/ice\ cream.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


