#include<iostream>
using namespace std;

void Local(void);
void StaticVar(void);

static int var1 = 10; //���� ������ ������ �������� (��ȿ���� �ȿ����� ��� ����)
extern int var2 = 5; //�ܺ� ������ ������ �������� (�ٸ� ���Ͽ��� ����� ��� �ش� ���Ͽ��� ����Ǿ��־����)

int main(void){

	for (int i = 0; i < 3; i++){
		Local();
		StaticVar();
	}
	return 0;
}

void Local(void){
	int count = 1;
	cout << "Local() �Լ��� " << count << " ��° ȣ��Ǿ����ϴ�." << endl;
	count++;
}

void StaticVar(void){
	static int static_count = 1; // ������ ������ �ʴ� ��������
	cout << "StaticVar() �Լ��� " << static_count << " ��° ȣ��Ǿ����ϴ�." << endl;
	static_count++;
}