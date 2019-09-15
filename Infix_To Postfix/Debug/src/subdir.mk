################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/INFIX\ TO\ POSTFIX.cpp 

OBJS += \
./src/INFIX\ TO\ POSTFIX.o 

CPP_DEPS += \
./src/INFIX\ TO\ POSTFIX.d 


# Each subdirectory must supply rules for building sources it contributes
src/INFIX\ TO\ POSTFIX.o: ../src/INFIX\ TO\ POSTFIX.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/INFIX TO POSTFIX.d" -MT"src/INFIX\ TO\ POSTFIX.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


