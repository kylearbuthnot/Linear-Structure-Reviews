// leetcodepascal.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <iterator>

using namespace std;


class Solution {
public:
    static vector<vector<int>> generate(int numRows) {
        vector<vector<int>> result;
        
        for (int i = 0; i < numRows; i++)
        {
            vector<int> row;
            result.push_back(row);
        }
        //top 3 nums are always 1 so set those.
        result[0].push_back(1);
        result[1].push_back(1);
        result[1].push_back(1);

        //if we have more than 2 rows we need to do some calculations.
        if (numRows > 2) {
            for (int i = 2; i < numRows; i++) { //start on the 2nd row.
                for (int j = 0; j <= i; j++) { //inner loop created to traverse through our current vector.
                    if (j == 0 || j == i) { //if the index is in either the first or final position push back a 1.
                        result[i].push_back(1);
                    }
                    else {
                        result[i].push_back(result[i - 1][j - 1] + result[i-1][j]); //j-1 used rather than j+1 so we don't get an out of range error.
                    }
                }
            }
        }

        return result;
    }
};


int main()
{
    vector<vector<int>> test = Solution::generate(8);
    cout << "Triangle is:" << endl;
    for (int i = 0; i < 8; i++) {
        for (int j = 0; j <= i; j++) {
            cout << test[i][j] << " ";
        }
        cout << endl;
    }

}

