# test

# get foldername as target name
get_filename_component(MODULE_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

process_files_qt()

add_executable(${MODULE_NAME})
target_sources(${MODULE_NAME} PRIVATE ${MODULE_ALL_FILES})

target_include_directories(${MODULE_NAME} 
	PRIVATE src
			${CMAKE_CURRENT_SOURCE_DIR}
			${CMAKE_CURRENT_BINARY_DIR})

set_target_properties(${MODULE_NAME} PROPERTIES DEBUG_POSTFIX d)

target_link_libraries(${MODULE_NAME} 
	PRIVATE Externals::Qt5Basic)

set_subsystem_console_debug(${MODULE_NAME} ON)
set_subsystem_console_release(${MODULE_NAME} OFF)