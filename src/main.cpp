#include <iostream>
#include "Vector2D.h"

int main()
{
    Vector2D a(3, 4);
    Vector2D b(1, 2);

    std::cout << "Vector A: ";
    a.display();
    std::cout << std::endl;
    std::cout << "Vector B: ";
    b.display();
    std::cout << std::endl;

    std::cout << "Magnitude of A: " << a.magnitude() << std::endl;
    std::cout << "Dot product (A·B): " << dotProduct(a, b) << std::endl;

    Vector2D c = a + b;
    std::cout << "A + B = ";
    c.display();
    std::cout << std::endl;

    // --- Lambda to check magnitude threshold ---
    auto exceedsThreshold = [](const Vector2D &v, double threshold)
    {
        return v.magnitude() > threshold;
    };

    double threshold = 5.0;
    std::cout << "Does A exceed the threshold (" << threshold << ")? "
              << (exceedsThreshold(a, threshold) ? "Yes" : "No") << std::endl;

    return 0;
}
