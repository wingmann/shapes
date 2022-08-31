#include <shapes/ellipse.h>

#include <gtest/gtest.h>

using namespace shapes;

TEST(shapes, ellipse_area) {
    const auto a{25.8};
    const auto b{39.1};
    auto area = 3.14 * a * b;

    EXPECT_EQ(area, Ellipse(a, b).area());
}
