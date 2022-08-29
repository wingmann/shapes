use crate::shapes::Shape;
use std::fmt::{Display, Formatter};

pub struct Ellipse {
    a: f64,
    b: f64,
}

impl Ellipse {
    pub fn new(a: f64, b: f64) -> Option<Self> {
        if a > 0.0 && b > 0.0 {
            Some(Self { a, b })
        } else {
            None
        }
    }
}

impl Display for Ellipse {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        write!(f, "ellipse(a: {}, b: {})", self.a, self.b)
    }
}

impl Shape for Ellipse {
    fn area(&self) -> f64 {
        std::f64::consts::PI * self.a * self.b
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn some() {
        assert!(Ellipse::new(4.0, 9.5).is_some());
    }

    #[test]
    fn none() {
        assert!(Ellipse::new(0.0, 0.0).is_none());
    }

    #[test]
    fn area() {
        const A: f64 = 25.8;
        const B: f64 = 39.1;
        let area = std::f64::consts::PI * A * B;

        assert_eq!(area, Ellipse::new(A, B).unwrap().area());
    }
}
