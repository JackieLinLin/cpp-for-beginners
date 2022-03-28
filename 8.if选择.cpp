// 数据输入 cin >> 
// 用于从键盘获取数据

// 运算符  用于代码中执行的运算

// 算术运算符：用于处理四则运算
// 程序结构： 顺序结构，选择结构，循环结构

// 高考为例，考上600分，上一本。低于500-600，二本，500以下，非本科。

# include<iostream>
using namespace std;


int main(){
	
	// int score; 这个语句是没有错误。但是在定义变量时，还是记得给他赋一个初始值吧。
	int score = 0; 
	cout << "请输入您的总分数: ";
	cin >> score;
	
	/*
	// 开始if 选择
	if (score >= 600){
		cout << "恭喜你，考上一本院校！！" << endl;
	}
	else if (score < 600 && score >= 500){
		cout << "恭喜你，考上二本院校！！" << endl;
	}
	else{
		cout << "分数未达到本科线！！" << endl;
	}
	*/
	/* 
	
	// 用if 嵌套试试
	if (score >= 500){
		if (score >= 500 && score < 600){
			cout << "恭喜你，考试二本院校！！" << endl;
		}else{
			cout << "恭喜你，考试一本院校！！" << endl;
		}
	}else{
		cout << "分数未达到本科线！！" << endl;
	}
	*/
	
	
	//有没有这种表示方法，令a= score>=600; y= score < 500; z=score[500,600)
	// 用switch 试试 
	// switch 可以用，但是这也太罗嗦了。 
	
	
	int result;
	if (score >= 600){
		result = 0;
	}else if (score >= 500 && score < 600){
		result = 1;
	}else{
		result = 2;
	}
	
	//while(result != 3){
		
		switch (result){
			case 0 : cout << "恭喜你，考上一本院校" << endl;
				     break;
			case 1 : cout << "恭喜你，考上二本院校" << endl;
					break;
			case 2 : cout << "未达到本科线！" << endl;
			        break;
		//	default : cout << "请重新输入！\n"; 
		}
//	}
	
	


	
	system("pause");
	return 0;
} 


























 
