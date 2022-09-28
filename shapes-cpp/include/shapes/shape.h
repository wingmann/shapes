#ifndef WINGMANN_SHAPES_BASIC_SHAPE_H
#define WINGMANN_SHAPES_BASIC_SHAPE_H

#include <string>

namespace wingmann::shapes {

class shape {
public:
    shape() = default;
    virtual ~shape() = default;

public:
    virtual double area() = 0;

    [[nodiscard]]
    virtual std::string to_string() const = 0;
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_BASIC_SHAPE_H
