project(open_gopro_demo)
cmake_minimum_required(VERSION 3.1)

add_definitions(-D_CRT_SECURE_NO_WARNINGS)

find_package(OpenCV REQUIRED)

include_directories(/usr/include/x86_64-linux-gnu/)
include_directories(/usr/include/x86_64-linux-gnu/)

add_executable(stream src/stream.cpp)
add_executable(media src/media.cpp)
add_executable(video_stream_reader src/video_stream_reader.cpp)
# add_executable(GoProStreamDemo src/GoProStreamDemo.cpp)

target_link_libraries(stream /usr/lib/x86_64-linux-gnu/libcurl.so)
target_link_libraries(media /usr/lib/x86_64-linux-gnu/libcurl.so)
target_link_libraries(media /usr/lib/x86_64-linux-gnu/libcjson.so)
target_link_libraries(video_stream_reader ${OpenCV_LIBS})