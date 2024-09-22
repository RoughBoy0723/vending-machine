# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles/vending-machine_autogen.dir/AutogenUsed.txt"
  "CMakeFiles/vending-machine_autogen.dir/ParseCache.txt"
  "vending-machine_autogen"
  )
endif()
