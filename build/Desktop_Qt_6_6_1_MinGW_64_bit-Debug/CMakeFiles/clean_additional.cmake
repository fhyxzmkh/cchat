# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\light-chat_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\light-chat_autogen.dir\\ParseCache.txt"
  "light-chat_autogen"
  )
endif()
