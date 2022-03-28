// 输入三只小猪的体重，判断哪个小猪最重

# include<iostream>
# include<math.h>  // 方法二用了 fmax(a,b) 函数，所以头文件要用#include<math.h> 
using namespace std;


int main(){
	
	// 创建一个结构体小猪，成员有小猪的名字，小猪的体重。 
	
	struct pig{
		string name;
		int weight;
	};
	
	// 定义struct pig 的变量
	struct pig pig1, pig2, pig3;
	int maxWei;
	cout << "请输入三只小猪的名字：" << endl;
	
	//cin >> "第一只小猪名字是： " >> pig1.name >> endl; 这句 语法都是写错了。cin后面就是给出变量名的，输入值之后，可以用cout来输出第一只小猪名字是：...
	// cin >> pig1.name >> endl;  这句 语法 也是错的， cin >> 变量名。  不需要你自作聪明加上 换行符的。
	//cin >> pig1.name;
	//cin >> pig2.name; 
	//cin >> pig3.name;
	// 以上三个语句 提醒用户从键盘输入数据，大可以用一行代码，无需分开
	cin >> pig1.name >> pig2.name >> pig3.name; 
	
	cout << "请输入三只小猪的体重： " << endl;
	cin >> pig1.weight >> pig2.weight >> pig3.weight;
	
	// 方法二:用fmax()
	maxWei = fmax(pig1.weight, fmax(pig2.weight, pig3.weight));
	 
	cout << "最大的体重值是: " << maxWei << endl;
//	cout << "它的名字是："
	
	
	 
	
	// 上面代码没有问题，下面的代码感觉过于复杂，罗嗦。
	// 下面的代码 看上去不是很好看。头大的感觉。尽管运行是对的。 
	
	
	/*
	方法一：if选择 
	
	if (pig1.weight > pig2.weight){
		
		if (pig1.weight < pig3.weight){
			cout << "最重的小猪是：" << pig3.name << endl << "它的体重是: " << pig3.weight << endl; 
		}else{
			cout << "最重的小猪是：" << pig1.name << endl << "它的体重是: " << pig1.weight << endl; 
		}	
	}
	else{
		if (pig2.weight > pig3.weight){
			cout << "最重的小猪是: " << pig2.name << endl << "它的体重是: " << pig2.weight << endl;
		}else{
			cout << "最重的小猪是：" << pig3.name << endl << "它的体重是: " << pig3.weight << endl;
		}
	}
	*/
	
	system("pause");
	return 0;
}


















