add_library(RobotologyTemplateLibrary INTERFACE IMPORTED)

set_target_properties(RobotologyTemplateLibrary PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_LIST_DIR}/../src/include"
)
set(RobotologyTemplateLibrary_FOUND)
