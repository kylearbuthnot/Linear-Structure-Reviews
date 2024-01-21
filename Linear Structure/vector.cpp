#include <iostream>
#include <vector>

using namespace std;

/*Note: In c++, STL(Standard Template Library) provides general-purpose
components for common programming tasks.

The library is organized into three main abstractions.
1) Containers
2) Iterators
3) Algorithms

Vector is an example of a container.

Examples in main method below.
*/


int main(int argc, char* argv[]){

    vector<int> v1; //empty vector
    vector<vector<int>> v2; //empty vector of vectors, also known as a 2d matrix

    vector<int> v3(5); //vector of size 5, holds ints.
    vector<int> v4(10, 1); //vector of size 10, holds ints, all initialized to 1.
    vector<int> v5(v4); //vector v5 is a copy of v4.
    
    //accessing
    v4[1] = 2; //accessing the second element of v4 and setting it to 2.
    v4.at(1) = 2; //same as above, but using the at method.
    v4.front() = v4.back(); //accessing the first element of v and setting it to the last element of v.

    //using iterator, never seen this before
    vector<int>::iterator forwardIterator; // declare the iterator variable
    //code below prints all of the elements in the vector using an iterator.
    //to utilize the iterator, we need to include the <vector> library and declare the iterator variable.
    for(forwardIterator = v4.begin(); forwardIterator != v4.end(); forwardIterator++){
        cout << *forwardIterator << " ";
    }

    return 0;
}