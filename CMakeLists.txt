# CMakeList.txt : Top-level CMake project file, do global configuration
# and include sub-projects here.
#
cmake_minimum_required (VERSION 3.10)


project ("Mee207Examples")

# Target 1 from subfolder
add_executable (W1Ex1 "Week1/example1.c")
add_executable (W1Ex2 "Week1/example2.c")
add_executable (W1Ex3 "Week1/example3.c")

# Target 2 from subfolder
add_executable (W2Ex1 "Week2/example1.c")

