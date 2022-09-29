#ifndef WINGMANN_SHAPES_SQUARE_H
#define WINGMANN_SHAPES_SQUARE_H

#include "shape.h"
#include "rectangle.h"

#include <optional>

namespace wingmann::shapes {

struct square : public shape {
    double side{};

public:
    square() = default;
    ~square() override = default;

    explicit square(double side) : side{side}
    {
    }

public:
    double area() override
    {
        return side * side;
    }

    [[nodiscard]]
    std::optional<rectangle> to_rectangle() const
    {
        return rectangle{side, side};
    }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "square { side: " << side << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_SQUARE_H
