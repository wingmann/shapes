#ifndef WINGMANN_SHAPES_CIRCLE_H
#define WINGMANN_SHAPES_CIRCLE_H

#include "shape.h"
#include "consts.h"

#include <sstream>

namespace wingmann::shapes {

class circle : public shape {
    double radius_{};

public:
    circle() = default;
    ~circle() override = default;

    explicit circle(double radius) : shape{}, radius_{radius} { }

public:
    [[nodiscard]]
    double get_radius() const { return radius_; }
    void set_radius(double radius) { radius_ = radius; }

    double area() override { return consts::pi * radius_ * radius_; }

    [[nodiscard]]
    std::string to_string() const override {
        std::stringstream ss;
        ss << "circle { radius: " << radius_ << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_CIRCLE_H
