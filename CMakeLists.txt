cmake_minimum_required(VERSION 3.16)

project(DeepSeekClient VERSION 0.1 LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# 关键：添加 webengine 模块
find_package(Qt6 REQUIRED COMPONENTS Widgets WebEngineWidgets)

qt_standard_project_setup()

qt_add_executable(DeepSeekClient
    main.cpp
    mainwindow.cpp
    mainwindow.h
    res.qrc
)

# 链接 WebEngine
target_link_libraries(DeepSeekClient PRIVATE
    Qt6::Widgets
    Qt6::WebEngineWidgets
)

set_target_properties(DeepSeekClient PROPERTIES
    WIN32_EXECUTABLE ON
    MACOSX_BUNDLE ON
)
