// LC26RemoveDuplicatesFromsSortArray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;


int removeDuplicatesMap(vector<int>& nums) {
    //helpful in looking up what numbers we have used and not used.
    std::unordered_map<int, int> usedNums; //Key: number, Value: count
    for (int i = 0; i < nums.size(); i++) {
        if (usedNums.find(nums[i]) == usedNums.end()) { //if the number is not in the map, add it.
			usedNums.insert({nums[i], 1 });
		}
        else { //otherwise, if it is in the map, remove it from the vector.
			nums.erase(nums.begin() + i);
            i--;
		}
    }
    return usedNums.size();
};


int removeDuplicatesPtr(vector<int>& nums) {
    int* ptr1 = &nums[0]; //set a pointer to the first element in the vector.
    int* ptr2 = ptr1; //set another pointer to the same location.
    while (ptr2 != &nums[nums.size() - 1]) {
        if (*ptr1 == *ptr2) { //if the two values are the same, the value at ptr2 is a duplicate and needs to be removed.
            nums.erase(nums.begin() + (ptr2 - &nums[0])); //erase the duplicate value.
            ptr2 = ptr1 + 1; //reset ptr2 to the next value.
        }
        else { //if the two values are not equal, move both pointers forward.
            ptr1++; //increase both pointers
            ptr2++;
        }
    }
    return nums.size();
}


int main()
{
    vector<int> test1 = { 1, 1, 2 }; //expected output: 2, {1, 2}
    cout << "Test 1: " << removeDuplicatesPtr(test1) << endl;
    vector<int> test2 = { 0,0,1,1,1,2,2,3,3,4 }; //expected output: 5, {0, 1, 2, 3, 4}
    cout << "Test 2: " << removeDuplicatesPtr(test2) << endl;
    vector<int> test4 = { 1, 1 }; //expected output: 1, {1}
    cout << "Test 4: " << removeDuplicatesPtr(test4) << endl;

}


