#include <shapes/ellipse.h>

#include <gtest/gtest.h>

using namespace wingmann::shapes;

TEST(shapes, ellipse_area) {
    const auto a{25.8};
    const auto b{39.1};
    auto area = consts::pi * a * b;

    EXPECT_EQ(area, Ellipse(a, b).area());
}
