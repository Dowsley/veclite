#include <iostream>
#include "veclite.h"

int main() {
    veclite::Vec3 v1(1.0, 2.0, 3.0);
    veclite::Vec3 v2 = veclite::Vec3::random();

    std::cout << "Vector 1: " << v1 << std::endl;
    std::cout << "Vector 2 (random): " << v2 << std::endl;

    veclite::Vec3 v3 = v1 + v2;
    std::cout << "Vector 3 (v1 + v2): " << v3 << std::endl;

    double dotProduct = v1.dot(v2);
    std::cout << "Dot product of v1 and v2: " << dotProduct << std::endl;

    veclite::Vec3 crossProduct = v1.cross(v2);
    std::cout << "Cross product of v1 and v2: " << crossProduct << std::endl;

    veclite::Vec2 v4(1.0, 2.0);
    veclite::Vec2 v5 = veclite::Vec2::random();

    std::cout << "Vector 4: " << v4 << std::endl;
    std::cout << "Vector 5 (random): " << v5 << std::endl;

    veclite::Vec2 v6 = v4 + v5;
    std::cout << "Vector 6 (v4 + v5): " << v6 << std::endl;

    double dotProduct2 = v4.dot(v5);
    std::cout << "Dot product of v4 and v5: " << dotProduct2 << std::endl;

    return 0;
}
