################################################################################
# Automatically-generated file. Do not edit!
################################################################################

# Add inputs and outputs from these tool invocations to the build variables 
CPP_SRCS += \
../src/quicksort\ final.cpp 

OBJS += \
./src/quicksort\ final.o 

CPP_DEPS += \
./src/quicksort\ final.d 


# Each subdirectory must supply rules for building sources it contributes
src/quicksort\ final.o: ../src/quicksort\ final.cpp
	@echo 'Building file: $<'
	@echo 'Invoking: GCC C++ Compiler'
	g++ -O0 -g3 -Wall -c -fmessage-length=0 -MMD -MP -MF"src/quicksort final.d" -MT"src/quicksort\ final.d" -o "$@" "$<"
	@echo 'Finished building: $<'
	@echo ' '


