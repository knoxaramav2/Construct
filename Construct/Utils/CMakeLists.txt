message(">> Utils @ ${CMAKE_CURRENT_SOURCE_DIR}")

add_library(const_utils STATIC)
set_target_properties(const_utils PROPERTIES LINKER_LANGUAGE CXX)

target_include_directories( 
	const_utils 
PUBLIC 
${UTILS_DIR}
${UTILS_DIR}/headers
${ENVIRONMENT_DIR}/headers
)

target_sources( 
	const_utils
PUBLIC
	${UTILS_DIR}/Error.cpp
	${UTILS_DIR}/StrUtils.cpp
	${UTILS_DIR}/File.cpp
)