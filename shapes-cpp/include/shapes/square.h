#ifndef WINGMANN_SHAPES_SQUARE_H
#define WINGMANN_SHAPES_SQUARE_H

#include "shape.h"
#include "rectangle.h"

#include <optional>

namespace shapes {

class Square : public Shape {
    double side_{};

public:
    Square() = default;
    explicit Square(double side) : Shape{}, side_{side} { }
    ~Square() override = default;

public:
    [[nodiscard]]
    double get_radius() const { return side_; }

    void set_radius(double side) { side_ = side; }

    double area() override { return side_ * side_; }

    [[nodiscard]]
    std::optional<Rectangle> to_rectangle() const {
        return Rectangle{side_, side_};
    }

    [[nodiscard]]
    std::string print() const override {
        return fmt::format("square(side: {})", side_);
    }
};

} // namespace shapes

#endif // WINGMANN_SHAPES_SQUARE_H
