# LinAlg
set(LIBRARY_INCLUDES "linalg/")
add_library(${LIBRARY_LINALG} INTERFACE)
target_include_directories(${LIBRARY_LINALG} INTERFACE ${LIBRARY_INCLUDES})

# Loguru
file(GLOB LOGURU_SOURCES "loguru/*.cpp")
add_library(${LIBRARY_LOG} ${LOGURU_SOURCES})
target_include_directories(${LIBRARY_LOG} PUBLIC loguru)
if(UNIX)
    target_link_libraries(${LIBRARY_LOG} PUBLIC pthread dl)
endif()

# Celero
if(USE_BENCHMARKS)
    add_subdirectory(Celero)
    add_library(${LIBRARY_BENCH} ALIAS celero)
endif()
