#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <iostream>
#include <cmath>

class Vector2D
{
private:
    double x, y;

public:
    Vector2D(double x = 0, double y = 0);

    double getX() const;
    double getY() const;

    inline double magnitude() const
    {
        return std::sqrt(x * x + y * y);
    }

    void display() const;

    friend double dotProduct(const Vector2D &v1, const Vector2D &v2);

    Vector2D operator+(const Vector2D &other) const;
};

#endif