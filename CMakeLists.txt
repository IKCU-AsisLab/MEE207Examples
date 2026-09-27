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
add_executable (W2Ex2 "Week2/example2.c")
add_executable (W2Ex4 "Week2/example4.c")
add_executable (W2Ex5 "Week2/example5.c")
add_executable (W2Ex6 "Week2/example6.c")

# Target 3 from subfolder
add_executable (W3Ex0 "Week3/example0.c")
add_executable (W3Ex1 "Week3/example1.c")
add_executable (W3Ex2 "Week3/example2.c")
add_executable (W3Ex3 "Week3/example3.c")
add_executable (W3Ex4 "Week3/example4.c")
add_executable (W3Ex5 "Week3/example5.c")
add_executable (W3Ex6 "Week3/example6.c")
