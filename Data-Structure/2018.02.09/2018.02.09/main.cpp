/*
�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����

2�� Ʈ���� log �ð��� ���� �� ����

key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)

�浹 : ���� ��巹���� ���� Ű�� ������ �� ����

�浹�� ȸ���ϴ� ���
1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����

2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���

�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��

��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����

����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����

�ؽ��� ���� �⺻���� ����
�ؽ��� ���� ���� ���� �� - �ؽ�

�ؽ� ������ �������� 30%,
70% �Ѿ�� ��û ������
*/
#include <iostream>
#include <cstdlib>
#include <list>
using namespace std;
struct Hash
{
	list<int>* table;
	int size;
};
int HashFunction(int size, int  key) // �������� Ư���� Ŭ���̾�Ʈ�� �˰� �ֱ⶧����, �ݹ����� ����� ��å�� �ݿ��ϵ��� �ϰ� ������
{
	return ((key >> 2) << 2) % size; // 0~9 ����� ���ؼ�
}
void AddHash(Hash& h, int key)
{
	int addr = HashFunction(h.size, key); // hash�� ��巹���� ��ȯ��
	h.table[addr].push_back(key);
}
void PrintHash(Hash& h)
{
	int tsize = h.size; // table ������
	for (int i = 0; i < tsize; ++i)
	{
		cout << "[" << i << "]: ";
		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
			cout << *iter << " ";
		cout << endl;
	}
}
void SearchHash(Hash& h, int key)
{
	int addr = HashFunction(h.size, key);
	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
		if (key == *iter)
		{
			cout << key << " : ã��" << endl;
			return;
		}
	cout << "key ����!" << endl;
}
void RemoveHash(Hash& h, int key)
{
	int addr = HashFunction(h.size, key);
	list<int>::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
	if (iter != h.table[addr].end())
		h.table[addr].erase(iter);
}
void InitHash(Hash& h, int tsize = 10)
{
	h.size = tsize;
	h.table = new list<int>[h.size];
}
void UninitHash(Hash& h, int tsize = 10)
{
	delete[] h.table;
}
void main()
{
	Hash h;

	InitHash(h);
	AddHash(h, 40);
	AddHash(h, 80);
	AddHash(h, 60);
	AddHash(h, 30);
	AddHash(h, 20);
	AddHash(h, 20);
	AddHash(h, 120);

	SearchHash(h, 80);
	RemoveHash(h, 80);
	PrintHash(h);

	UninitHash(h);

	system("pause");
}




///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)
//
//�浹 : ���� ��巹���� ���� Ű�� ������ �� ����
//
//�浹�� ȸ���ϴ� ���
//1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//
//�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//
//����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//�ؽ��� ���� �⺻���� ����
//�ؽ��� ���� ���� ���� �� - �ؽ�
//
//�ؽ� ������ �������� 30%,
//70% �Ѿ�� ��û ������
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int>* table;
//	int size;
//};
//int HashFunction(int size,  int  key) 
//{
//	return ((key >> 2) << 2) % size; // 0~9 ����� ���ؼ�
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(h.size, key); // hash�� ��巹���� ��ȯ��
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = h.size; // table ������
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int addr = HashFunction(h.size, key);
//	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : ã��" << endl;
//			return;
//		}
//	cout << "key ����!" << endl;
//}
//void RemoveHash(Hash& h, int key)
//{
//	int addr = HashFunction(h.size, key);
//	list<int>::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
//	if (iter != h.table[addr].end())
//		h.table[addr].erase(iter);
//}
//void InitHash(Hash& h, int tsize = 10)
//{
//	h.size = tsize;
//	h.table = new list<int>[h.size];
//}
//void UninitHash(Hash& h, int tsize = 10)
//{
//	delete[] h.table;
//}
//void main()
//{
//	Hash h;
//
//	InitHash(h);
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 68);
//	AddHash(h, 34);
//	AddHash(h, 21);
//	AddHash(h, 26);
//	AddHash(h, 120);
//	SearchHash(h, 89);
//	RemoveHash(h, 89);
//	PrintHash(h);
//
//	UninitHash(h);
//
//	system("pause");
//}




