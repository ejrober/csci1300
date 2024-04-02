#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;



/* The function should construct the distance matrix.
  * **Parameters (in this order)**:
    * ```double``` distance[][3]: empty distance matrix of size CLUE_ROWS x REG_ROWS.
    * ```double``` clue[][2]: XY coordinate for clues of size CLUE_ROWS x CLUE_COLS.
    * ```double``` region[][2]: XY coordinate for regions of size REG_ROWS x REG_COLS.
    * ```const int``` CLUE_ROWS: the number of rows for clue[][].
    * ```const int``` CLUE_COLS: the number of columns for clue[][], will be 2 for this question.
    * ```const int``` REG_ROWS: the number of rows for region[][], will be 3 for this question.
    * ```const int``` REG_COLS: the number of columns for region[][], will be 2 for this question.*/
void calculateDistanceMatrix(double distance[][3], double clue[][2], double region[][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS);

void findClueRegion(double distance[][3], int clue_regions[], const int DISTANCE_ROWS, const int DISTANCE_COLS);



int main()
{

    const int CLUE_ROWS = 5;
const int CLUE_COLS = 2;
const int REG_ROWS = 3;
const int REG_COLS = 2;
double clue[CLUE_ROWS][CLUE_COLS] = {{2, 10}, {2, 5}, {8, 4}, {5, 8}, {1, 2}};
double region[REG_ROWS][REG_COLS] = {{0, 0}, {5, -1}, {-1, -2}};

    double distance[CLUE_ROWS][REG_ROWS];

    calculateDistanceMatrix(distance, clue, region, CLUE_ROWS, CLUE_COLS, REG_ROWS, REG_COLS);  

    //cout << "Printing distance matrix \n" << distance[0][2] << endl;
}

void calculateDistanceMatrix(double distance[][3], double clue[][2], double region[][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS){
    //d(c1, r1) = sqrt((x2 - x1)^2 + (y2 - y1)^2)
    for(int column =0; column < CLUE_ROWS; column++){
        for(int row = 0; row < REG_ROWS; row++){
             distance[row][column] = sqrt(pow((region[row][0] - clue[column][0]), 2) + pow((region[row][1] - clue[column][1]), 2));
             cout << fixed << setprecision(2)<< distance[row][column] << "    ";
        }
        cout << endl;
    }
    /*distance[0][0] = sqrt(pow((region[0][0] - clue[0][0]), 2) + pow((region[0][1] - clue[0][1]), 2));
    cout << "The distance between {1234, 56} and {1312, 78} is " << distance[0][0] << endl;*/
}


//TODO
void findClueRegion(double distance[][3], int clue_regions[], const int DISTANCE_ROWS, const int DISTANCE_COLS){
    double minimum = 10000000; 
    for(int i = 0; i < 3; i++){
        for(int j =0; j < DISTANCE_ROWS; j++){
            if(distance[i][j] < minimum){
                minimum = distance[i][j];
                clue_regions[i] = minimum;
            }
        }
    }
}