// 转义字符
// \n  \\  \t

// 字符串型  双引号里。 c++中定义格式  string 变量名=“字符串 ” 

# include<iostream>
# include<string>
using namespace std; 


int main(){
	
	// c风格字符串
	char chuan[] = "hello world";
	
	// c++风格字符串
	// 包含一个头文件 #include<string> 
	string chuanchuan = "hello world!!!!"; 
	
	cout << chuan << endl;  // 这里是chuan 是写数组名。而不是chuan[] 
	cout << chuanchuan << endl;
	
	
	
	
//	cout << "hello world\nhello world\n";	
	
	
	
	system("pause");
	return 0;
} 
