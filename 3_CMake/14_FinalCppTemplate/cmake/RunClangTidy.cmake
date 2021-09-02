add_custom_target(${PROJECT}_clang_tidy
    python3 ${PROJECT_SOURCE_DIR}/scripts/run-clang-tidy.py
    -clang-tidy-binary=${CLANG_TIDY_EXE}
    -extra-arg-before=-std=${CMAKE_CXX_STANDARD}
    )
