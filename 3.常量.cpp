// c++定义常量的两种方式
// #define 宏常量， # define 常量名称（大写）  常量值
// const 修饰的变量 const 数据类型 变量名 变量值   // 修饰该变量为常量，不可修改

# include<iostream>
using namespace std; 
# define DAY 7

int main(){
	
	cout << "一周总共有: " << DAY << "天" << endl;
	
	const int month = 12;
	cout << "一年总共有：" << month << "月份" << endl; 
	
	system("pause");
	return 0; 
} 
 
