#include <cstdint>

#include "/home/gksma/repos/cpp_project_template/thirdparty/install/Debug/GTest/include/gtest/gtest.h"

auto main(int32_t argc, char **argv) -> int32_t {
  ::testing::InitGoogleTest(&argc, argv);

  return RUN_ALL_TESTS();
}