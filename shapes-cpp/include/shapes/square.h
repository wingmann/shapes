#ifndef WINGMANN_SHAPES_SQUARE_H
#define WINGMANN_SHAPES_SQUARE_H

#include "basic_shape.h"
#include "rectangle.h"

#include <optional>

namespace wingmann::shapes {

class square : public basic_shape {
    double side_{};

public:
    square() = default;
    explicit square(double side) : basic_shape{}, side_{side} { }
    ~square() override = default;

public:
    [[nodiscard]]
    double get_radius() const { return side_; }

    void set_radius(double side) { side_ = side; }

    double area() override { return side_ * side_; }

    [[nodiscard]]
    std::optional<rectangle> to_rectangle() const
    {
        return rectangle{side_, side_};
    }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "square { side: " << side_ <<  " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_SQUARE_H
