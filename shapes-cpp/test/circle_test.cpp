#include <shapes/circle.h>

#include <gtest/gtest.h>

using namespace wingmann::shapes;

TEST(shapes, circle_area) {
    const auto radius{25.8};
    const auto area{2091.17};

    EXPECT_EQ(area, std::round(Circle(radius).area() * 100) / 100);
}
