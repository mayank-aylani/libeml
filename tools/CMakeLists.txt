cmake_minimum_required(VERSION 3.2)
project(EarlML CXX)
include_directories(include)

add_executable(test_to_double
test/test_to_double.cpp
src/utils.cpp
)

add_executable(test_to_trime
test/test_to_trim.cpp
src/utils.cpp
)


add_executable(test_to_split
test/test_to_split.cpp
src/utils.cpp
)

add_executable(csv_validator
src/csv_validator.cpp
src/utils.cpp
)

add_executable(random_csv_generator
src/random_csv_generator.cpp

add_executable(test_split_2
test/test_split_2.cpp
src/utils.cpp
)

add_executable(min_max_scaler
src/min_max_scaler.cpp
src/utils.cpp
)