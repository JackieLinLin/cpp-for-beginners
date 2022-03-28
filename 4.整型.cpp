// 关键字: 是C++中预先保留的单词（标识符）
// 在起变量名和常量名时候，不得使用C++关键字。
// 标识符命名规则： 不可以是关键字；由字母，数字或下划线组成；不能以数字打头；区分大小写
// 命名时，争取做到有意义的名字，便于理解。见名知意。

// 数据类型： 不给变量定义数据类型的话，系统就无法给变量分配内存。
// 不同数据类型 占用的内存大小不同。
// 整型
// 短整型 整型 长整型  长长整型  占用的内存大小不同， 数值范围也不同。 
// sizeof关键字 （sizeof(数据类型/变量） 

# include<iostream>
using namespace std;

int main(){
	
	int a = 1;
	short int b = 12;
	long long int c = 20; 
	
	cout << sizeof(a) << endl;   // 4
	cout << sizeof(b) << endl;   // 2 
	cout << sizeof(c) << endl;   // 8
	cout << sizeof(long int) << endl;  // 4
	
	
	
	
	
	
	system("pause");
	return 0;
} 

 
