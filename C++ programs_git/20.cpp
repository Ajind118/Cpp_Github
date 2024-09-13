// write a program to calculate the volume of a cuboid using default arguements.

#include <iostream>
using namespace std;

float volumeOfCuboid(float l, float b, float h = 1) {
    return l * b * h;
}    

int main() {
    float length, breadth, height;
    cout << "Enter length, breadth and height of cuboid: ";
    cin >> length >> breadth >> height;
    cout << "Volume of cuboid: " << volumeOfCuboid(length, breadth, height);
    return 0;
}

// Output:
// Enter length, breadth and height of cuboid: 2 3 4
// Volume of cuboid: 24

// Explanation:
// This program calculates the volume of a cuboid using a function volumeOfCuboid. The function takes three arguments l, b, and h, which represent the length, breadth, and height of the cuboid, respectively. The height argument has a default value of 1, so if the user does not provide a height, it will be assumed to be 1.