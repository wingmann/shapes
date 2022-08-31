#include <shapes/circle.h>

#include <gtest/gtest.h>

using namespace shapes;

TEST(shapes, circle_area) {
    const auto radius = 25.8;
    auto area = 3.14 * radius * radius;

    EXPECT_EQ(area, Circle(radius).area());
}
