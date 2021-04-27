#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	
	//selectionSort
	int min = 0;
	
	for(int k = 0; k < A.size()-1; k++){
		min = k;
		for(int m = k+1; m < A.size(); m++){
			if(A[m] < A[min]){
				min = m;
			}
		}
		int temp = 0;
		temp = A[k];
		A[k] = A[min];
		A[min] = temp;
		
		for(int n = 0; n < A.size(); n++){
			cout << A[n] << " ";
		}
		cout << endl;
	}
	
}
