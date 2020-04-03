/************************************************
** Author: Andrea Hayes
** Date:
** Purpose:
** Input:
** Processing:
** Output:
*************************************************/
#include <iostream>
#include <iomanip>
#include <fstream>
using namespace std;
int main() {

    ifstream inputFile;
    double num=0, avg, highVal=0, lowVal=0, sum=0;
    int count = 0, upperLimit=20, nextVal=0;

    inputFile.open("C:/Users/Andrea Hayes/source/repos/Week6PracticeTestQuestion5/numbers-1.dat"); // Open file

    if (!inputFile) // If file does not open
    {
        cout << "Could not open file.";
        return 1;
    }

    
    inputFile >> num;
    sum += num;
    count++;
    highVal = lowVal = num;

    while (count < upperLimit)
    {
       inputFile >> num;
       sum += num;
        if (num > highVal)
        {
            highVal = num;
        }
        if (num < lowVal)
        {
            lowVal = num;
        }
        count++;
    }
    avg = sum / count;
    cout << "Average = " << avg << endl;
    cout << "Highest Value = " << highVal << endl;
    cout << "Lowest Value = " << lowVal << endl;

    inputFile.close();

    return 0;
}

