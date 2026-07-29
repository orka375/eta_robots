#----------------------------------------------------------------
# Generated CMake target import file for configuration "RelWithDebInfo".
#----------------------------------------------------------------

# Commands may need to know the format version.
set(CMAKE_IMPORT_FILE_VERSION 1)

# Import target "ur_robot_driver::ur_robot_driver_log_handler" for configuration "RelWithDebInfo"
set_property(TARGET ur_robot_driver::ur_robot_driver_log_handler APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ur_robot_driver::ur_robot_driver_log_handler PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libur_robot_driver_log_handler.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libur_robot_driver_log_handler.so"
  )

list(APPEND _cmake_import_check_targets ur_robot_driver::ur_robot_driver_log_handler )
list(APPEND _cmake_import_check_files_for_ur_robot_driver::ur_robot_driver_log_handler "${_IMPORT_PREFIX}/lib/libur_robot_driver_log_handler.so" )

# Import target "ur_robot_driver::ur_robot_driver_plugin" for configuration "RelWithDebInfo"
set_property(TARGET ur_robot_driver::ur_robot_driver_plugin APPEND PROPERTY IMPORTED_CONFIGURATIONS RELWITHDEBINFO)
set_target_properties(ur_robot_driver::ur_robot_driver_plugin PROPERTIES
  IMPORTED_LOCATION_RELWITHDEBINFO "${_IMPORT_PREFIX}/lib/libur_robot_driver_plugin.so"
  IMPORTED_SONAME_RELWITHDEBINFO "libur_robot_driver_plugin.so"
  )

list(APPEND _cmake_import_check_targets ur_robot_driver::ur_robot_driver_plugin )
list(APPEND _cmake_import_check_files_for_ur_robot_driver::ur_robot_driver_plugin "${_IMPORT_PREFIX}/lib/libur_robot_driver_plugin.so" )

# Commands beyond this point should not need to know the version.
set(CMAKE_IMPORT_FILE_VERSION)
