# test

# get foldername as target name
get_filename_component(MODULE_NAME ${CMAKE_CURRENT_SOURCE_DIR} NAME)

process_files()

add_executable(${MODULE_NAME})
target_sources(${MODULE_NAME} PRIVATE ${MODULE_ALL_FILES})
target_include_directories(${MODULE_NAME} 
	PRIVATE src
			${CMAKE_CURRENT_SOURCE_DIR}
			${CMAKE_CURRENT_BINARY_DIR})
set_target_properties(${MODULE_NAME} PROPERTIES DEBUG_POSTFIX d)
