cmake_minimum_required(VERSION 3.6)

project(AppAppTemplate)
 
### Configuration stage
# Gather includes
include_directories(inc)

# Gather source
file(GLOB SOURCES "src/example/*.cpp")

### Build stage
# Build library
add_library(exampleApp SHARED ${SOURCES})

# Build executable
add_executable(ExampleApp ${SOURCES})

### Install stage
# Install library
install(TARGETS exampleApp DESTINATION /usr/lib)

# Install executable
install(TARGETS ExampleApp DESTINATION /usr/bin)
