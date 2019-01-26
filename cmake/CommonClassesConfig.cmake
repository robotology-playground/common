add_library(commonclasses INTERFACE IMPORTED)

set_target_properties(commonclasses PROPERTIES
  INTERFACE_INCLUDE_DIRECTORIES "${CMAKE_CURRENT_LIST_DIR}/../src/include"
)
set(CommonClasses_FOUND)
