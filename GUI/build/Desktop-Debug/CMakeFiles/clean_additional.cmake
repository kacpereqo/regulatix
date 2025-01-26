# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\GUI_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\GUI_autogen.dir\\ParseCache.txt"
  "GUI_autogen"
  "LOGIC\\CMakeFiles\\LOGIC_autogen.dir\\AutogenUsed.txt"
  "LOGIC\\CMakeFiles\\LOGIC_autogen.dir\\ParseCache.txt"
  "LOGIC\\LOGIC_autogen"
  )
endif()
