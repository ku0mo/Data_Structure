#include <iostream>
#include <cstdlib>
#include "Stack.h" //<>�� ���� ���丮������ ã�ڴٴ� ��, " "�����
using namespace std;
void main()
{
	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
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
