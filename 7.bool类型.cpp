// bool ���� true  false
//

# include<iostream>
using namespace std;

int main(){
	
	// ����bool����
	
	bool flag1 = true;
	bool flag2 = false;
	string str = "helllolo world"; // �����str Ϊʲôռ8���ֽ��أ� 
	int a = 0;
	
	cout << !a << endl; 
	
	
	cout << flag1 << endl << flag2 << endl;
	
	
	// bool����ռ�õ��ڴ��С 
	cout << sizeof(bool) << endl;   // ����1  ռ1���ֽ� 
	cout << sizeof(str) << endl;    //  ����8  ռ8���ֽ� 
	cout << sizeof(string) << endl;  // ����8  ռ8���ֽ� 
	
	
	
	
	
	system("pause");
	return 0;
} 
