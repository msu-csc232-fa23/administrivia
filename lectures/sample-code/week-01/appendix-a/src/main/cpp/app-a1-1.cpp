#include <iostream>

int main()
{
    // Computes the volume of a sphere given radius
    const double PI = 3.14159;
    double radius;

    std::cout << "Enter the radius of the sphere: ";
    std::cin >> radius;

    double volume = 4 * PI * radius * radius * radius / 3;
    std::cout << "The volume of a sphere of radius "
              << radius << " inches is " << volume
              << " cubic inches.\n";
    return 0;
}