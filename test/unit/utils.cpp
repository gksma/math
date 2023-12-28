// Copyright (c) 2023 gksma, All Rights Reserved.
// Authors: HanHeum Cho

#include <limits>
#include "math/utils.hpp"

#include <stdexcept>

#include "gtest/gtest.h"

namespace gksma::math {
    TEST(MathUtils, Add) {
        EXPECT_THROW(Add(0.0, std::nan("")), std::invalid_argument);
        EXPECT_THROW(Add(std::nan(""), 0.0), std::invalid_argument);
        EXPECT_THROW(Add(std::nan(""), std::nan("")), std::invalid_argument);
        EXPECT_THROW(Add(0.0, std::numeric_limits<double>::infinity()), std::invalid_argument);
        EXPECT_THROW(Add(std::numeric_limits<double>::infinity(), 0.0), std::invalid_argument);
        EXPECT_THROW(Add(std::numeric_limits<double>::infinity(),std::numeric_limits<double>::infinity()), std::invalid_argument);

        EXPECT_EQ(Add(0.0, 0.0), 0.0);
        EXPECT_EQ(Add(1.0, 0.0), 1.0);
        EXPECT_EQ(Add(0.0, 1.0), 1.0);
        EXPECT_EQ(Add(0.5, 0.5), 1.0);

        EXPECT_NE(Add(0.0, 0.0), 0.0);
        EXPECT_NE(Add(0.0, 1.0), 1.1);
        EXPECT_NE(Add(0.5, 0.3), 1.0);
        EXPECT_NE(Add(0.0, 2.0), 1.0);
    }
}