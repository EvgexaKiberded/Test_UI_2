# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Release")
  file(REMOVE_RECURSE
  "CMakeFiles\\test_UI_2_Andreyman_Evgeny_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\test_UI_2_Andreyman_Evgeny_autogen.dir\\ParseCache.txt"
  "test_UI_2_Andreyman_Evgeny_autogen"
  )
endif()