///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)
//
//�浹 : ���� ��巹���� ���� Ű�� ������ �� ����
//
//�浹�� ȸ���ϴ� ���
//1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//
//�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//
//����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//�ؽ��� ���� �⺻���� ����
//�ؽ��� ���� ���� ���� �� - �ؽ�
//
//�ؽ� ������ �������� 30%,
//70% �Ѿ�� ��û ������
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 ����� ���ؼ�
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash�� ��巹���� ��ȯ��
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table ������
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : ã��" << endl;
//			return;
//		}
//	cout << "key ����!" << endl;
//}
//void RemoveHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	list<int>::iterator iter = find(h.table[addr].begin(), h.table[addr].end(), key);
//	if (iter != h.table[addr].end())
//		h.table[addr].erase(iter);
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 68);
//	AddHash(h, 34);
//	AddHash(h, 21);
//	AddHash(h, 26);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	RemoveHash(h, 89);
//	PrintHash(h);
//
//	system("pause");
//}





///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)
//
//�浹 : ���� ��巹���� ���� Ű�� ������ �� ����
//
//�浹�� ȸ���ϴ� ���
//1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//
//�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//
//����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//�ؽ��� ���� �⺻���� ����
//�ؽ��� ���� ���� ���� �� - �ؽ�
//
//�ؽ� ������ �������� 30%,
//70% �Ѿ�� ��û ������
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 ����� ���ؼ�
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash�� ��巹���� ��ȯ��
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table ������
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter << " ";
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key)
//{
//	int addr = HashFunction(key);
//	for (list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : ã��" << endl;
//			return;
//		}
//	cout << "key ����!" << endl;
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 68);
//	AddHash(h, 34);
//	AddHash(h, 21);
//	AddHash(h, 26);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	PrintHash(h);
//
//	system("pause");
//}




///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)
//
//�浹 : ���� ��巹���� ���� Ű�� ������ �� ����
//
//�浹�� ȸ���ϴ� ���
//1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//
//�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//
//����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//�ؽ��� ���� �⺻���� ����
//�ؽ��� ���� ���� ���� �� - �ؽ�
//
//�ؽ� ������ �������� 30%,
//70% �Ѿ�� ��û ������
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 ����� ���ؼ�
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash�� ��巹���� ��ȯ��
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table ������
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter;
//		cout << endl;
//	}
//}
//void SearchHash(Hash& h, int key) 
//{
//	int addr = HashFunction(key);
//	for(list<int>::iterator iter = h.table[addr].begin(); iter != h.table[addr].end(); ++iter)
//		if (key == *iter)
//		{
//			cout << key << " : ã��" << endl;
//			return;
//		}
//	cout << "key ����!" << endl;
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 120);
//
//	SearchHash(h, 89);
//	PrintHash(h);
//
//	system("pause");
//}




///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)
//
//�浹 : ���� ��巹���� ���� Ű�� ������ �� ����
//
//�浹�� ȸ���ϴ� ���
//1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//
//�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//
//����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//�ؽ��� ���� �⺻���� ����
//�ؽ��� ���� ���� ���� �� - �ؽ�
//
//�ؽ� ������ �������� 30%,
//70% �Ѿ�� ��û ������
//*/
//#include <iostream>
//#include <cstdlib>
//#include <list>
//using namespace std;
//struct Hash
//{
//	list<int> table[10];
//};
//int HashFunction(int  key)
//{
//	return ((key >> 2) << 2) % 10; // 0~9 ����� ���ؼ�
//}
//void AddHash(Hash& h, int key)
//{
//	int addr = HashFunction(key); // hash�� ��巹���� ��ȯ��
//	h.table[addr].push_back(key);
//}
//void PrintHash(Hash& h)
//{
//	int tsize = 10; // table ������
//	for (int i = 0; i < tsize; ++i)
//	{
//		cout << "[" << i << "]: ";
//		for (list<int>::iterator iter = h.table[i].begin(); iter != h.table[i].end(); ++iter)
//			cout << *iter;
//		cout << endl;
//	}
//}
//void main()
//{
//	Hash h;
//	AddHash(h, 47);
//	AddHash(h, 89);
//	AddHash(h, 120);
//
//	PrintHash(h);
//
//	system("pause");
//}






