#include <iostream>
using namespace std;

double calculatePerimeter(double width_1, double height_1);

void displayPerimeter(int perimeter_1);

void comparePerimeters(double width_1, double height_1, double width_2, double height_2);

int main()
{
    int width_1 = 5, height_1 = 7, width_2 = 3, height_2 = 11;

    //Calculate and display the perimeter of the first rectangle
    int perimeter_1 = calculatePerimeter(width_1, height_1);
    displayPerimeter(perimeter_1);

    //Calculate and display the perimeter of the second rectangle
    int perimeter_2 = calculatePerimeter(width_2, height_2);
    displayPerimeter(perimeter_2);

    //Decide which rectangle has larger perimeter
    comparePerimeters(width_1, height_1, width_2, height_2);

    return 0;
}

//This function calculates the perimeter of a rectangle
double calculatePerimeter(double width, double height)
{
    int perimeter = 2*width + 2*height;
    return perimeter;
}

//This function displays the perimeter of a rectangle
void displayPerimeter(int perimeter)
{
    cout << "The perimeter of the rectangle is: " << perimeter << endl;
    return; 
}

//This function compares the perimeter of two rectangles
void comparePerimeters(double width_1, double height_1, double width_2, double height_2)
{
    int perimeter_1 = calculatePerimeter(width_1, height_1);
    int perimeter_2 = calculatePerimeter(width_2, height_2);
    
    if (perimeter_1 > perimeter_2)
    {
        cout << "The first rectangle has greater perimeter" << endl;
    }
    else if (perimeter_2 > perimeter_1)
    {
        cout << "The second rectangle has greater perimeter" << endl;
    }
    else
    {
        cout << "The rectangles have equal perimeter" << endl;
    }

    return;
}