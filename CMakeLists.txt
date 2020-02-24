# CMakeList.txt: NormChineseChess 的 CMake 项目，在此处包括源代码并定义
# 项目特定的逻辑。
#
cmake_minimum_required (VERSION 3.8)

project ("NormChineseChess")

include_directories("${PROJECT_SOURCE_DIR}/core")
add_subdirectory ("core")

# 将源代码添加到此项目的可执行文件。
add_executable (TextBaseUI "textui/Main.cpp")
target_link_libraries (TextBaseUI core)
# TODO: 如有需要，请添加测试并安装目标。
