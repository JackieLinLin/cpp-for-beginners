// ������ֻС������أ��ж��ĸ�С������

# include<iostream>
# include<math.h>  // ���������� fmax(a,b) ����������ͷ�ļ�Ҫ��#include<math.h> 
using namespace std;


int main(){
	
	// ����һ���ṹ��С����Ա��С������֣�С������ء� 
	
	struct pig{
		string name;
		int weight;
	};
	
	// ����struct pig �ı���
	struct pig pig1, pig2, pig3;
	int maxWei;
	cout << "��������ֻС������֣�" << endl;
	
	//cin >> "��һֻС�������ǣ� " >> pig1.name >> endl; ��� �﷨����д���ˡ�cin������Ǹ����������ģ�����ֵ֮�󣬿�����cout�������һֻС�������ǣ�...
	// cin >> pig1.name >> endl;  ��� �﷨ Ҳ�Ǵ�ģ� cin >> ��������  ����Ҫ�������������� ���з��ġ�
	//cin >> pig1.name;
	//cin >> pig2.name; 
	//cin >> pig3.name;
	// ����������� �����û��Ӽ����������ݣ��������һ�д��룬����ֿ�
	cin >> pig1.name >> pig2.name >> pig3.name; 
	
	cout << "��������ֻС������أ� " << endl;
	cin >> pig1.weight >> pig2.weight >> pig3.weight;
	
	// ������:��fmax()
	maxWei = fmax(pig1.weight, fmax(pig2.weight, pig3.weight));
	 
	cout << "��������ֵ��: " << maxWei << endl;
//	cout << "���������ǣ�"
	
	
	 
	
	// �������û�����⣬����Ĵ���о����ڸ��ӣ����¡�
	// ����Ĵ��� ����ȥ���Ǻܺÿ���ͷ��ĸо������������ǶԵġ� 
	
	
	/*
	����һ��ifѡ�� 
	
	if (pig1.weight > pig2.weight){
		
		if (pig1.weight < pig3.weight){
			cout << "���ص�С���ǣ�" << pig3.name << endl << "����������: " << pig3.weight << endl; 
		}else{
			cout << "���ص�С���ǣ�" << pig1.name << endl << "����������: " << pig1.weight << endl; 
		}	
	}
	else{
		if (pig2.weight > pig3.weight){
			cout << "���ص�С����: " << pig2.name << endl << "����������: " << pig2.weight << endl;
		}else{
			cout << "���ص�С���ǣ�" << pig3.name << endl << "����������: " << pig3.weight << endl;
		}
	}
	*/
	
	system("pause");
	return 0;
}


















