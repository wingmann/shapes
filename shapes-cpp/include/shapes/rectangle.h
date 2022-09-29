#ifndef WINGMANN_SHAPES_RECTANGLE_H
#define WINGMANN_SHAPES_RECTANGLE_H

#include "shape.h"

#include <sstream>

namespace wingmann::shapes {

struct rectangle : public shape {
    double width{};
    double length{};

public:
    rectangle() = default;
    ~rectangle() override = default;

    explicit rectangle(double width, double length) : width{width}, length{length}
    {
    }

public:
    double area() override
    {
        return width * length;
    }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "rectangle { width: " << width << ", length: " << length << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_RECTANGLE_H
