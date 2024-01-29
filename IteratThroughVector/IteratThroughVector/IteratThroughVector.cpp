// AdvDataAndAlgoStuff.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>

using namespace std;

int main()
{

    vector<int> myVector = { 4, 24, 7777, 4,2,1222, 4 };

    //out put max value using an iterator to traverse.
    //get first element to compare.
    int max = myVector[0];
    //declare iterator
    vector<int>::iterator myIterator;
    //for loop using iterator to traverse the vector
    for (myIterator = myVector.begin(); myIterator != myVector.end(); myIterator++) {
        if (*myIterator > max) //compare the current element to the max value, if it is greater, set it as the new max.
        {
            max = *myIterator;
        }
    }
    cout << "Max value is: " << max << endl;   //output the max value 


}
