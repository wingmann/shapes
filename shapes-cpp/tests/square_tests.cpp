#include <shapes/square.h>

#include <gtest/gtest.h>

using namespace shapes;

TEST(shapes, square_area) {
    const auto side{25.8};
    auto area = side * side;

    EXPECT_EQ(area, Square{side}.area());
}

TEST(shapes, square_to_rectangle) {
    const auto side{25.8};
    auto square = Square{side};
    auto rectangle = square.to_rectangle();

    EXPECT_EQ(true, rectangle.has_value());
    EXPECT_EQ(side, rectangle->get_width());
    EXPECT_EQ(side, rectangle->get_length());
}
