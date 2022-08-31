mod shapes;

use crate::shapes::{Circle, Ellipse, Rectangle, Shape, Square};

fn main() {
    let shapes: Vec<Box<dyn Shape>> = vec![
        Box::from(Circle::new(1.0).unwrap()),
        Box::from(Circle::new(2.0).unwrap()),
        Box::from(Ellipse::new(1.0, 2.0).unwrap()),
        Box::from(Ellipse::new(2.0, 4.0).unwrap()),
        Box::from(Rectangle::new(3.0, 5.0).unwrap()),
        Box::from(Rectangle::new(4.0, 6.0).unwrap()),
        Box::from(Square::new(8.0).unwrap()),
        Box::from(Square::new(4.0).unwrap()),
    ];

    for shape in shapes.iter() {
        println!("Area of shape: {} = {}", shape, shape.area());
    }
}
