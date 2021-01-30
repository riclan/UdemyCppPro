set(LIBRARY_INCLUDES "linalg/")
add_library(${LIBRARY_LINALG} INTERFACE)
target_include_directories(${LIBRARY_LINALG} INTERFACE ${LIBRARY_INCLUDES})
