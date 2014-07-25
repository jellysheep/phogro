
project(PhoGro)
cmake_minimum_required(VERSION 2.8)

# enable documentation generation
FIND_PACKAGE(Doxygen)
if (DOXYGEN_FOUND)
    configure_file(Doxyfile.in ${PROJECT_BINARY_DIR}/Doxyfile @ONLY IMMEDIATE)
    add_custom_target(docs COMMAND ${DOXYGEN_EXECUTABLE}
        ${PROJECT_BINARY_DIR}/Doxyfile
        SOURCES ${PROJECT_BINARY_DIR}/Doxyfile)
else()
    message(WARNING "Doxygen is needed to build the documentation.")
endif()

# put binary output in bin/ subdirectory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(EXECUTABLE_OUTPUT_PATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})
set(LIBRARY_OUTPUT_PATH ${CMAKE_RUNTIME_OUTPUT_DIRECTORY})

# select release build type as default
if(NOT CMAKE_BUILD_TYPE)
    set(CMAKE_BUILD_TYPE "Release")
endif()
message(STATUS "'${CMAKE_BUILD_TYPE}' built type was selected.")

# set src/ as source subdirectory
set(PROJECT_SOURCE_SUBDIR ${PROJECT_SOURCE_DIR}/src)

# add include directories
include_directories("${PROJECT_SOURCE_SUBDIR}")

# add compiler flags to optimize in release mode
set(CMAKE_CXX_RELEASE_FLAGS "${CMAKE_CXX_FLAGS} -O2")

# add compiler flags to enable strict compilation in debug mode
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -g -O0 --coverage")
set(CMAKE_CXX_FLAGS_DEBUG "${CMAKE_CXX_FLAGS_DEBUG} -Wall -Wextra -pedantic")

# activate automatic meta object compiler
set(CMAKE_AUTOMOC ON)

# find and add Qt library
find_package(Qt5Core REQUIRED)

# add all header files
set(HEADERS
    ${PROJECT_SOURCE_SUBDIR}/Model/Category.hpp
    ${PROJECT_SOURCE_SUBDIR}/Model/Image.hpp
    ${PROJECT_SOURCE_SUBDIR}/Model/Project.hpp
    ${PROJECT_SOURCE_SUBDIR}/Presenter/CategoryPresenter.hpp
    ${PROJECT_SOURCE_SUBDIR}/Presenter/ImagePresenter.hpp
    ${PROJECT_SOURCE_SUBDIR}/Presenter/ProjectPresenter.hpp
    ${PROJECT_SOURCE_SUBDIR}/View/CategoryView.hpp
    ${PROJECT_SOURCE_SUBDIR}/View/ImageView.hpp
    ${PROJECT_SOURCE_SUBDIR}/View/ProjectView.hpp
    ${PROJECT_SOURCE_SUBDIR}/Interfaces/ICategoryView.hpp
    ${PROJECT_SOURCE_SUBDIR}/Interfaces/IImageView.hpp
    ${PROJECT_SOURCE_SUBDIR}/Interfaces/IProjectView.hpp
)

# add all source files
set(SOURCES
    ${PROJECT_SOURCE_SUBDIR}/main.cpp
)

# add object files to be compiled and bundled into executable
add_executable(phogro ${HEADERS} ${SOURCES})

# add Qt linked libraries
qt5_use_modules(phogro Core)

# add other external linked libraries
target_link_libraries(phogro)

# add rule to install public header file
install(TARGETS phogro RUNTIME DESTINATION bin)
