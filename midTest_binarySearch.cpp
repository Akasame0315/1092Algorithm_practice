#include <iostream>
#include <vector>
using namespace std;

int main(int argc, char *argv[])
{   
    vector<int> A;
	int i, n, v;
	for(cin >> i; i > 0; i--) { cin >> n; A.push_back(n); }
	cin >> v;
	
	//binarySearch
	
	int up = 0;
	int down = A.size() - 1;
	
	cout << "up: " << up << " down: " << down << endl;
	
	int mid = (up + down) / 2;

	//originalArray	
	for(int k = up; k <= down; k++){
		cout << A[k] << " "; 
	}
	cout << endl;
	
	
	do{
		
		cout << "mid: " << mid << endl; 
		
		//������>���ޭ� �}�C�ର�u����e�b�q 
		if(A[mid] > v){
			cout << "A[mid] > v" << endl;
			down = mid - 1;
		}
		//������<���ޭ� �}�C�ର�u�����b�q
		else if(A[mid] < v){
			cout << "A[mid] < v" << endl;
			up = mid + 1;
		}
		
		cout << "up: " << up << " down: " << down << endl;
		
		//�ƴ�᪺�}�C 
		for(int k = up; k <= down; k++){
			cout << A[k] << " "; 
		}
		cout << endl;
	
		mid = (up + down) / 2;
	}while(A[mid] != v);
	
	cout << A[mid];
}
