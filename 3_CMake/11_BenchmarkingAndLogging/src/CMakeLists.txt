# MyLib Library
set(LIBRARY_SOURCES "my_lib.cc")
set(LIBRARY_INCLUDES "${PROJECT_SOURCE_DIR}/include/")
add_library(${LIBRARY_NAME} OBJECT ${LIBRARY_SOURCES})
target_include_directories(${LIBRARY_NAME} PUBLIC ${LIBRARY_INCLUDES})
target_link_libraries(${LIBRARY_NAME} PUBLIC ${LIBRARY_LINALG} ${LIBRARY_LOG})
target_compile_features(${LIBRARY_NAME} PUBLIC cxx_std_17)
