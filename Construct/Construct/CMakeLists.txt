
message(">> Construct @ ${CMAKE_CURRENT_SOURCE_DIR}")

add_executable (const_construct)

target_include_directories(
	const_construct 
PRIVATE 
	"headers"
	"${UTILS_DIR}/headers"
)

target_link_libraries(
	const_construct 
PRIVATE 
	const_utils
)

target_sources( const_construct
PUBLIC
Construct.cpp
CliParser.cpp
)


