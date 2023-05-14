cmake_minimum_required(VERSION 3.14)

project(Register VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# set(CMAKE_PREFIX_PATH "/Users/jg/Qt6/5.15.2/clang_64/lib/cmake/")
set(CMAKE_PREFIX_PATH "/Users/jg/Qt6/6.2.4/macos/lib/cmake/")

find_package(QT NAMES Qt6 Qt5 COMPONENTS Core Quick Qml REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Core Quick QuickControls2 REQUIRED)



set(PROJECT_SOURCES
    ${CMAKE_CURRENT_SOURCE_DIR}/src/userregister_plugin.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/src/userregister_plugin.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/register.h
    ${CMAKE_CURRENT_SOURCE_DIR}/src/register.cpp
    ${CMAKE_CURRENT_SOURCE_DIR}/resources/qml/qmldir
)

add_library(${PROJECT_NAME}
    SHARED
        ${PROJECT_SOURCES}
)

target_compile_definitions(${PROJECT_NAME}
    PRIVATE $<$<OR:$<CONFIG:Debug>,$<CONFIG:RelWithDebInfo>>:QT_QML_DEBUG>
)

target_link_libraries(${PROJECT_NAME}
    PRIVATE
        Qt${QT_VERSION_MAJOR}::Core
        Qt${QT_VERSION_MAJOR}::Quick
        Qt${QT_VERSION_MAJOR}::QuickControls2
        Qt${QT_VERSION_MAJOR}::Qml
)

set(PLUGIN_PATH ${CMAKE_CURRENT_SOURCE_DIR}/build/qml/User/${PROJECT_NAME})

install(TARGETS ${PROJECT_NAME} DESTINATION ${PLUGIN_PATH})
install(FILES resources/qml/qmldir DESTINATION ${PLUGIN_PATH})