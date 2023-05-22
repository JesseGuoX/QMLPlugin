cmake_minimum_required(VERSION 3.14)

project(app VERSION 1.0.0 LANGUAGES CXX)

set(CMAKE_INCLUDE_CURRENT_DIR ON)
set(CMAKE_AUTOUIC ON)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

set(CMAKE_PREFIX_PATH "/Users/jg/Qt6/5.15.2/clang_64/lib/cmake/")
# set(CMAKE_PREFIX_PATH "/Users/jg/Qt6/6.2.4/macos/lib/cmake/")

find_package(QT NAMES Qt6 Qt5 COMPONENTS Widgets Core Quick Qml REQUIRED)
find_package(Qt${QT_VERSION_MAJOR} COMPONENTS Widgets Core Quick QuickControls2 REQUIRED)

add_subdirectory(src)

add_executable(
    ${PROJECT_NAME}
    main.cpp        # Our example project consists only of one .cpp file
    # src/userregister_plugin.cpp
    # src/userregister_plugin.h
    # src/register.h
    # src/register.cpp
    # src/qmldir
)


add_dependencies(${PROJECT_NAME} Register)

target_compile_definitions(${PROJECT_NAME} PRIVATE
        QML_IMPORT_ROOT="${CMAKE_CURRENT_LIST_DIR}"
)

target_compile_features(
    ${PROJECT_NAME}
    PRIVATE
        cxx_auto_type
        cxx_generic_lambdas
)


target_link_libraries(
    ${PROJECT_NAME}
    PRIVATE
        Qt5::Widgets
        Qt5::Core
        Qt5::Quick
        Qt5::Qml
        Register
)

