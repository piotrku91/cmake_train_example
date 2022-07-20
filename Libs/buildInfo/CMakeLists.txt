# Normal library link
add_library(buildInfoLib Src/buildinfo.cpp)

target_include_directories(buildInfoLib PUBLIC Inc)