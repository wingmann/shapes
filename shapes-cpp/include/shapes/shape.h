#ifndef WINGMANN_SHAPES_SHAPE_H
#define WINGMANN_SHAPES_SHAPE_H

#include <fmt/format.h>

#include <string>

namespace shapes {

class Shape {
public:
    Shape() = default;
    virtual ~Shape() = default;

public:
    virtual double area() = 0;

    [[nodiscard]]
    virtual std::string print() const = 0;
};

const double pi = 3.14159265358979323846264338327950288;

} // namespace shapes

#endif // WINGMANN_SHAPES_SHAPE_H
