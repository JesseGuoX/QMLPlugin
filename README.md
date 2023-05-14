# Creating C++ plugins for QML with CMake

## How to build

1. Clone this repository
2. Change the `CMAKE_PREFIX_PATH` in `CMakeLists.txt` to point to your Qt installation
3. `cmake -B build .`
4. `cmake --build build`
5. `cmake -P build/cmake_install.cmake`

Now the plugin is ready and installed in the `./build/qml` dictionary.

## How to use the plugin in QML
1. ` export QML2_IMPORT_PATH=/XXXX/QMLPlugin/build/qml:$QML2_IMPORT_PATH`
2. `qml app.qml` or `qmlscene app.qml` will launch the app(`qml` or `qmlscene` is in the directory of Qt installation).
