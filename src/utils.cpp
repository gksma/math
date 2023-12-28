// Copyright (c) 2023 gksma, All Rights Reserved.
// Authors: HanHeum Cho

#include <cmath>
#include "math/utils.cpp"
#include <stdexcept>

namespace gksma::math {
    auto Add(double lhs, double rhs) -> double {
        if (std::isnan(lhs) || std::isnan(rhs) || std::isinf(lhs) || std::isinf(rhs))
        {
            throw std::invalid_argument("rhs or lhs is nan or inf");
        }

        return lhs + rhs;
    }

    auto IsEqual(double lhs, double rhs) -> bool {
        return std::abs(lhs - rhs) < std::numeric_limits<double>::epsilon();
    }

    auto IsEqual(float lhs, float rhs) -> bool {
        return std::abs(lhs - rhs) < std::numeric_limits<float>::epsilon();
    }
}