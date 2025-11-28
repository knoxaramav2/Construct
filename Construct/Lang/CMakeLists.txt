message(">> Lang @ ${CMAKE_CURRENT_SOURCE_DIR}")

add_library(const_lang STATIC)
set_target_properties(const_utils PROPERTIES LINKER_LANGUAGE CXX)


target_include_directories( 
	const_lang 
PUBLIC 
${LANG_DIR}
${LANG_DIR}/headers
${UTILS_DIR}/headers
)

target_sources( 
	const_lang
PUBLIC
	"ConstLang.cpp"
)