///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��)
//
//�浹 : ���� ��巹���� ���� Ű�� ������ �� ����
//
//�浹�� ȸ���ϴ� ���
//1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//
//�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//
//����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//�ؽ��� ���� �⺻���� ����
//�ؽ��� ���� ���� ���� �� - �ؽ�
//
//�ؽ� ������ �������� 30%, 
//70% �Ѿ�� ��û ������
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//
//
//	system("pause");
//}
//





///*
//�˻� ���ɿ��� *Hash�� �̷�������  ����ð��� ã�� �� ����
//
//2�� Ʈ���� log �ð��� ���� �� ����
//
//	key -> �ؽ� �Լ�(�ؽ� ����) -> ���� �����Ͱ� ��ġ�ϴ� (Address) �ּҸ� ��ȯ  -> �ؽ� ���̺� (bucket, ��) 
//
//	�浹 : ���� ��巹���� ���� Ű�� ������ �� ���� 
//
//	�浹�� ȸ���ϴ� ��� 
//	1. ��� �ؽ� (�� ����), �ּ��� 2�踦 �ϰų� �����ų� ������ ��å�� ���� ����
//
//	2. ���� �ؽ� : �浹�� �߻����� ��, �޸� �������� Ȯ���ϴ� ���
//	
//	�ؽ��� �޸𸮸� ������, �ð��� ���� �ڷᱸ����� ��, �װ� �ؽ��� ������ ��
//
//	��κ� ���α׷� ���� ��ü���� �� �ؽ� �ڵ带 ���� �� �ִ� ���� ������ ����
//	
//	����� ������ �ؽ̿� �ܺο� ���ҵ��� ������ ������ �ؽ��� �� ������ ü�̴� ������ �����
//
//	�ؽ��� ���� �⺻���� ����
//	�ؽ��� ���� ���� ���� �� - �ؽ�
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void main()
//{
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; 
//
//
//	system("pause");
//}
//




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) // heap�� ������� Ȯ���� ���ؼ� ����
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && f(list[child], list[child + 1])) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (f(list[parent], list[child])) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // ���� predicate => �ٸ� ���� ���� ramda�� ǥ����
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // ��� // ���� ��ü�� ���� ���� less, �������� ũ�� greater
//	}
//};
//template <typename Func>
//void Sort_Heap(int list[], Func f) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//		Pop_Heap(list, f);
//}
//template <typename Func>
//void Make_Heap(int list[], Func f)
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 0; i < size; ++i)
//		Push_Heap(list, f);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list, less<int>()); // �ƹ��͵� ���ָ� less�� ����
//	PrintList(list, 11);
//
//	Sort_Heap(list, less<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size) // heap�� ������� Ȯ���� ���ؼ� ����
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && f(list[child], list[child + 1])) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (f(list[parent], list[child])) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // ���� predicate => �ٸ� ���� ���� ramda�� ǥ����
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // ��� // ���� ��ü�� ���� ���� less, �������� ũ�� greater
//	}
//};
//template <typename Func>
//void Sort_Heap(int list[], Func f) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int size = list[0];
//	for (int i = 0; i < size; ++i)
//		Pop_Heap(list, f);
//}
//template <typename Func>
//void Make_Heap(int list[], Func f)
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 0; i < size; ++i)
//		Push_Heap(list, f);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	Sort_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}





///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && f(list[child], list[child + 1])) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (f(list[parent], list[child])) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // ���� predicate => �ٸ� ���� ���� ramda�� ǥ����
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // ��� // ���� ��ü�� ���� ���� less, �������� ũ�� greater
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	Pop_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}
//




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//template <typename func>
//void Pop_Heap(int list[], func f)
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && f(list[child] , list[child + 1])) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (f(list[parent] , list[child])) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // ���� predicate => �ٸ� ���� ���� ramda�� ǥ����
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // ��� // ���� ��ü�� ���� ���� less, �������� ũ�� greater
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//
//	Pop_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//template <typename T>
//struct Greater // ���� predicate => �ٸ� ���� ���� ramda�� ǥ����
//{
//	bool operator()(const T& a, const T& b) const
//	{
//		return a < b; // less // ��� // ���� ��ü�� ���� ���� less, �������� ũ�� greater
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	cout << Greater<int>()(40, 50);
//	//cout << Greater<int>().operator(40, 50); 
//	Greater<int> g;
//	cout << g(40, 50) << endl;
//	cout << g.operator()(40, 50) << endl;
//	Push_Heap(list, g);
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	Push_Heap(list, Greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}



