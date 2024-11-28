cmake_minimum_required(VERSION 3.22)
project(ayed_herencia_polimorfismo)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "../")

add_compile_options(-Wall -Werror -Wconversion)

include_directories(include)

set(ARCHIVOS_FUENTE
        src/Animal.cpp
        src/Gato.cpp
        src/Megatron.cpp
        src/Transformer.cpp
)

add_executable(ayed_herencia_polimorfismo
        ${ARCHIVOS_FUENTE}
        main.cpp
)

set_target_properties(${PROJECT_NAME} PROPERTIES OUTPUT_NAME "main")