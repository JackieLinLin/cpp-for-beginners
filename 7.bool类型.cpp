// bool 类型 true  false
//

# include<iostream>
using namespace std;

int main(){
	
	// 创建bool类型
	
	bool flag1 = true;
	bool flag2 = false;
	string str = "helllolo world"; // 这里的str 为什么占8个字节呢？ 
	int a = 0;
	
	cout << !a << endl; 
	
	
	cout << flag1 << endl << flag2 << endl;
	
	
	// bool类型占用的内存大小 
	cout << sizeof(bool) << endl;   // 返回1  占1个字节 
	cout << sizeof(str) << endl;    //  返回8  占8个字节 
	cout << sizeof(string) << endl;  // 返回8  占8个字节 
	
	
	
	
	
	system("pause");
	return 0;
} 
