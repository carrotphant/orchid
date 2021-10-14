add_subdirectory(test_01_helloworld)
add_subdirectory(test_02_qt_helloworld)

# folder in solution explorer
set_target_properties(test_01_helloworld 
					  test_02_qt_helloworld
					  PROPERTIES FOLDER "Tests")