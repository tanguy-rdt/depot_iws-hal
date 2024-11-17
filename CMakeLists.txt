cmake_minimum_required(VERSION 3.20)

project(hal VERSION 1.0
            DESCRIPTION "HAL librairie for Indoor Weather Station"
            LANGUAGES CXX C)


# ADD .cpp & .h
set(SRC_DIR ${CMAKE_CURRENT_SOURCE_DIR}/src)

set(SRC
    ${SRC_DIR}/hal.cpp
    ${SRC_DIR}/hal_stub/hal_stub.cpp
    ${SRC_DIR}/hal_minimal/hal_minimal.cpp
)

set(INCLUDE_DIRS
    ${SRC_DIR}
    ${SRC_DIR}/hal_stub 
    ${SRC_DIR}/hal_minimal 
)


# LINK
add_library(hal STATIC ${SRC})
target_include_directories(hal PUBLIC ${INCLUDE_DIRS})

if(HAL_USE_SDL)
    target_link_libraries(hal PRIVATE SDL2::SDL2)
endif()

if(HAL_USE_LV_DRIVERS)
    target_link_libraries(hal PRIVATE lv_drivers)
endif()


# BUILD OPT
if(STUB)
    message(STATUS "HAL build in stub")
    target_compile_definitions(hal PUBLIC STUB=1)
endif()

