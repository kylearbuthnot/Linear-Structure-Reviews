// pascaltriangle queue.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <queue>


using namespace std;

int main()
{
 //   int numRows = 4;
 //   vector<queue<int>> result;

 //   //generate the rows.
 //   for (int i = 0; i < numRows; i++)
 //   {
	//	queue<int> row;
	//	result.push_back(row);
	//}
 //   if (numRows <= 1) { //if we have one row only add 1 row.
 //       result[0].push(1);
 //   }
 //   else if (numRows <= 2) { //if we have 2 rows add 2 elements.
 //       result[0].push(1);
 //       result[1].push(1);
 //       result[1].push(1);
 //   }
 //   else { //if we have more than 2 rows, create the first 2 rows then perform calculations for the remaining rows.
 //       result[0].push(1);
 //       result[1].push(1);
 //       result[1].push(1);
 //       for (int i = 2; i < numRows; i++) {//start on the 3rd row (queue)
 //           result[i].push(1); //first element is always 1.
 //           for (int j = 0; j <= result[i - 1].size(); j++) {
 //               if (j == 0 || j == result[i - 1].size()) { //if we are on the first or last element add a 1.
 //                   result[i].push(1);
 //               }
 //               else { //if we are not at the first or last, add the sum of the previous queues elements, j - 1, and j.
 //                   result[i].push();
 //               }
 //           }
 //       }
 //   }
    
	cout << "please input an integer (> 2)" << endl;
	int num;
	cin >> num;

	if (num == 1) {
		cout << 1 << endl;
	}
	if (num == 2) {
		cout << "1 1" << endl;
	}

	queue<int> ori_q;
	queue<int> nxt_q;

	int initial_value = 1;
	ori_q.push(initial_value);
	ori_q.push(initial_value);

	for(int i = 0; i < num - 2; i++)
	nxt_q.push(initial_value);
	while (!ori_q.empty()) {
		int k = ori_q.front();
		ori_q.pop();

		if (!ori_q.empty()) {
			int tmp = k + ori_q.front();
			nxt_q.push(tmp);
		}
		else {
			nxt_q.push(initial_value);
		}
		ori_q = nxt_q;
		nxt_q = queue<int>(); //let nxt q become an empty queue.
	}
	
	ori_q = nxt_q;
	nxt_q = queue<int>(); //let nxt q become an empty queue.

	while (!nxt_q.empty()) {
		cout << nxt_q.front() << " ";
		nxt_q.pop();
	}

}

