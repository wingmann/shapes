#ifndef WINGMANN_SHAPES_ELLIPSE_H
#define WINGMANN_SHAPES_ELLIPSE_H

#include "shape.h"
#include "consts.h"

#include <sstream>

namespace wingmann::shapes {

struct ellipse : public shape {
    double a{};
    double b{};

public:
    ellipse() = default;
    ~ellipse() override = default;

    explicit ellipse(double a, double b) : a{a}, b{b} { }

public:
    double area() override
    {
        return consts::pi * a * b;
    }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "ellipse { a: " << a << ", b: " << b << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_ELLIPSE_H
