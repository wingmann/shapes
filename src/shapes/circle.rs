use crate::shapes::Shape;
use std::fmt::{Display, Formatter};

pub struct Circle {
    radius: f64,
}

impl Circle {
    fn new(radius: f64) -> Option<Self> {
        if radius > 0.0 {
            Some(Self { radius })
        } else {
            None
        }
    }
}

impl Display for Circle {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        write!(f, "circle({})", self.radius)
    }
}

impl Shape for Circle {
    fn area(&self) -> f64 {
        std::f64::consts::PI * self.radius * self.radius
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn some() {
        assert!(Circle::new(4.0).is_some());
    }

    #[test]
    fn none() {
        assert!(Circle::new(0.0).is_none());
    }

    #[test]
    fn radius() {
        const RADIUS: f64 = 25.8;
        let area = std::f64::consts::PI * RADIUS * RADIUS;

        assert_eq!(area, Circle::new(RADIUS).unwrap().area());
    }
}
