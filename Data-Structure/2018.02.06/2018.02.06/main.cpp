#include <iostream>
#include <stdlib.h>
#include <Windows.h>
using namespace std;

int image[10][10] =
{
	0,0,0,0,0,0,0,0,0,0,
	0,1,1,1,0,0,0,0,0,0,
	0,0,1,1,5,5,5,0,0,0,
	0,0,1,1,5,5,5,0,0,0,
	0,0,1,1,5,5,5,0,0,0,
	0,0,1,1,5,5,5,0,0,0,
	0,0,1,1,0,0,6,0,0,0,
	0,0,0,0,0,6,6,6,0,0,
	0,0,0,0,0,6,6,6,0,0,
	0,0,0,0,0,6,6,6,0,0
};
void PrintImage()
{
	system("cls");
	for (int i = 0; i < 10; ++i)
	{
		for (int j = 0; j < 10; ++j)
			cout << image[i][j] << " ";
		cout << endl;
	}
	Sleep(300);
}
void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
{
	if (0 > i || i >= 10 || 0 > j || j >= 10)
		return;
	if (image[i][j] != oldColor)
		return;
	image[i][j] = newColor;
	PrintImage();

	_Fill(image, i - 1, j, newColor, oldColor);
	_Fill(image, i, j + 1, newColor, oldColor);
	_Fill(image, i + 1, j, newColor, oldColor);
	_Fill(image, i, j - 1, newColor, oldColor);
}
void Fill(int image[][10], int i, int j, int newColor)
{
	if (image[i][j] == newColor)
		return;
	_Fill(image, i, j, newColor, image[i][j]);
}
int main()
{
	int i, j;
	PrintImage();
	cout << "��ǥ(x,y) �Է�:";
	cin >> i >> j;

	Fill(image, i, j, 8);
	system("pause");
}

///*
//ex ����Լ� �׸��� ��ĥ �˰��� ( 4���� Ȯ�� )
//������� ����? ���̰� ���������� �ʰ�, ���� ������ ���� ���� �� �ַ� ��� ��
//*/
//#include <iostream>
//#include <cstdlib>
//#include <Windows.h> 
//using namespace std;
//int image[10][10] =
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,1,1,1,5,5,5,5,0,0,
//	0,0,1,1,5,5,5,5,0,0,
//	0,0,1,1,5,5,5,5,0,0,
//	0,0,1,1,5,5,5,5,0,0,
//	1,1,1,1,1,6,6,6,6,0,
//	0,0,0,0,0,6,6,6,6,0,
//	0,0,0,0,0,6,6,6,6,0,
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,0,0,0,0,0,0,0
//};
//void PrintImage()
//{
//	system("cls"); // ȭ�� ����
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//			cout << image[i][j] << " ";
//		cout << endl;
//	}
//	Sleep(300); //0.3��
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (0 > i || i >= 10 || 0 > j && j >= 10) // ���� ����
//		return;
//	if (image[i][j] == oldColor)
//		return;
//	image[i][j] = newColor;
//	PrintImage();
//
//	_Fill(image, i-1, j, newColor, oldColor);
//	_Fill(image, i, j+1, newColor, oldColor);
//	_Fill(image, i+1, j, newColor, oldColor);
//	_Fill(image, i, j-1, newColor, oldColor);
//}
//void Fill(int image[][10], int i, int j, int newColor)
//{
//	if (newColor == image[i][j])
//		return;
//
//	_Fill(image, i, j, newColor, image[i][j]); // �����Լ� // ���� ������ ���� ȣ�� �Լ����� �������� �˷��ֱ� ���ؼ�
//}	
//int main()
//{
//	PrintImage();
//
//	Fill(image, 3, 7, 8); // 
//	system("pause");
//}



