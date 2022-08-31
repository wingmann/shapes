#ifndef WINGMANN_SHAPES_ELLIPSE_H
#define WINGMANN_SHAPES_ELLIPSE_H

#include "shape.h"

namespace shapes {

class Ellipse : public Shape {
    double a_{};
    double b_{};

public:
    Ellipse() = default;
    explicit Ellipse(double a, double b) : Shape{}, a_{a}, b_{b} { }
    ~Ellipse() override = default;

public:
    [[nodiscard]]
    double get_a() const { return a_; }

    [[nodiscard]]
    double get_b() const { return b_; }

    void set_a(double a) { a_ = a; }
    void set_b(double b) { b_ = b; }

    double area() override { return pi * a_ * b_; }

    [[nodiscard]]
    std::string print() const override {
        std::stringstream ss;
        ss << "ellipse(a: " << a_ << ", b: " << b_ << ')';
        return ss.str();
    }
};

} // namespace shapes

#endif // WINGMANN_SHAPES_ELLIPSE_H
