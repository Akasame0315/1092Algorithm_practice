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
		int key = A[k];	//�{�b�n������� 
		int j = k-1;	//����ȫe�@�� 
		while(key < A[j] && j >= 0){
			A[j+1] = A[j];	//����j���ȩ��ثe�̤j�� 
			j--;			//�����~���� 
		}
		A[j+1] = key;		//�e�@���]������� 
		
		//�L�X�ثe�ƧǪ��}�C 
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