///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		Pop_Heap(list);
//}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////		Push_Heap(list);
////}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}







///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//����ϴ� ���� : heap �ȿ� �ֱ⸸ �ϸ�, �� �ٷ� ���ϴ� ���, ���� ���� ��� �ٷ� ���� �� ����
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//template <typename Func>
//void Push_Heap(int list[], Func f) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (f(list[parent], list[child])) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		Pop_Heap(list);
//}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////		Push_Heap(list);
////}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	Push_Heap(list, greater<int>());
//	PrintList(list, 11);
//
//	system("pause");
//}
//
//


///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[]) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
//void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		Pop_Heap(list);
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list); // 10���� heap���� ��������
//
//	PrintList(list, 11);
//
//	Sort_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}






///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[]) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
////void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
////{
////	int temp[11];
////	int size = list[0];
////	for (int i = 1; i <= size; ++i)
////		temp[i] = Pop_Heap(list);
////	for (int i = 1; i <= size; ++i)
////		list[size - i + 1] = temp[i];
////	list[0] = size;
////}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list); // 10���� heap���� ��������
//
//	PrintList(list, 11);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}
//




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[]) // heap ���� ����
//{
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//void Pop_Heap(int list[])
//{
//	Swap(list[list[0]], list[1]);
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//}
////void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
////{
////	int temp[11];
////	int size = list[0];
////	for (int i = 1; i <= size; ++i)
////		temp[i] = Pop_Heap(list);
////	for (int i = 1; i <= size; ++i)
////		list[size - i + 1] = temp[i];
////	list[0] = size;
////}
////void Make_Heap(int list[])
////{
////	int size = list[0];
////	list[0] = 0;
////	for (int i = 1; i <= size; ++i)
////		Push_Heap(list, list[i]);
////}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 0 , 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	Push_Heap(list);
//	Push_Heap(list);
//
//	PrintList(list, 11);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	Pop_Heap(list);
//	PrintList(list, 11);
//
//	system("pause");
//}
//


///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		temp[i] = Pop_Heap(list);
//	for (int i = 1; i <= size; ++i)
//		list[size - i + 1] = temp[i];
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list);
//	PrintList(list, 11);
//
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		temp[i] = Pop_Heap(list);
//	for (int i = 1; i <= size; ++i)
//		list[size - i + 1] = temp[i];
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list);
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Sort_Heap(int list[]) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[11];
//	int size = list[0];
//	for (int i = 1; i <= size; ++i)
//		temp[i] = Pop_Heap(list);
//	for (int i = 1; i <= size; ++i)
//		list[size-i+1]= temp[i];
//	list[0] = size;
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i <= size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list);
//	Sort_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}



///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void Make_Heap(int list[])
//{
//	int size = list[0];
//	list[0] = 0;
//	for (int i = 1; i < size; ++i)
//		Push_Heap(list, list[i]);
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[11] = { 10, 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 }; // 10���� ���Ұ� �ִٴ� ���� 0 index�� ����
//
//	Make_Heap(list);
//	PrintList(list, 11);
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child]) // �񱳸� ���⼭ ��
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1]) // �� ���⼭ 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//
//	//make_heap(list, list + 10);
//	//make_heap(list, list + 10, less<int>());
//	//sort_heap(list, list + 10); // ����Ʈ�� (less)�������� ���� ��
//	//sort_heap(list, list + 10, less<int>()); // ����Ʈ�� (less)�������� ���� ��
//
//	make_heap(list, list + 10, greater<int>());
//	sort_heap(list, list + 10, greater<int>()); // ����Ʈ�� (less)�������� ���� ��
//	PrintList(list, 10);
//	system("pause");
//}





