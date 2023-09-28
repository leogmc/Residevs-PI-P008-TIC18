cmake_minimum_required(VERSION 3.0)
project(SeuProjeto)

# Localize o OpenCV
find_package(OpenCV REQUIRED)

# Adicione o executável
add_executable(4.2.manipulando_array_multidimensionais 4.2.manipulando_array_multidimensionais.cpp)

# Link com o OpenCV
target_link_libraries(4.2.manipulando_array_multidimensionais ${OpenCV_LIBS})
