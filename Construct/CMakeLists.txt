
message(">> All @ ${CMAKE_CURRENT_SOURCE_DIR}")

cmake_minimum_required (VERSION 3.30)

set(CMAKE_CXX_STANDARD 23)
set(CMAKE_CXX_STANDARD_REQUIRED True)
set(CMAKE_C_STANDARD 17)
set(CMAKE_C_STANDARD_REQUIRED True)

project(ConstructProg)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

# Define project variables
set(ENVIRONMENT_DIR "${CMAKE_CURRENT_SOURCE_DIR}/Environment")
set(CONSTRUCT_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Construct)
set(TESTS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Tests)
set(UTILS_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Utils)
set(LANG_DIR ${CMAKE_CURRENT_SOURCE_DIR}/Lang)

# Include projects.
add_subdirectory ("environment")
add_subdirectory (utils)
add_subdirectory (lang)
add_subdirectory (construct)

#Testing
enable_testing()
add_subdirectory (Tests)