///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <functional> // greater (predicate) ��� ����
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1])
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//
//	//make_heap(list, list + 10);
//	//make_heap(list, list + 10, less<int>());
//	//sort_heap(list, list + 10); // ����Ʈ�� (less)�������� ���� ��
//	//sort_heap(list, list + 10, less<int>()); // ����Ʈ�� (less)�������� ���� ��
//
//	make_heap(list, list + 10, greater<int>()); 
//	sort_heap(list, list + 10, greater<int>()); // ����Ʈ�� (less)�������� ���� ��
//	PrintList(list, 10);
//	system("pause");
//}





///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if (child < size  && list[child] < list[child + 1])
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void Heap_Sort(int list[], int size) // �� ��Ʈ�� �ϱ� ���ؼ��� heap �ڷῡ �־��ٰ� ���� ��
//{
//	int temp[20] = { 0 };
//	for (int i = 0; i < size; ++i)
//		Push_Heap(temp, list[i]);
//	for (int i = 0; i < size; ++i)
//		list[i] = Pop_Heap(temp);
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	
//	Heap_Sort(list, 10);// list ���״ϱ� ������ ���� 10���� �� ����(����)�ض�
//	PrintList(list, 10);
//	system("pause");
//}



///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size : " << size << ", ";
//	for (int i = 1; i < size + 1; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//
//}
//int Pop_Heap(int list[])
//{
//	int data = list[1]; //root
//	list[1] = list[list[0]]; // �� �ؿ� �ִ� ���� �ϴ� ��Ʈ�� �ø�
//	int size = --list[0]; // ������ ���� ���Ѿ� �ϴϱ� �ϳ� �ٿ��� ����� ����
//
//	int parent = 1;
//	int child = parent * 2;
//
//	while (child <= size) // child�� �ڽĺ��� ���� ��� �ڽ��� ���� ������  
//	{
//		//if (list[child] < list[child + 1]) // �ڽĳ��� ���ؼ� // * �̰� ������ ���� �ڽ��� �ϳ� ���� ��찡 �ֱ� ������ �ڽ��� ȥ�� �ִ��� �˻��ؾ���
//		if ( child < size  && list[child] < list[child + 1]) 
//			child = child + 1; // ū���� child�� ����
//		if (list[parent] < list[child]) // child�� �� ũ��
//			Swap(list[parent], list[child]); // �ٲ�
//		else
//			break;// 
//
//		parent = child; // �ؿ� �ڽĵ���� ��� ���س����� ������
//		child = parent * 2;
//	}
//	return data;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[20] = {0};
//
//	Push_Heap(list, 40);
//	Push_Heap(list, 50);
//	Push_Heap(list, 20);
//	Push_Heap(list, 90);
//	Push_Heap(list, 10);
//	Push_Heap(list, 70);
//	Push_Heap(list, 60);
//	Push_Heap(list, 30);
//	Push_Heap(list, 80);
//	Push_Heap(list, 100);
//
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//	cout << Pop_Heap(list) << endl;//root�� �ִ� ���� ū ���Ҹ� ��ȯ�ϰ� �ؾ� ��
//
//
//	PrintList(list);
//
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (child > 1)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size : " << size << ", ";
//	for (int i = 1; i < size + 1; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[10] = { 6, 90, 50, 80, 40, 10, 20 }; // 0��° �ε����� �ڷ��� ������ ��Ÿ�� (������ �Ⱦ��ϱ�) 
//												  // ��������� heap������ ��������ٰ� ����
//
//	Push_Heap(list, 60); // list�� 60�� �־�޶�
//	Push_Heap(list, 30); 
//	Push_Heap(list, 100);  // root ���� Ŭ ���
//
//	PrintList(list);
//
//	system("pause");
//}



