// ������ float  double ������  ˫����
// float 4�ֽ� ��7λ��Ч���֣� double 8�ֽڣ�15����16λ��Ч���֣�

// ��ѧ������ 3e2(3*10�����η��� 2e-2 (2*10��-2�η��� 

# include<iostream>
using namespace std; 

 
int main(){
	
	float a = 129.121231;  //�����129.121 
	float b = 129.121f;   // �����129.121 
	double c = 129.1213;  // �����129.121  Ŀǰc++float��double ��ӡ���� Ĭ������¶��� 6����Ч���֡� 
	                      // ����ӡ��6�����֣��Ƚϸ��ӣ������ⷽ��ʵ�֡� 
	
	cout << a << endl << b << endl << c << endl;
	
	
	system("pause");
	return 0;
	
}
