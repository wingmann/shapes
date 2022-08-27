use std::fmt::{Display, Formatter};
use crate::shapes::Shape;

pub struct Rectangle {
    width: f64,
    length: f64,
}

impl Rectangle {
    pub fn new(width: f64, length: f64) -> Option<Self> {
        if width > 0.0 && length > 0.0 {
            Some(Self { width, length })
        } else {
            None
        }
    }
}

impl Display for Rectangle {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        write!(f, "rectangle(width: {}, length: {})", self.width, self.length)
    }
}

impl Shape for Rectangle {
    fn area(&self) -> f64 {
        self.width * self.length
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn some() {
        assert!(Rectangle::new(4.0, 9.5).is_some());
    }

    #[test]
    fn none() {
        assert!(Rectangle::new(0.0, 0.0).is_none());
    }

    #[test]
    fn radius() {
        const WIDTH: f64 = 25.8;
        const LENGTH: f64 = 39.1;
        let area = WIDTH * LENGTH;

        assert_eq!(area, Rectangle::new(WIDTH, LENGTH).unwrap().area());
    }
}
