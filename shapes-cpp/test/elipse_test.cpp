#include <shapes/ellipse.h>

#include <gtest/gtest.h>

using namespace wingmann::shapes;

TEST(shapes, ellipse_area) {
    const auto a{25.8};
    const auto b{39.1};
    const auto area{3169.18};

    EXPECT_EQ(area, std::round(Ellipse(a, b).area() * 100) / 100);
}
