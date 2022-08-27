use std::fmt::{Display, Formatter};
use crate::shapes::Shape;

pub struct Square {
    side: f64,
}

impl Square {
    pub fn new(side: f64) -> Option<Self> {
        if side > 0.0 {
            Some(Self { side })
        } else {
            None
        }
    }
}

impl Display for Square {
    fn fmt(&self, f: &mut Formatter<'_>) -> std::fmt::Result {
        write!(f, "square({})", self.side)
    }
}

impl Shape for Square {
    fn area(&self) -> f64 {
        self.side * self.side
    }
}

#[cfg(test)]
mod tests {
    use super::*;

    #[test]
    fn some() {
        assert!(Square::new(4.0).is_some());
    }

    #[test]
    fn none() {
        assert!(Square::new(0.0).is_none());
    }

    #[test]
    fn radius() {
        const RADIUS: f64 = 25.8;
        let area = RADIUS * RADIUS;

        assert_eq!(area, Square::new(RADIUS).unwrap().area());
    }
}