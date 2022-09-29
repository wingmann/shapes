#ifndef WINGMANN_SHAPES_CIRCLE_H
#define WINGMANN_SHAPES_CIRCLE_H

#include "shape.h"
#include "consts.h"

#include <sstream>

namespace wingmann::shapes {

struct circle : public shape {
    double radius;

public:
    circle() = default;
    ~circle() override = default;

    explicit circle(double radius) : radius{radius}
    {
    }

public:
    double area() override
    {
        return consts::pi * radius * radius;
    }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "circle { radius: " << radius << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_CIRCLE_H
