#include <iostream>
#include <cmath>
#include <iomanip>
#include <map>
using namespace std;



/* The function should construct the distance matrix.*/
void calculateDistanceMatrix(double distance[][3], double clue[][2], double region[][2], const int CLUE_ROWS, const int CLUE_COLS, const int REG_ROWS, const int REG_COLS);

void findClueRegion(double distance[][3], int clue_regions[], const int DISTANCE_ROWS, const int DISTANCE_COLS);

void findTreasure(int clue_regions[], double region[][2], const int CLUE_REGIONS_SIZE, const int REG_ROWS, const int REG_COLS);



int main()
{
//These variabes are for testing.
   const int CLUE_ROWS = 5;
const int CLUE_COLS = 2;
const int REG_ROWS = 3;
const int REG_COLS = 2;
double clue[CLUE_ROWS][CLUE_COLS] = {{2, 10}, {2, 5}, {8, 4}, {5, 8}, {1, 2}};
double region[REG_ROWS][REG_COLS] = {{0, 0}, {5, -1}, {-1, -2}};
    //End varilables for testing.

    double distance[CLUE_ROWS][REG_ROWS];

    calculateDistanceMatrix(distance, clue, region, CLUE_ROWS, CLUE_COLS, REG_ROWS, REG_COLS);  

    //cout << "Printing distance between {2, 10} and {1,2}. Should be 8.06.\n" << distance[0][2] << endl; // Showing that the matrix values are correct.

    const int DISTANCE_ROWS = 5;
    const int DISTANCE_COLS = 3;
    //double distance[DISTANCE_ROWS][DISTANCE_COLS];
    int clue_regions[DISTANCE_ROWS];
    


    findClueRegion(distance, clue_regions, DISTANCE_ROWS, DISTANCE_COLS);

    //const int CLUE_REGIONS_SIZE = sizeof(clue_regions) / sizeof(clue_regions[0]);

    //findTreasure(clue_regions, region, CLUE_REGIONS_SIZE, REG_ROWS, REG_COLS);
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

/*The function should find and store the region with the smallest distance in the clue_regions array.*/
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
        //cout << "Minimum distance: " << fixed << setprecision(2)<< minimum << " Region " << smallest_distance_region << endl;
        //cout << fixed << setprecision(2)<< distance[clue][0] << endl;
        minimum = 10000; /* reset minimum for next iteration. Having problem when using distance[0][clue]
         but should be first element and default minimum starting each pass. */
    }
    //cout << "Clue region: " << smallest_distance_region << endl;
}

/*Output**:
     Print the region number with least number of clues and its corresponding XY coordinates.*/
void findTreasure(int clue_regions[], double region[][2], const int CLUE_REGIONS_SIZE, const int REG_ROWS, const int REG_COLS){
    //cout << "Print the region number with least number of clues and its corresponding XY coordinates." << endl;
    cout << "CLUE_REGIONS_SIZE: " << CLUE_REGIONS_SIZE << endl;

    map<int, int> frequency;
    
    for (int clue_region_number = 0; clue_region_number < CLUE_REGIONS_SIZE; clue_region_number++){
        //cout << clue_regions[clue_region_number] << endl;
        frequency[clue_regions[clue_region_number]]++;
    }

    int min_frequency = INT_MAX;
    int least_frequent_element;

    for(auto it: frequency){ // A for loop iterating the items of frequency referenced by it.
        if(it.second < min_frequency){
            min_frequency = it.second;
            least_frequent_element = it.first;
        }
    }

    cout << "Region " << least_frequent_element << " had the least number of clues: " << min_frequency << endl;

    cout << "The treasure must be buried in the coordinates: " << region[least_frequent_element-1][0] << ", " << region[least_frequent_element-1][1] << endl;

}