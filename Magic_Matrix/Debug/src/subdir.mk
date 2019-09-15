################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
C_SRCS += \
../src/magic\ matrix.c 

OBJS += \
./src/magic\ matrix.o 

C_DEPS += \
./src/magic\ matrix.d 


# Each subdirectory must supply rules for building sources it contributes
src/magic\ matrix.o: ../src/magic\ matrix.c
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C Compiler'
	gcc -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/magic matrix.d" -MT"src/magic\ matrix.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