///*
//ex ����Լ� �׸��� ��ĥ �˰��� ( 4���� Ȯ�� )
//������� ����? ���̰� ���������� �ʰ�, ���� ������ ���� ���� �� �ַ� ��� ��
//*/
//#include <iostream>
//#include <cstdlib>
//#include <Windows.h> 
//using namespace std;
//int Image[10][10] =
//{
//	0,0,0,0,0,0,0,0,0,0,
//	0,1,1,1,5,5,5,5,0,0,
//	0,0,1,1,5,5,5,5,0,0,
//	0,0,1,1,5,5,5,5,0,0,
//	0,0,1,1,5,5,5,5,0,0,
//	1,1,1,1,1,6,6,6,6,0,
//	0,0,0,0,0,6,6,6,6,0,
//	0,0,0,0,0,6,6,6,6,0,
//	0,0,0,0,0,0,0,0,0,0,
//	0,0,0,0,0,0,0,0,0,0
//};
//void PrintImage()
//{
//	system("cls"); // ȭ�� ����
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//			cout << Image[i][j] << " ";
//		cout << endl;
//	}
//	Sleep(300); //0.3��
//}
//int main()
//{
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	PrintImage();
//	system("pause");
//}



///*
//ex ����Լ� �׸��� ��ĥ �˰��� ( 4���� Ȯ�� )
//������� ����? ���̰� ���������� �ʰ�, ���� ������ ���� ���� �� �ַ� ��� ��
//
//
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Fibonacci(int n)
//{
//	if (n == 1)		// ���� ���� ���� ���� ����
//		return 2;
//	else if (n == 2)
//		return 3;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	cout << Fibonacci(5) << endl; //5��° ���� ���϶�
//	system("pause");
//}



///*
//ex ����Լ� �Ǻ���ġ ����
//f(1) - c1
//f(2) - c2
//	
//		.
//		.
//		.
//
//f(n) = f(n-1) + f(n-2)  if ( n > 2 )
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Fibonacci(int n)
//{
//	if (n == 1)		// ���� ���� ���� ���� ����
//		return 2;
//	else if (n == 2)
//		return 3;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	cout << Fibonacci(5) << endl; //5��° ���� ���϶�
//	system("pause");
//}




///*
//ex ����Լ� factorial
//f(1) = 1(n = 1)
//f(n) = f(n-1)! * n = n * f(n-1)!
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Factorial(int n)
//{
//	return n == 1 ? 1 : Factorial(n - 1)*n;
//}
//int main()
//{
//	cout << Factorial(5) << endl;
//	system("pause");
//}


///*
//ex ����Լ� factorial
//f(1) = 1(n = 1)
//f(n) = f(n-1)! * n = n * f(n-1)!
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Factorial(int n)
//{
//	if (n == 1)
//		return 1; // ���� ����
//	else
//	{
//		int fac = Factorial(n - 1);
//		return fac * n;
//	}
//}
//int main()
//{
//	cout << Factorial(5) << endl;
//	system("pause");
//}



///*
//ex ����Լ� factorial
//f(1) = 1(n = 1)
//f(n) = f(n-1)! * n = n * f(n-1)!
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Factorial(int n)
//{
//	if (n == 1)
//		return 1;
//	else
//		return Factorial(n - 1)*n;
//}
//int main()
//{
//	cout << Factorial(5) << endl;
//	system("pause");
//}



///*
//������ ��� �Լ��� �Ƿ��� 2���� ������ �־�� ��
//1. ��� �Լ� ���� ������ �־�� �Ѵ�.
//-> ��� �Լ��� ȣ�� ���� �ʴ� ����
//
//2. ���� ���ǿ� ���� ���� �� ���� �Ѵ�.
//-> ��� �Լ��� ȣ�� �� ������ ���� ������ ���� �Ѵ�.
//
//�Լ��� ���Ƶ������� �ٸ� ����� ���ϴ� Ư���� �̿�
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n)
//{
//	for (int i = 0; i < 3 - n; ++i)
//		cout << " ";
//
//	cout << "+" << n << endl;
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 2);
//		Print(n - 3);
//	}
//	for (int i = 0; i < 3 - n; ++i)
//		cout << " ";
//	cout << "-" << n << endl;
//
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}



