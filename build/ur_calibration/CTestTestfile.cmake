# CMake generated Testfile for 
# Source directory: /home/administrator/Masterproject2/20_ROS/src/Robots/UR_Driver/ur_calibration
# Build directory: /home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(calibration_test "/usr/bin/python3" "-u" "/opt/ros/kilted/share/ament_cmake_test/cmake/run_test.py" "/home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration/test_results/ur_calibration/calibration_test.gtest.xml" "--package-name" "ur_calibration" "--output-file" "/home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration/ament_cmake_gmock/calibration_test.txt" "--command" "/home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration/calibration_test" "--gtest_output=xml:/home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration/test_results/ur_calibration/calibration_test.gtest.xml")
set_tests_properties(calibration_test PROPERTIES  LABELS "gmock" REQUIRED_FILES "/home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration/calibration_test" TIMEOUT "60" WORKING_DIRECTORY "/home/administrator/Masterproject2/20_ROS/src/Robots/build/ur_calibration" _BACKTRACE_TRIPLES "/opt/ros/kilted/share/ament_cmake_test/cmake/ament_add_test.cmake;125;add_test;/opt/ros/kilted/share/ament_cmake_gmock/cmake/ament_add_gmock_test.cmake;98;ament_add_test;/opt/ros/kilted/share/ament_cmake_gmock/cmake/ament_add_gmock.cmake;90;ament_add_gmock_test;/home/administrator/Masterproject2/20_ROS/src/Robots/UR_Driver/ur_calibration/CMakeLists.txt;81;ament_add_gmock;/home/administrator/Masterproject2/20_ROS/src/Robots/UR_Driver/ur_calibration/CMakeLists.txt;0;")
subdirs("gmock")
subdirs("gtest")
