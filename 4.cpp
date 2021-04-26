#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	
	//selectionSort
	
	
	for(int j = 0; j < A.size(); j++){
		int min = A[j];
		for(int k = j+1; k <= A.size(); k++){
			if(A[k] <= min)	min = A[j];
		}
		
		
	}
	cout << min;
	
	
	
	
}
