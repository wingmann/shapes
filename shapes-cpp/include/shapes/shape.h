#ifndef WINGMANN_SHAPES_SHAPE_H
#define WINGMANN_SHAPES_SHAPE_H

#include <fmt/format.h>

#include <string>

namespace wingmann::shapes {

class Shape {
public:
    Shape() = default;
    virtual ~Shape() = default;

public:
    virtual double area() = 0;

    [[nodiscard]]
    virtual std::string print() const = 0;
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_SHAPE_H
