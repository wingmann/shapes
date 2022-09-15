#include <shapes/rectangle.h>

#include <gtest/gtest.h>

using namespace wingmann;

TEST(shapes, rectangle_area) {
    const auto width{25.8};
    const auto length{39.1};
    const auto area{1008.78};

    EXPECT_EQ(area, std::round(shapes::rectangle(width, length).area() * 100) / 100);
}