///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//index �������� �θ�� �ڽ��� �ڸ��� �� �� ����
//�θ� = �ڽ� / 2;
//�ڽ� = �θ� * 2 or �θ� * 2 + 1
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Swap(int& a, int& b)
//{
//	int temp = a;
//	a = b;
//	b = temp;
//}
//void Push_Heap(int list[], int data) // heap ���� ����
//{
//	list[list[0] + 1] = data;
//	int size = ++list[0];
//	int child = size;
//	int parent = size / 2;
//
//	while (true)
//	{
//		if (list[parent] < list[child])
//			Swap(list[parent], list[child]);
//		else
//			break;
//		child = parent;
//		parent = child / 2;
//	}
//}
//void PrintList(int list[])
//{
//	int size = list[0];
//	cout << "size : " << size << ", ";
//	for (int i = 1; i < size+1; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[10] = { 6, 90, 50, 80, 40, 10, 20 }; // 0��° �ε����� �ڷ��� ������ ��Ÿ�� (������ �Ⱦ��ϱ�) 
//												  // ��������� heap������ ��������ٰ� ����
//
//	Push_Heap(list, 60); // list�� 60�� �־�޶�
//	Push_Heap(list, 30); // list�� 60�� �־�޶�
//	Push_Heap(list, 70); // list�� 60�� �־�޶�
//
//	PrintList(list);
//
//	system("pause");
//}




///*
//Heap �ڷᱸ�� : �θ��尡 �ڽĳ�庸�� �׻� Ŀ�� ��
//
//��� ���� ������ ��尡 �ڽĺ��� ū�� �˻� �Ѵ�.
//
//idx		data
//0
//1		90
//2		50
//3		80
//4		40
//5		10
//6		20
//7
//8
//
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void Push_Heap(int list[], int data)
//{
//	list[list[0]+1] = data;
//	int size = ++list[0];
//	cout << size << endl;
//}
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int list[10] = { 6, 90, 50, 80, 40, 10, 20 }; // 0��° �ε����� �ڷ��� ������ ��Ÿ�� (������ �Ⱦ��ϱ�) 
//												  // ��������� heap������ ��������ٰ� ����
//
//	Push_Heap(list, 60); // list�� 60�� �־�޶�
//
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <vector>
//#include <algorithm>
//using namespace std;
//class Heap
//{
//	vector<int> list;
//public:
//	void Push(int data)
//	{
//		list.push_back(data);
//		push_heap(list.begin(), list.end());
//	}
//	void Print()
//	{
//		for (unsigned i = 0; i < list.size(); ++i)
//			cout << list[i] << " ";
//		cout << endl;
//	}
//	int Pop()
//	{
//		pop_heap(list.begin(), list.end());// �̷��� ���� ���� ��Ʈ�� ���� ������ �ű�
//		int data = list.back(); // �ڿ� ���� ������ ����
//		list.pop_back(); // ����
//		return data;
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	Heap h;
//
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Push(80);
//	h.Push(60);
//	h.Push(30);
//	h.Push(70);
//	h.Push(100);
//	h.Print();
//
//	cout << h.Pop() << endl; //root�� ��ȯ�ؾ� ��
//	h.Print();
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//class Heap
//{
//	int list[10];
//	int size;
//public:
//	Heap() : size(0)
//	{
//	}
//	void Push(int data)
//	{
//		list[size++] = data;
//		push_heap(list, list + size);
//	}
//	void Print()
//	{
//		for (int i = 0; i < size; ++i)
//			cout << list[i] << " ";
//		cout << endl;
//	}
//	int Pop()
//	{
//		pop_heap(list, list + size);// �̷��� ���� ���� ��Ʈ�� ���� ������ �ű�
//		--size;
//		return list[size];
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	Heap h;
//
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Print();
//
//	cout << h.Pop() << endl; //root�� ��ȯ�ؾ� ��
//	h.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//class Heap
//{
//	int list[10];
//	int size;
//public:
//	Heap() : size(0) 
//	{
//	}
//	void Push(int data)
//	{
//		list[size++] = data;
//		push_heap(list, list + size);
//	}
//	void Print()
//	{
//		for (int i = 0; i < size; ++i)
//			cout << list[i] << " ";
//		cout << endl;
//	}
//};
//void main()
//{
//	//int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	Heap h;		
//
//	h.Push(40);
//	h.Push(50);
//	h.Push(20);
//	h.Push(90);
//	h.Push(10);
//	h.Print();
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//void main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	PrintList(list, 10);
//	push_heap(list, list + 1);
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//
//	//make_heap(list, list + 5);
//	PrintList(list, 10);
//	system("pause");
//}