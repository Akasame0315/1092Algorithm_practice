#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n, v;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	cin >> v;
	
	//linerSearch
	for(int j = 0; j < A.size(); j++){
	    if(A[j] == v)
	    	cout << j;
	}
}
