#include <shapes/circle.h>

#include <gtest/gtest.h>

using namespace wingmann;

TEST(shapes, circle_area)
{
    const auto radius{25.8};
    const auto area{2091.17};

    EXPECT_EQ(area, std::round(shapes::circle(radius).area() * 100) / 100);
}
