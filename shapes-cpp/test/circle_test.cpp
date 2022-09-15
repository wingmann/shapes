#include <shapes/circle.h>

#include <gtest/gtest.h>

using namespace wingmann::shapes;

TEST(shapes, circle_area) {
    const auto radius = 25.8;
    auto area = consts::pi * radius * radius;

    EXPECT_EQ(area, Circle(radius).area());
}
