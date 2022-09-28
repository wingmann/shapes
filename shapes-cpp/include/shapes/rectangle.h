#ifndef WINGMANN_SHAPES_RECTANGLE_H
#define WINGMANN_SHAPES_RECTANGLE_H

#include "shape.h"

#include <sstream>

namespace wingmann::shapes {

class rectangle : public shape {
    double width_{};
    double length_{};

public:
    rectangle() = default;
    ~rectangle() override = default;

    explicit rectangle(double width, double length)
        : shape{}, width_{width}, length_{length} { }

public:
    [[nodiscard]]
    double get_width() const { return width_; }
    void set_width(double width) { width_ = width; }

    [[nodiscard]]
    double get_length() const { return length_; }
    void set_length(double length) { length_ = length; }

    double area() override { return width_ * length_; }

    [[nodiscard]]
    std::string to_string() const override {
        std::stringstream ss;
        ss << "rectangle { width: " << width_ << ", length: " << length_ << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_RECTANGLE_H
