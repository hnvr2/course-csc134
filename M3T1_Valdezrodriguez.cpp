
#include <iostream>
using namespace std;

int main()
{

    // Rectangle 1 variables
    double length1, width1, area1;

    // Rectangle 2 variables
    double length2, width2, area2;

    // Input for Rectangle 1
    cout << "Enter the length of Rectangle 1: ";
    cin >> length1;

    cout << "Enter the width of Rectangle 1: ";
    cin >> width1;

    // Calculate area of Rectangle 1
    area1 = length1 * width1;

    // Input for Rectangle 2
    cout << "Enter the length of Rectangle 2: ";
    cin >> length2;

    cout << "Enter the width of Rectangle 2: ";
    cin >> width2;

    // Calculate area of Rectangle 2
    area2 = length2 * width2;

    // Display the results
    cout << "\nRectangle 1 area: " << area1 << endl;
    cout << "Rectangle 2 area: " << area2 << endl;

    return 0;
}
