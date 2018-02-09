#include <iostream>
#include <cstdlib>
#include "Stack.h" //<>는 지정 디렉토리에서만 찾겠다는 뜻, " "사용자
using namespace std;
void main()
{
	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
	Stack st = { 0 };

	Stack ost = { 0 };

	InitStack(st);
	Push(st, 10);
	Push(st, 20);
	InitStack(ost);
	Push(ost, 30);

	cout << Pop(st) << endl;
	cout << Pop(st) << endl;
	cout << Pop(ost) << endl;

	UninitStack(st);
	UninitStack(ost);
	system("pause");
}
