#ifndef WINGMANN_SHAPES_ELLIPSE_H
#define WINGMANN_SHAPES_ELLIPSE_H

#include "basic_shape.h"
#include "consts.h"

#include <sstream>

namespace wingmann::shapes {

class ellipse : public basic_shape {
    double a_{};
    double b_{};

public:
    ellipse() = default;
    explicit ellipse(double a, double b) : basic_shape{}, a_{a}, b_{b} { }
    ~ellipse() override = default;

public:
    [[nodiscard]]
    double get_a() const { return a_; }

    void set_a(double a) { a_ = a; }

    [[nodiscard]]
    double get_b() const { return b_; }

    void set_b(double b) { b_ = b; }

    double area() override { return consts::pi * a_ * b_; }

    [[nodiscard]]
    std::string to_string() const override
    {
        std::stringstream ss;
        ss << "ellipse { a: " << a_ << ", b: " << b_ << " }";
        return ss.str();
    }
};

} // namespace wingmann::shapes

#endif // WINGMANN_SHAPES_ELLIPSE_H
