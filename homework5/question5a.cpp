#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



/* The function should construct the distance matrix.*/
void calculateDistanceMatrix(double distance[][3], double clue[][2], double region[][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS);

void findClueRegion(double distance[][3], int clue_regions[], const int DISTANCE_ROWS, const int DISTANCE_COLS);



int main()
{
//These variabes are for testing.
   const int CLUE_ROWS = 5;
const int CLUE_COLS = 2;
const int REG_ROWS = 3;
const int REG_COLS = 2;
double clue[CLUE_ROWS][CLUE_COLS] = {{2, 10}, {2, 5}, {8, 4}, {5, 8}, {1, 2}};
double region[REG_ROWS][REG_COLS] = {{2, 10}, {5, 8}, {1, 2}};
    //End varilables for testing.

    double distance[CLUE_ROWS][REG_ROWS];

    calculateDistanceMatrix(distance, clue, region, CLUE_ROWS, CLUE_COLS, REG_ROWS, REG_COLS);  

    //cout << "Printing distance between {2, 10} and {1,2}. Should be 8.06.\n" << distance[0][2] << endl; // Showing that the matrix values are correct.

    const int DISTANCE_ROWS = 5;
    const int DISTANCE_COLS = 3;
    //double distance[DISTANCE_ROWS][DISTANCE_COLS];
    int clue_regions[DISTANCE_ROWS];
    


    findClueRegion(distance, clue_regions, DISTANCE_ROWS, DISTANCE_COLS);
}

void calculateDistanceMatrix(double distance[][3], double clue[][2], double region[][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS){
    //d(c1, r1) = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    for(int row =0; row < CLUE_ROWS; row++){
        for(int column = 0; column < REG_ROWS; column++){
             distance[row][column] = sqrt(pow((region[column][0] - clue[row][0]), 2) + pow((region[column][1] - clue[row][1]), 2));
             //This prints the distance matrix for testing.
             cout << fixed << setprecision(2)<< distance[row][column] << "    ";
        }
        cout << endl;
    }
}


//TODO
void findClueRegion(double distance[][3], int clue_regions[], const int DISTANCE_ROWS, const int DISTANCE_COLS){
    double minimum = distance[0][0]; 
    int smallest_distance_region = 1;
    for(int clue = 0; clue < DISTANCE_ROWS; clue++){
        for(int region =0; region < DISTANCE_COLS; region++){
            if(distance[clue][region] <= minimum){
                minimum = distance[clue][region];
                smallest_distance_region = region + 1;
            }
        }
        clue_regions[clue] = smallest_distance_region;
        //Prints out to test.
        cout << fixed << setprecision(2)<< minimum << " Region " << smallest_distance_region << endl;
        //cout << fixed << setprecision(2)<< distance[clue][0] << endl;
        minimum = 10000;
    }
}