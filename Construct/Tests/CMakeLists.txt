enable_testing()
add_executable(Tests "Tests.cpp")
target_include_directories(Tests PRIVATE "headers")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET Tests PROPERTY CXX_STANDARD 20)
endif()