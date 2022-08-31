#ifndef WINGMANN_SHAPES_RECTANGLE_H
#define WINGMANN_SHAPES_RECTANGLE_H

#include "shape.h"

namespace shapes {

class Rectangle : public Shape {
    double width_{};
    double length_{};

public:
    Rectangle() = default;
    explicit Rectangle(double width, double length) : Shape{}, width_{width}, length_{length} { }
    ~Rectangle() override = default;

public:
    [[nodiscard]]
    double get_width() const {
        return width_;
    }

    [[nodiscard]]
    double get_length() const {
        return length_;
    }

    void set_width(double width) {
        width_ = width;
    }

    void set_length(double length) {
        length_ = length;
    }

    double area() override {
        return width_ * length_;
    }

    [[nodiscard]]
    std::string print() const override {
        std::stringstream ss;
        ss << "rectangle(width: " << width_ << ", length: " << length_  << ')';
        return ss.str();
    }
};

} // namespace shapes

#endif // WINGMANN_SHAPES_RECTANGLE_H
