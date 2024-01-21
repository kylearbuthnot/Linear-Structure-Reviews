#include <iostream>

using namespace std;

int main(int argc, char* argv[]){


    //Array traversal
    int arrTraversal[] {1, 2, 3, 4, 5};
    int n = sizeof(arrTraversal) / sizeof(arrTraversal[0]);
    for(int i = 0; i < n; i++){
        cout << arrTraversal[i] << " ";
    }

    //finding max value of an array
    int arrMax[] {1, 2, 3, 4, 5};
    int nMax = sizeof(arrMax) / sizeof(arrMax[0]);
    int max = arrMax[0];

    for(int i = 0; i < nMax; i++){
        if (arrMax[i] > max){
            max = arrMax[i];
        }
    }
    cout << "Max is: " << max << endl;

    //updating one value of one element
    int arrUpdate[] {1, 2, 3, 4, 5};
    int nUpdate = sizeof(arrUpdate) / sizeof(arrUpdate[0]);
    cout << "Before updating: " << arrUpdate[2] << endl;
    arrUpdate[2] = 10;
    cout << "After updating: " << arrUpdate[2] << endl;

    //copying an array
    int arr1[] = {1, 2, 3};
    int numOfElementsInArr1 = sizeof(arr1) / sizeof(arr1[0]);
    int arr2[numOfElementsInArr1];

    for(int i = 0; i < numOfElementsInArr1; i++){
        arr2[i] = arr1[i];
    }



    return 0;
}