#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	
	/*
	//origin array
	for(int k = 1; k <= A.size(); k++)
		cout << k << " " ;
	
	cout << endl;
	
	for(int k = 0; k < A.size(); k++){
		cout << A[k] << " ";
	}
	cout << endl;*/
	
	//insertSort
	for(int j = 1; j < A.size(); j++){	//從第一個元素跟第零個元素開始比
		int key = A[j];	//A[1]開始往後比 
		int m = j - 1; //m = 0開始 
		while(key < A[m] && m >= 0){
			A[m + 1] = A[m];
			m--;
		} 
		A[m + 1] = key;
		
		//sort once
		
		for(int k = 0; k < A.size(); k++){
			cout << A[k] << " ";
		}
		cout << endl;
	}
	
	/*
	//sort array
	for(int k = 1; k <= A.size(); k++)
		cout << k << " " ;
	
	cout << endl;
	
	for(int k = 0; k < A.size(); k++){
		cout << A[k] << " ";
	}
	cout << endl;*/
}
