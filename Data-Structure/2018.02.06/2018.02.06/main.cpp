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
	cout << "좌표(x,y) 입력:";
	cin >> i >> j;

	Fill(image, i, j, 8);
	system("pause");
}

///*
//ex 재귀함수 그림판 색칠 알고리즘 ( 4방향 확인 )
//재귀적인 문제? 깊이가 정해져있지 않고, 폭이 정해져 있지 않을 때 주로 사용 됨
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
//	system("cls"); // 화면 지움
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//			cout << image[i][j] << " ";
//		cout << endl;
//	}
//	Sleep(300); //0.3초
//}
//void _Fill(int image[][10], int i, int j, int newColor, int oldColor)
//{
//	if (0 > i || i >= 10 || 0 > j && j >= 10) // 종료 조건
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
//	_Fill(image, i, j, newColor, image[i][j]); // 위임함수 // 현재 색상이 다음 호출 함수한테 무엇인지 알려주기 위해서
//}	
//int main()
//{
//	PrintImage();
//
//	Fill(image, 3, 7, 8); // 
//	system("pause");
//}



///*
//ex 재귀함수 그림판 색칠 알고리즘 ( 4방향 확인 )
//재귀적인 문제? 깊이가 정해져있지 않고, 폭이 정해져 있지 않을 때 주로 사용 됨
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
//	system("cls"); // 화면 지움
//	for (int i = 0; i < 10; ++i)
//	{
//		for (int j = 0; j < 10; ++j)
//			cout << Image[i][j] << " ";
//		cout << endl;
//	}
//	Sleep(300); //0.3초
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
//ex 재귀함수 그림판 색칠 알고리즘 ( 4방향 확인 )
//재귀적인 문제? 깊이가 정해져있지 않고, 폭이 정해져 있지 않을 때 주로 사용 됨
//
//
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Fibonacci(int n)
//{
//	if (n == 1)		// 종료 조건 부터 먼저 쓰기
//		return 2;
//	else if (n == 2)
//		return 3;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	cout << Fibonacci(5) << endl; //5번째 항을 구하라
//	system("pause");
//}



///*
//ex 재귀함수 피보나치 수열
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
//	if (n == 1)		// 종료 조건 부터 먼저 쓰기
//		return 2;
//	else if (n == 2)
//		return 3;
//	else
//		return Fibonacci(n - 1) + Fibonacci(n - 2);
//}
//int main()
//{
//	cout << Fibonacci(5) << endl; //5번째 항을 구하라
//	system("pause");
//}




///*
//ex 재귀함수 factorial
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
//ex 재귀함수 factorial
//f(1) = 1(n = 1)
//f(n) = f(n-1)! * n = n * f(n-1)!
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int Factorial(int n)
//{
//	if (n == 1)
//		return 1; // 종료 조건
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
//ex 재귀함수 factorial
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
//완전한 재귀 함수가 되려면 2가지 조건이 있어야 함
//1. 재귀 함수 종료 조건이 있어야 한다.
//-> 재귀 함수를 호출 하지 않는 조건
//
//2. 종료 조건에 값이 수렴 해 가야 한다.
//-> 재귀 함수를 호출 할 때마다 값이 근접해 가야 한다.
//
//함수가 돌아돌때까지 다른 기능을 못하는 특성을 이용
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
//완전한 재귀 함수가 되려면 2가지 조건이 있어야 함
//1. 재귀 함수 종료 조건이 있어야 한다.
//-> 재귀 함수를 호출 하지 않는 조건
//
//2. 종료 조건에 값이 수렴 해 가야 한다.
//-> 재귀 함수를 호출 할 때마다 값이 근접해 가야 한다.
//
//함수가 돌아돌때까지 다른 기능을 못하는 특성을 이용
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
//완전한 재귀 함수가 되려면 2가지 조건이 있어야 함
//1. 재귀 함수 종료 조건이 있어야 한다.
//-> 재귀 함수를 호출 하지 않는 조건
//
//2. 종료 조건에 값이 수렴 해 가야 한다.
//-> 재귀 함수를 호출 할 때마다 값이 근접해 가야 한다.
//
//함수가 돌아돌때까지 다른 기능을 못하는 특성을 이용
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
//완전한 재귀 함수가 되려면 2가지 조건이 있어야 함
//1. 재귀 함수 종료 조건이 있어야 한다.
//-> 재귀 함수를 호출 하지 않는 조건
//
//2. 종료 조건에 값이 수렴 해 가야 한다.
//-> 재귀 함수를 호출 할 때마다 값이 근접해 가야 한다.
//
//함수가 돌아돌때까지 다른 기능을 못하는 특성을 이용
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
//완전한 재귀 함수가 되려면 2가지 조건이 있어야 함
//1. 재귀 함수 종료 조건이 있어야 한다.
//-> 재귀 함수를 호출 하지 않는 조건
//
//2. 종료 조건에 값이 수렴 해 가야 한다.
//-> 재귀 함수를 호출 할 때마다 값이 근접해 가야 한다.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n) 
//{
//	cout << "+" << n << endl;
//	if (n > 0)
//		Print(n - 1);		// 재귀 함수 위 쪽꺼는 먼저 실행, 밑에는 다 완료되고 실행
//	cout << "-" << n << endl; // Print의 모든 기능을 완료되기 전까지 실행되지 않음
//}
//int main()
//{
//	Print(3);
//	system("pause");
//}
//