///*
//������ ��� �Լ��� �Ƿ��� 2���� ������ �־�� ��
//1. ��� �Լ� ���� ������ �־�� �Ѵ�.
//-> ��� �Լ��� ȣ�� ���� �ʴ� ����
//
//2. ���� ���ǿ� ���� ���� �� ���� �Ѵ�.
//-> ��� �Լ��� ȣ�� �� ������ ���� ������ ���� �Ѵ�.
//
//�Լ��� ���Ƶ������� �ٸ� ����� ���ϴ� Ư���� �̿�
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n)
//{
//	for (int i = 0; i < 3-n; ++i)
//		cout << " ";
//
//	cout << "+" << n << endl;
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//		Print(n - 1);
//	}
//	for (int i = 0; i < 3-n; ++i)
//		cout << " ";
//	cout << "-" << n << endl;
//
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}



///*
//������ ��� �Լ��� �Ƿ��� 2���� ������ �־�� ��
//1. ��� �Լ� ���� ������ �־�� �Ѵ�.
//-> ��� �Լ��� ȣ�� ���� �ʴ� ����
//
//2. ���� ���ǿ� ���� ���� �� ���� �Ѵ�.
//-> ��� �Լ��� ȣ�� �� ������ ���� ������ ���� �Ѵ�.
//
//�Լ��� ���Ƶ������� �ٸ� ����� ���ϴ� Ư���� �̿�
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n)
//{
//	for (int i = 0; i < n; ++i)
//		cout << " ";
//	cout << "+" << n << endl;
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	cout << "-" << n << endl;
//	for (int i = 0; i < n; ++i)
//		cout << " ";
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}



///*
//������ ��� �Լ��� �Ƿ��� 2���� ������ �־�� ��
//1. ��� �Լ� ���� ������ �־�� �Ѵ�.
//-> ��� �Լ��� ȣ�� ���� �ʴ� ����
//
//2. ���� ���ǿ� ���� ���� �� ���� �Ѵ�.
//-> ��� �Լ��� ȣ�� �� ������ ���� ������ ���� �Ѵ�.
//
//�Լ��� ���Ƶ������� �ٸ� ����� ���ϴ� Ư���� �̿�
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n)
//{
//	cout << "+" << n << endl;
//	if (n > 0)
//	{
//		Print(n - 1);
//		Print(n - 1);
//	}
//	cout << "-" << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}





///*
//������ ��� �Լ��� �Ƿ��� 2���� ������ �־�� ��
//1. ��� �Լ� ���� ������ �־�� �Ѵ�.
//-> ��� �Լ��� ȣ�� ���� �ʴ� ����
//
//2. ���� ���ǿ� ���� ���� �� ���� �Ѵ�.
//-> ��� �Լ��� ȣ�� �� ������ ���� ������ ���� �Ѵ�.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n) 
//{
//	cout << "+" << n << endl;
//	if (n > 0)
//		Print(n - 1);		// ��� �Լ� �� �ʲ��� ���� ����, �ؿ��� �� �Ϸ�ǰ� ����
//	cout << "-" << n << endl; // Print�� ��� ����� �Ϸ�Ǳ� ������ ������� ����
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}
//


//
///*
//������ ��� �Լ��� �Ƿ��� 2���� ������ �־�� ��
//1. ��� �Լ� ���� ������ �־�� �Ѵ�.
//-> ��� �Լ��� ȣ�� ���� �ʴ� ����
//
//2. ���� ���ǿ� ���� ���� �� ���� �Ѵ�. 
//-> ��� �Լ��� ȣ�� �� ������ ���� ������ ���� �Ѵ�.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n) // ���� ǥ���ϴ� ���� ������, �޸𸮰� ���������� ���� ( ��ȯ�� �ݵ�� �־�� �� )
//{// �Լ��� �ڱ⸦ ȣ�� �ߴ� �Լ����׸� ���ư� �� �ִ�.
//	cout << n << endl;
//	if(n > 0)
//		Print(n - 1);
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n) // ���� ǥ���ϴ� ���� ������, �޸𸮰� ���������� ���� ( ��ȯ�� �ݵ�� �־�� �� )
//{
//	cout << n << endl;
//	Print(n-1); 
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//	Print(n); // �ȳ�~ ���� �����÷ο�
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n)
//{
//	cout << n << endl;
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}


