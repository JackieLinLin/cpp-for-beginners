// �������� cin >> 
// ���ڴӼ��̻�ȡ����

// �����  ���ڴ�����ִ�е�����

// ��������������ڴ�����������
// ����ṹ�� ˳��ṹ��ѡ��ṹ��ѭ���ṹ

// �߿�Ϊ��������600�֣���һ��������500-600��������500���£��Ǳ��ơ�

# include<iostream>
using namespace std;


int main(){
	
	// int score; ��������û�д��󡣵����ڶ������ʱ�����Ǽǵø�����һ����ʼֵ�ɡ�
	int score = 0; 
	cout << "�����������ܷ���: ";
	cin >> score;
	
	/*
	// ��ʼif ѡ��
	if (score >= 600){
		cout << "��ϲ�㣬����һ��ԺУ����" << endl;
	}
	else if (score < 600 && score >= 500){
		cout << "��ϲ�㣬���϶���ԺУ����" << endl;
	}
	else{
		cout << "����δ�ﵽ�����ߣ���" << endl;
	}
	*/
	/* 
	
	// ��if Ƕ������
	if (score >= 500){
		if (score >= 500 && score < 600){
			cout << "��ϲ�㣬���Զ���ԺУ����" << endl;
		}else{
			cout << "��ϲ�㣬����һ��ԺУ����" << endl;
		}
	}else{
		cout << "����δ�ﵽ�����ߣ���" << endl;
	}
	*/
	
	
	//��û�����ֱ�ʾ��������a= score>=600; y= score < 500; z=score[500,600)
	// ��switch ���� 
	// switch �����ã�������Ҳ̫�����ˡ� 
	
	
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
			case 0 : cout << "��ϲ�㣬����һ��ԺУ" << endl;
				     break;
			case 1 : cout << "��ϲ�㣬���϶���ԺУ" << endl;
					break;
			case 2 : cout << "δ�ﵽ�����ߣ�" << endl;
			        break;
		//	default : cout << "���������룡\n"; 
		}
//	}
	
	


	
	system("pause");
	return 0;
} 


























 
