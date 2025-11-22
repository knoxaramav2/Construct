# CMakeList.txt : CMake project for Construct, include source and define
# project specific logic here.
#

# Add source to this project's executable.
add_executable (Construct)
target_include_directories(Construct PRIVATE "headers")

target_sources( Construct
PUBLIC
"Construct.cpp" 
"CliParser.cpp" 
"Error.cpp" 
)

# TODO: Add tests and install targets if needed.