///*
//��� �Լ�
//1. ���� ��� : ���� ȣ��
//2. ���� ��� : �ϳ� ���ļ� �ٽ� ȣ��
//
//�Լ���� ���� ��� 1������ 10������ ����� ����
//�ڽ��� �Լ��� ȣ���Ѵٴ� ����, �� ����� �� �ٸ� ����� �����Ѵٴ� ��
//
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//int main()
//{
//
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//template <typename T>
//class List
//{
//	struct Node
//	{
//		T data;
//		Node* prev;
//		Node* next;
//		Node(const T& data) : data(data), prev(0), next(0) {}
//	};
//	Node* head;
//	Node* tail;
//public:
//	class Iterator
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) : ptr(p)
//		{}
//		bool operator!=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		T operator*()
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(T()); // ���� ��� -> �ڵ� ����ȭ�� ����
//		tail = new Node(T()); // ���� ��� -> �ڵ� ����ȭ�� ����
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ� // ���� �̷� �ڵ尡 �ڷᱸ�� ���ο� �ִ� �� ���� �ȵ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(const T& data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(const T& data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Iterator iter)
//	{
//		Node* pp = (&iter)->prev;
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//
//int main()
//{
//	List<int> lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	//MS �迭 �޼ҵ�� �빮��
//	//Google �迭 �޼ҵ�� �ҹ���
//
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//		cout << *iter << endl;
//
//	system("pause");
//}
//


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//template <typename T>
//class List
//{
//	struct Node
//	{
//		T data;
//		Node* prev;
//		Node* next;
//		Node(const T& data) : data(data), prev(0), next(0) {}
//	};
//	Node* head;
//	Node* tail;
//public:
//	class Iterator
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) : ptr(p)
//		{}
//		bool operator!=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		T operator*()
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(T()); // ���� ��� -> �ڵ� ����ȭ�� ����
//		tail = new Node(T()); // ���� ��� -> �ڵ� ����ȭ�� ����
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ� // ���� �̷� �ڵ尡 �ڷᱸ�� ���ο� �ִ� �� ���� �ȵ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(const T& data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(const T& data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Iterator iter)
//	{
//		Node* pp = (&iter)->prev;
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//
//int main()
//{
//	List<int> lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	//MS �迭 �޼ҵ�� �빮��
//	//Google �迭 �޼ҵ�� �ҹ���
//
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List<int>::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//		cout << *iter << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	class Iterator
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) : ptr(p)
//		{}
//		bool operator!=(Iterator arg)
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++()
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		int operator*()
//		{
//			return ptr->data;
//		}
//		Node* operator&()
//		{
//			return ptr;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(0); // ���� ��� -> �ڵ� ����ȭ�� ����
//		tail = new Node(0); // ���� ��� -> �ڵ� ����ȭ�� ����
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ� // ���� �̷� �ڵ尡 �ڷᱸ�� ���ο� �ִ� �� ���� �ȵ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Iterator iter)
//	{
//		Node* pp = (&iter)->prev;
//		Node* np = (&iter)->next;
//		pp->next = np;
//		np->prev = pp;
//		delete &iter;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//
//int main()
//{
//	List lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	//MS �迭 �޼ҵ�� �빮��
//	//Google �迭 �޼ҵ�� �ҹ���
//
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter) 
//	{
//		if (*iter == 30)
//		{
//			lt.Remove(iter);
//			break;
//		}
//	}
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//		cout << *iter << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	class Iterator
//	{
//		Node* ptr;
//	public:
//		Iterator(Node* p) : ptr(p)
//		{}
//		bool operator!=(Iterator arg) 
//		{
//			return ptr != arg.ptr;
//		}
//		Iterator operator++() 
//		{
//			ptr = ptr->next;
//			return *this;
//		}
//		int operator*() 
//		{
//			return ptr->data;
//		}
//	};
//public:
//	List()
//	{
//		head = new Node(0); // ���� ��� -> �ڵ� ����ȭ�� ����
//		tail = new Node(0); // ���� ��� -> �ڵ� ����ȭ�� ����
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ� // ���� �̷� �ڵ尡 �ڷᱸ�� ���ο� �ִ� �� ���� �ȵ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Node*& p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		pp->next = np;
//		np->prev = pp;
//		delete p;
//		p = np;
//	}
//	Iterator Begin()
//	{
//		return Iterator(head->next);
//	}
//	Iterator End()
//	{
//		return Iterator(tail);
//	}
//};
//
//int main()
//{
//	List lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	//MS �迭 �޼ҵ�� �빮��
//	//Google �迭 �޼ҵ�� �ҹ���
//
//	//for (List::Iterator Iter = lt.Begin(); iter != lt.End(); ++Iter) 
//	//{
//	//	if (*Iter == 30)
//	//	{
//	//		It.Remove(iter);
//	//		//break;
//	//	}
//	//}
//	for (List::Iterator iter = lt.Begin(); iter != lt.End(); ++iter)
//		cout << *iter << endl;
//
//	system("pause");
//}
//


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	class Iterator
//	{
//	public:
//		bool operator!=(Iterator arg) { return false; }
//		Iterator operator++() { return Iterator(); }
//		int operator*() { return 0; }
//	};
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Node*& p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		pp->next = np;
//		np->prev = pp;
//		delete p;
//		p = np;
//	}
//	Iterator Begin()
//	{
//		return Iterator();
//	}
//	Iterator End()
//	{
//		return Iterator();
//	}
//};
//
//int main()
//{
//	List lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	//MS �迭 �޼ҵ�� �빮��
//	//Google �迭 �޼ҵ�� �ҹ���
//
//	//for (List::Iterator Iter = lt.Begin(); iter != lt.End(); ++Iter) 
//	//{
//	//	if (*Iter == 30)
//	//	{
//	//		It.Remove(iter);
//	//		//break;
//	//	}
//	//}
//	for (List::Iterator Iter = lt.Begin(); iter != lt.End(); ++Iter)
//		cout << *iter << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Node*& p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		pp->next = np;
//		np->prev = pp;
//		delete p;
//		p = np;
//	}
//	Node* GetHead()
//	{
//		return  head->next; // ���� �ڵ忡�� �ص�� ���� ������� Ŭ���̾�Ʈ ���忡���� ��¥ ���� ��带 �޶�� �ϴ� ���̱� ������
//	}
//	bool HasNext(Node* p)
//	{
//		return p != tail;
//	}
//	void Next(Node*& p)
//	{
//		p = p->next;
//	}
//	int GetItem(Node* p)
//	{
//		return p->data;
//	}
//};
//
//int main()
//{
//	List lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	//MS �迭 �޼ҵ�� �빮��
//	//Google �迭 �޼ҵ�� �ҹ���
//
//	//for (List::Iterator Iter = lt.Begin(); iter != lt.End(); ++Iter) 
//	//{
//	//	if (*Iter == 30)
//	//	{
//	//		It.Remove(iter);
//	//		//break;
//	//	}
//	//}
//	for (List::Iterator Iter = lt.Begin(); iter != lt.End(); ++Iter)
//		cout << *iter << endl;
//
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	void Remove(Node*& p)
//	{
//		Node* pp = p->prev;
//		Node* np = p->next;
//		pp->next = np;
//		np->prev = pp;
//		delete p;
//		p = np;
//	}
//	Node* GetHead()
//	{
//		return  head->next; // ���� �ڵ忡�� �ص�� ���� ������� Ŭ���̾�Ʈ ���忡���� ��¥ ���� ��带 �޶�� �ϴ� ���̱� ������
//	}
//	bool HasNext(Node* p)
//	{
//		return p != tail;
//	}
//	void Next(Node*& p)
//	{
//		p = p->next;
//	}
//	int GetItem(Node* p)
//	{
//		return p->data;
//	}
//};
//
//int main()
//{
//	List lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	for (Node* p = lt.GetHead(); lt.HasNext(p); lt.Next(p))
//	{
//		if (lt.GetItem(p) == 30)
//		{
//			lt.Remove(p);
//			break;
//		}
//	}
//	for (Node* p = lt.GetHead(); lt.HasNext(p); lt.Next(p))
//		cout << lt.GetItem(p) << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//};
//
//int main()
//{
//	List lt; // ��� ���Ҹ� ó������ ���� �� �� �ִ� (���ͷ��̼� �� �� �ִ�) �������̽��� �����ؾ� �Ѵ�.
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	/*
//	�Ϲ�������
//	Node* p = lt.GetHead();
//	lt.Next(p); // p�� ���� ��ġ�� ������Ʈ ����  //p = lt.Next();
//	lt.HasNext(p); // ���� ���Ұ� �ִ�?
//	lt.GetItem(p); // p�� ����Ű�� �ִ� ��ġ�� ���Ҹ� ��ȯ����
//	�̷� �������̽��� ������ ������ ��� ���Ҹ� ��ȸ(����) �� �� ����
//	*/
//	system("pause");
//}
//


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//};
//
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	lt.PrintNext(); // ��� �޼ҵ带 ������ �ִ� �� ���� �ȵǴ� ��!(����)
//	lt.PrintPrev();
//
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//};
//
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	lt.PrintNext();
//	lt.PrintPrev();
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//	Node(int data) : data(data), prev(0), next(0) {}
//};
//class List
//{
//	Node* head;
//	Node* tail;
//	//Node* AllocNode(int data)
//	//{
//	//	//Node* p = new Node();
//	//	//p->data = data;
//	//	//p->prev = p->next = NULL;
//
//	//	//return p;
//	//	return new Node(data);
//	//}
//public:
//	List()
//	{
//		head = new Node(0); // ���� ���
//		tail = new Node(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = new Node(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = new Node(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//};
//
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	lt.PrintNext();
//	lt.PrintPrev();
//
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//class List
//{
//	Node* head;
//	Node* tail;
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node();
//		p->data = data;
//		p->prev = p->next = NULL;
//
//		return p;
//	}
//public:
//	List()
//	{
//		head = AllocNode(0); // ���� ���
//		tail = AllocNode(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNext()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrev(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNext(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = AllocNode(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrev(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = AllocNode(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//};
//
//int main()
//{
//	List lt;
//
//	lt.AddNext(10);
//	lt.AddNext(20);
//	lt.AddNext(30);
//	lt.AddNext(40);
//	lt.AddNext(50);
//
//	lt.AddPrev(100);
//
//	lt.PrintNext();
//	lt.PrintPrev();
//
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//class List
//{
//	Node* head;
//	Node* tail;
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node();
//		p->data = data;
//		p->prev = p->next = NULL;
//
//		return p;
//	}
//public:
//	List()
//	{
//		head = AllocNode(0); // ���� ���
//		tail = AllocNode(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//	}
//	void PrintNextList()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrevList()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrevList(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void AddNextList(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = AllocNode(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrevList(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = AllocNode(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//};
//
//int main()
//{
//	List lt;
//
//	lt.AddNextList(10);
//	lt.AddNextList(20);
//	lt.AddNextList(30);
//	lt.AddNextList(40);
//	lt.AddNextList(50);
//
//	lt.AddPrevList(100);
//
//	lt.PrintNextList();
//	lt.PrintPrevList();
//
//	system("pause");
//}


