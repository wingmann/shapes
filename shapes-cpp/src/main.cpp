#include "shapes/shapes.h"

#include <iostream>
#include <memory>
#include <vector>

using namespace wingmann::shapes;

int main()
{
    std::vector<std::unique_ptr<basic_shape>> shapes(8);
    shapes[0] = std::make_unique<circle>(1.0);
    shapes[1] = std::make_unique<circle>(2.0);
    shapes[2] = std::make_unique<ellipse>(1.0, 2.0);
    shapes[3] = std::make_unique<ellipse>(2.0, 4.0);
    shapes[4] = std::make_unique<rectangle>(3.0, 5.0);
    shapes[5] = std::make_unique<rectangle>(4.0, 6.0);
    shapes[6] = std::make_unique<square>(8.0);
    shapes[7] = std::make_unique<square>(4.0);

    for (auto& shape : shapes)
        std::cout << "Area of shape: " << shape->to_string() << " = " << shape->area() << '\n';

    return 0;
}
