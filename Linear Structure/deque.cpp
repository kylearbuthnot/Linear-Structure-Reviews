#include <iostream>
#include <deque>

using namespace std;

//Deque is another type of container, similar to vector.
//The difference is that deque is a double-ended queue.
//This means that we can insert and remove elements from both ends of the deque.


int main(int argc, char* argv[]){
    
    deque<int> d1; //empty deque
    deque<int> d2(10); //deque with 10 elements
    deque<int> d3(10, 5); //deque with 10 elements, all initialized to 5
    d3.at(4) = 10;
    for(int i = 0; i < d3.size(); i++){
        cout << d3.at(i) << " ";
    }
    

    return 0;
}