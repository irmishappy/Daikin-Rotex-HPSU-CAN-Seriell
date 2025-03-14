# Minimale CMake-Version
cmake_minimum_required(VERSION 3.10)

# Projektname
project(MyProject)

# GoogleTest herunterladen und einbinden
# Wir verwenden das FetchContent-Modul, um Google Test herunterzuladen
include(FetchContent)
FetchContent_Declare(
    googletest
    GIT_REPOSITORY https://github.com/google/googletest.git
    GIT_TAG release-1.11.0  # Wähle die Version, die du verwenden möchtest
)

# GoogleTest in das Projekt einbinden
FetchContent_MakeAvailable(googletest)

# Dein Quellcode und Testdateien hinzufügen
add_executable(MyTests test.cpp)

# GoogleTest-Bibliothek zu den Tests linken
target_link_libraries(MyTests gtest_main)

# GoogleTest-Tests einrichten
include_directories(${gtest_SOURCE_DIR}/include ${gtest_SOURCE_DIR})

# Testausführung aktivieren
enable_testing()
add_test(NAME MyTests COMMAND MyTests)