//
///*
//완전한 재귀 함수가 되려면 2가지 조건이 있어야 함
//1. 재귀 함수 종료 조건이 있어야 한다.
//-> 재귀 함수를 호출 하지 않는 조건
//
//2. 종료 조건에 값이 수렴 해 가야 한다. 
//-> 재귀 함수를 호출 할 때마다 값이 근접해 가야 한다.
//*/
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//void Print(int n) // 끝을 표식하는 것이 없으면, 메모리가 부족해져서 터짐 ( 반환이 반드시 있어야 함 )
//{// 함수는 자기를 호출 했던 함수한테만 돌아갈 수 있다.
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
//void Print(int n) // 끝을 표식하는 것이 없으면, 메모리가 부족해져서 터짐 ( 반환이 반드시 있어야 함 )
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
//	Print(n); // 안녕~ 스택 오버플로우
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
//재귀 함수
//1. 직접 재귀 : 직접 호출
//2. 간접 재귀 : 하나 거쳐서 다시 호출
//
//함수라는 것은 기능 1번부터 10번까지 기능을 가짐
//자신의 함수를 호출한다는 것은, 그 기능이 또 다른 기능을 포함한다는 것
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
//		head = new Node(T()); // 더미 노드 -> 코드 간략화를 위해
//		tail = new Node(T()); // 더미 노드 -> 코드 간략화를 위해
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서 // 원래 이런 코드가 자료구조 내부에 있는 게 말이 안됨
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	List<int> lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
//	*/
//	//MS 계열 메소드는 대문자
//	//Google 계열 메소드는 소문자
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
//		head = new Node(T()); // 더미 노드 -> 코드 간략화를 위해
//		tail = new Node(T()); // 더미 노드 -> 코드 간략화를 위해
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서 // 원래 이런 코드가 자료구조 내부에 있는 게 말이 안됨
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	List<int> lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
//	*/
//	//MS 계열 메소드는 대문자
//	//Google 계열 메소드는 소문자
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
//		head = new Node(0); // 더미 노드 -> 코드 간략화를 위해
//		tail = new Node(0); // 더미 노드 -> 코드 간략화를 위해
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서 // 원래 이런 코드가 자료구조 내부에 있는 게 말이 안됨
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	List lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
//	*/
//	//MS 계열 메소드는 대문자
//	//Google 계열 메소드는 소문자
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
//		head = new Node(0); // 더미 노드 -> 코드 간략화를 위해
//		tail = new Node(0); // 더미 노드 -> 코드 간략화를 위해
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서 // 원래 이런 코드가 자료구조 내부에 있는 게 말이 안됨
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	List lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
//	*/
//	//MS 계열 메소드는 대문자
//	//Google 계열 메소드는 소문자
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	List lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
//	*/
//	//MS 계열 메소드는 대문자
//	//Google 계열 메소드는 소문자
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		return  head->next; // 서비스 코드에서 해드는 더미 노드지만 클라이언트 입장에서는 진짜 원소 헤드를 달라고 하는 것이기 때문에
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
//	List lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
//	*/
//	//MS 계열 메소드는 대문자
//	//Google 계열 메소드는 소문자
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		return  head->next; // 서비스 코드에서 해드는 더미 노드지만 클라이언트 입장에서는 진짜 원소 헤드를 달라고 하는 것이기 때문에
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
//	List lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	List lt; // 모든 원소를 처음부터 참조 할 수 있는 (이터레이션 할 수 있는) 인터페이스를 제공해야 한다.
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
//	일반적으로
//	Node* p = lt.GetHead();
//	lt.Next(p); // p를 다음 위치로 업데이트 해줌  //p = lt.Next();
//	lt.HasNext(p); // 다음 원소가 있니?
//	lt.GetItem(p); // p가 가리키고 있는 위치의 원소를 반환해줌
//	이런 인퍼페이스를 가지고 있으면 모든 원소를 순회(참조) 할 수 있음
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	lt.PrintNext(); // 출력 메소드를 가지고 있는 것 말이 안되는 것!(원래)
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		head = new Node(0); // 더미 노드
//		tail = new Node(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		head = AllocNode(0); // 더미 노드
//		tail = AllocNode(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrev()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		head = AllocNode(0); // 더미 노드
//		tail = AllocNode(0); // 더미 노드
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrevList()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		Node* p = head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//		while (p != tail)
//		{
//			cout << p->data << " ";
//			p = p->next;
//		}
//		cout << endl;
//	}
//	void PrintPrevList()
//	{
//		Node* p = tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//		head = AllocNode(0); // 더미 노드
//		tail = AllocNode(0); // 더미 노드
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
//	Node* p = lt.head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
//	while (p != lt.tail)
//	{
//		cout << p->data << " ";
//		p = p->next;
//	}
//	cout << endl;
//}
//void PrintPrevList(List& lt)
//{
//	Node* p = lt.tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
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
//	lt.head = AllocNode(0); // 더미 노드
//	lt.tail = AllocNode(0); // 더미 노드
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

