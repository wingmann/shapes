#include <shapes/rectangle.h>

#include <gtest/gtest.h>

using namespace wingmann::shapes;

TEST(shapes, rectangle_area) {
    const auto width{25.8};
    const auto length{39.1};
    auto area = width * length;

    EXPECT_EQ(area, Rectangle(width, length).area());
}
