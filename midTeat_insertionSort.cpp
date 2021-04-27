#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	
	//insertionSort
	
	//originalArray
	cout << "originalArray: ";
	for(int m = 0; m < A.size(); m++){
		cout << A[m] << " ";
	}
	cout << endl;
	
	for(int k = 1; k < A.size(); k++){
		int key = A[k];	//現在要比較的值 
		int j = k-1;	//比較值前一項 
		while(key < A[j] && j >= 0){
			A[j+1] = A[j];	//比較大的值放到目前最大項 
			j--;			//往後繼續比較 
		}
		A[j+1] = key;		//前一項設為比較值 
		
		//印出目前排序的陣列 
		for(int m = 0; m < A.size(); m++){
			cout << A[m] << " ";
		}
		cout << endl;
		
	}
	
	//sortArray
	cout << "sortArray: "; 
	for(int m = 0; m < A.size(); m++){
		cout << A[m] << " ";
	}
	cout << endl;
}
