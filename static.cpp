#include<iostream>
using namespace std;

void Local(void);
void StaticVar(void);

static int var1 = 10; //내부 연결을 가지는 정적변수 (유효범위 안에서만 사용 가능)
extern int var2 = 5; //외부 연결을 가지는 정적변수 (다른 파일에서 사용할 경우 해당 파일에도 선언되어있어야함)

int main(void){

	for (int i = 0; i < 3; i++){
		Local();
		StaticVar();
	}
	return 0;
}

void Local(void){
	int count = 1;
	cout << "Local() 함수가 " << count << " 번째 호출되었습니다." << endl;
	count++;
}

void StaticVar(void){
	static int static_count = 1; // 연결을 가지지 않는 정적변수
	cout << "StaticVar() 함수가 " << static_count << " 번째 호출되었습니다." << endl;
	static_count++;
}