# CMake generated Testfile for 
# Source directory: /Users/marlonkasemann/Desktop/Coding/Projects/WormBrain/libs/raylib/src
# Build directory: /Users/marlonkasemann/Desktop/Coding/Projects/WormBrain/cmake-build-debug/libs/raylib/src
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test(pkg-config--static "/Users/marlonkasemann/Desktop/Coding/Projects/WormBrain/libs/raylib/src/../cmake/test-pkgconfig.sh" "--static")
set_tests_properties(pkg-config--static PROPERTIES  _BACKTRACE_TRIPLES "/Users/marlonkasemann/Desktop/Coding/Projects/WormBrain/libs/raylib/src/CMakeLists.txt;180;add_test;/Users/marlonkasemann/Desktop/Coding/Projects/WormBrain/libs/raylib/src/CMakeLists.txt;0;")
subdirs("external/glfw")
