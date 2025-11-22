add_library(Utils STATIC)
set_target_properties(Utils PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories( Utils PRIVATE "headers")

target_sources( Utils
PUBLIC
StrUtils.cpp
)