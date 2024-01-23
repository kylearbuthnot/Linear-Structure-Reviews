#include <iostream>
#include <deque>
#include <iterator>

using namespace std;

//Deque is another type of container, similar to vector.
//The difference is that deque is a double-ended queue.
//This means that we can insert and remove elements from both ends of the deque.


int main(int argc, char* argv[]){
    
    // deque<int> d1; //empty deque
    // deque<int> d2(10); //deque with 10 elements
    // deque<int> d3(10, 5); //deque with 10 elements, all initialized to 5
    // d3.at(4) = 10;
    // for(int i = 0; i < d3.size(); i++){
    //     cout << d3.at(i) << " ";
    // }
    
    deque<int> d(10,1); // deque with 10 int elements, all initialized to 1.
    d[9] = 2;

    cout << d.front() << " " << d.back() << endl;
    d.push_front(5);
    d.pop_front();
    d.push_back(3);
    d.pop_back();

    cout << d.size() << endl;

    ostream_iterator<int> out(cout, " ");
    cout << "Printing deque to console: ";
    copy(d.begin(), d.end(), out); // Print the deque from the front to the back.
    cout << "\nPrinting deque backwards to console: ";
    copy(d.rbegin(), d.rend(), out); //Print the deque from back to front.

    return 0;
}