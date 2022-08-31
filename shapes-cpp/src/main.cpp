#include "shapes/circle.h"
#include "shapes/ellipse.h"
#include "shapes/rectangle.h"
#include "shapes/shape.h"
#include "shapes/square.h"

#include <memory>
#include <vector>

using namespace shapes;

int main(int argc, char** argv) {
    std::vector<std::unique_ptr<Shape>> shapes;
    shapes.emplace_back(std::make_unique<Circle>(1.0));
    shapes.emplace_back(std::make_unique<Circle>(2.0));
    shapes.emplace_back(std::make_unique<Ellipse>(1.0, 2.0));
    shapes.emplace_back(std::make_unique<Ellipse>(2.0, 4.0));
    shapes.emplace_back(std::make_unique<Rectangle>(3.0, 5.0));
    shapes.emplace_back(std::make_unique<Rectangle>(4.0, 6.0));
    shapes.emplace_back(std::make_unique<Square>(8.0));
    shapes.emplace_back(std::make_unique<Square>(4.0));

    for (auto& shape : shapes) {
        std::cout << "Area of shape: " << shape->print() << " = " << shape->area() << '\n';
    }
    return 0;
}
