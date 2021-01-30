# Linalg
set(LIBRARY_INCLUDES "linalg/")
add_library(linalg INTERFACE)
target_include_directories(linalg SYSTEM INTERFACE ${LIBRARY_INCLUDES})
