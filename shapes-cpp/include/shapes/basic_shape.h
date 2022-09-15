#ifndef WINGMANN_SHAPES_BASIC_SHAPE_H
#define WINGMANN_SHAPES_BASIC_SHAPE_H

#include <string>

namespace wingmann::shapes {

class basic_shape {
public:
    basic_shape() = default;
    virtual ~basic_shape() = default;

public:
    virtual double area() = 0;

    [[nodiscard]]
    virtual std::string to_string() const = 0;
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_BASIC_SHAPE_H
