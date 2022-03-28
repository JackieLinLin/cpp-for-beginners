// 浮点型 float  double 单精度  双精度
// float 4字节 （7位有效数字） double 8字节（15——16位有效数字）

// 科学计数法 3e2(3*10的三次方） 2e-2 (2*10的-2次方） 

# include<iostream>
using namespace std; 

 
int main(){
	
	float a = 129.121231;  //结果是129.121 
	float b = 129.121f;   // 结果是129.121 
	double c = 129.1213;  // 结果是129.121  目前c++float和double 打印出的 默认情况下都是 6个有效数字。 
	                      // 若打印超6个数字，比较复杂，有另外方法实现。 
	
	cout << a << endl << b << endl << c << endl;
	
	
	system("pause");
	return 0;
	
}
