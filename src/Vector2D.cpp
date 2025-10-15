#include "Vector2D.h"

Vector2D::Vector2D(double x, double y) : x(x), y(y) {}

// Function to display the vector
void Vector2D::display() const
{
    std::cout << "(" << x << ", " << y << ")";
}

// Operator overloading: +
Vector2D Vector2D::operator+(const Vector2D &other) const
{
    return Vector2D(x + other.x, y + other.y);
}

// Friend function: dot product
double dotProduct(const Vector2D &v1, const Vector2D &v2)
{
    return v1.x * v2.x + v1.y * v2.y;
}

// Getters
double Vector2D::getX() const { return x; }
double Vector2D::getY() const { return y; }