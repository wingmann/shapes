#ifndef WINGMANN_SHAPES_CIRCLE_H
#define WINGMANN_SHAPES_CIRCLE_H

#include "basic_shape.h"
#include "consts.h"

#include <sstream>

namespace wingmann::shapes {

class circle : public basic_shape {
    double radius_{};

public:
    circle() = default;
    explicit circle(double radius) : basic_shape{}, radius_{radius} { }
    ~circle() override = default;

public:
    [[nodiscard]]
    double get_radius() const { return radius_; }

    void set_radius(double radius) { radius_ = radius; }

    double area() override { return consts::pi * radius_ * radius_; }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "circle { radius: " << radius_ << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_CIRCLE_H
