cmake_minimum_required (VERSION 3.8)

project ("complex-numbers-c")

add_executable (complex-numbers-c "ComplexNumber.cpp" "ComplexNumber.h" "Menu.cpp")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET complex-numbers-cpp PROPERTY CXX_STANDARD 20)
endif()
