#ifndef WINGMANN_SHAPES_CIRCLE_H
#define WINGMANN_SHAPES_CIRCLE_H

#include "shape.h"

namespace shapes {

class Circle : public Shape {
    double radius_{};

public:
    Circle() = default;
    explicit Circle(double radius) : Shape{}, radius_{radius} { }
    ~Circle() override = default;

public:
    [[nodiscard]]
    double get_radius() const {
        return radius_;
    }

    void set_radius(double radius) {
        radius_ = radius;
    }

    double area() override {
        return pi * radius_ * radius_;
    }

    [[nodiscard]]
    std::string print() const override {
        std::stringstream ss;
        ss << "circle(radius: " << radius_ << ')';
        return ss.str();
    }
};

} // namespace shapes

#endif // WINGMANN_SHAPES_CIRCLE_H