//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//class List
//{
//	Node* head;
//	Node* tail;
//public:
//	void PrintNextList()
//	{
//		Node* p = head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrevList()
//	{
//		Node* p = tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//		while (p != head)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	void PrintPrevList(Node* p)
//	{
//		while (p)
//		{
//			cout << p->data << " ";
//			p = p->prev;
//		}
//		cout << endl;
//	}
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node();
//		p->data = data;
//		p->prev = p->next = NULL;
//
//		return p;
//	}
//	void AddNextList(int data)
//	{
//		Node* ptail = tail->prev;
//
//		Node* p = AllocNode(data);
//		ptail->next = p;
//		p->prev = ptail;
//		p->next = tail;
//		tail->prev = p;
//	}
//	void AddPrevList(int data)
//	{
//		Node* nhead = head->next;
//
//		Node* p = AllocNode(data);
//		nhead->prev = p;
//		p->next = nhead;
//		p->prev = head;
//		head->next = p;
//	}
//	List()
//	{
//		head = AllocNode(0); // ���� ���
//		tail = AllocNode(0); // ���� ���
//		head->next = tail;
//		tail->prev = head;
//	}
//	~List()
//	{
//		Node* p = tail;
//		while (p != NULL)
//		{
//			Node* pp = p->prev;
//			delete p;
//			p = pp;
//		}
//		//Node* p = lt.head;
//		//while (p != NULL)
//		//{
//		//	Node* np = p->next;
//		//	delete p;
//		//	p = np;
//		//}
//	}
//};
//int main()
//{
//	List lt;
//
//	lt.AddNextList(10);
//	lt.AddNextList(20);
//	lt.AddNextList(30);
//	lt.AddNextList(40);
//	lt.AddNextList(50);
//
//	lt.AddPrevList(100);
//
//	lt.PrintNextList();
//	lt.PrintPrevList();
//
//	system("pause");
//}




