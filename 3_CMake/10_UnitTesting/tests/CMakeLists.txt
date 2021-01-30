set(TEST_SOURCES "main.cc")
add_executable(${TEST_MAIN} ${TEST_SOURCES})

if(WIN32)
    set(TEST_FLAGS "/Od")
    target_link_libraries(${TEST_MAIN} PRIVATE ${LIBRARY_NAME} gtest)
endif()
if(UNIX)
    set(TEST_FLAGS "-O0;-g")
    target_link_libraries(${TEST_MAIN} PRIVATE ${LIBRARY_NAME} gtest pthread)
endif()

target_compile_options(${TEST_MAIN} PUBLIC ${TEST_FLAGS})
target_compile_features(${TEST_MAIN} PUBLIC cxx_std_17)

add_test(NAME ${LIBRARY_NAME}.${TEST_MAIN} COMMAND ${TEST_MAIN})
