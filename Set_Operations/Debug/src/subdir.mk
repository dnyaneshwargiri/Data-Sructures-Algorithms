################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/set\ operations.c 

OBJS += \
./src/set\ operations.o 

C_DEPS += \
./src/set\ operations.d 


# Each subdirectory must supply rules for building sources it contributes
src/set\ operations.o: ../src/set\ operations.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/set operations.d" -MT"src/set\ operations.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