//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* prev;
//	Node* next;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//void PrintNextList(List& lt)
//{
//	Node* p = lt.head->next; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//	while (p != lt.tail)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//void PrintPrevList(List& lt)
//{
//	Node* p = lt.tail->prev; // ���� ��� ���� ���� ���� ���� ����ϱ� ���ؼ�
//	while (p != lt.head)
//	{
//		cout << p->data << " ";
//		p = p->prev;
//	}
//	cout << endl;
//}
//void PrintPrevList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->prev;
//	}
//	cout << endl;
//
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node();
//	p->data = data;
//	p->prev = p->next = NULL;
//
//	return p;
//}
//void AddNextList(List& lt, int data)
//{
//	Node* ptail = lt.tail->prev;
//
//	Node* p = AllocNode(data);
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = lt.tail;
//	lt.tail->prev = p;
//}
//void AddPrevList(List& lt, int data)
//{
//	Node* nhead = lt.head->next;
//
//	Node* p = AllocNode(data);
//	nhead->prev = p;
//	p->next = nhead;
//	p->prev = lt.head;
//	lt.head->next = p;
//}
//void InitList(List& lt)
//{
//	lt.head = AllocNode(0); // ���� ���
//	lt.tail = AllocNode(0); // ���� ���
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//}
//void UninitList(List& lt)
//{
//	Node* p = lt.tail;
//	while (p != NULL)
//	{
//		Node* pp = p->prev;
//		delete p;
//		p = pp;
//	}
//	//Node* p = lt.head;
//	//while (p != NULL)
//	//{
//	//	Node* np = p->next;
//	//	delete p;
//	//	p = np;
//	//}
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//
//	AddNextList(lt, 10);
//	AddNextList(lt, 20);
//	AddNextList(lt, 30);
//	AddNextList(lt, 40);
//	AddNextList(lt, 50);
//
//	AddPrevList(lt, 100);
//
//	PrintNextList(lt);
//	PrintPrevList(lt);
//
//	UninitList(lt);
//
//	system("pause");
//}

