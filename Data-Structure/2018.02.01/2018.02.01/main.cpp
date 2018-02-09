#include <iostream> 
#include <stdlib.h>
#include <vector>
using namespace std;
class IteratorVector
{
public:
	int operator*() const
	{
		return 0;
	}
}; 
template <typename T>
class Vector
{
public:
	typedef IteratorVector Iterator;
public:
	Vector(int n) { }
	Iterator begin()
	{
		return Iterator();
	}
};
int main()
{
	Vector<int> v(3);
	Vector<int>::Iterator iter = v.begin();
	cout << *iter << endl;
	system("pause");
}



//#include <iostream> // Iterator가 뭔지 설명하기위해 컴파일 되게 만 함
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//template <typename T>
//class Vector
//{
//public:
//	class Iterator // 중첩 형식, 내포 형식
//	{
//	public:
//		int operator*() const
//		{
//			return 0;
//		}
//	}; // Iterator는 백터꺼다. 이 안에서만 쓴다.
//public:
//	Vector(int n) { }
//	Iterator begin()
//	{
//		return Iterator();
//	}
//};
//int main()
//{
//	Vector<int> v(3);
//	Vector<int>::Iterator iter = v.begin();
//	cout << *iter << endl;
//	system("pause");
//}



//#include <iostream>
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//int main()
//{
//	vector<int> v(3);
//	vector<int>::iterator iter = v.begin();
//	cout << *iter << endl;
//	system("pause");
//}


//#include <stack>
//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//#include <deque>
//#include <list>
//using namespace std;
//
//template<typename T = int, typename Cont=deque<T> >
//class Stack
//{
//	//vector<T> cont; //컨테이너
//	Cont cont;
//public:
//	void push(const T& data)
//	{
//		cont.push_back(data);  // 위임 ( 딜리게이트 )
//	}
//	void pop()
//	{
//		cont.pop_back(); // 위임
//	}
//	const T& top() const
//	{
//		return cont.back(); // 가장 끝의 원소 참조하는 녀석
//	}
//};
//int main()
//{
//	//Stack<int> st;
//	Stack<int,list<int>> st;
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//
//	system("pause");
//}


//#include <stack>
//#include <iostream>
//#include <vector>
//#include <stdlib.h>
//using namespace std;
//template<typename T = int>
//class Stack
//{
//	vector<T> cont; //컨테이너
//public:
//	void push(const T& data)
//	{
//		cont.push_back(data);  // 위임 ( 딜리게이트 )
//	}
//	void pop()
//	{
//		cont.pop_back(); // 위임
//	}
//	const T& top() const
//	{
//		return cont.back(); // 가장 끝의 원소 참조하는 녀석
//	}
//};
//int main()
//{
//	Stack<int> st;
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//
//	system("pause");
//}



//#include <stack>
//#include <iostream>
//#include <cstring>
//#include <vector>
//using namespace std;
//template<typename T=int>
//class Stack
//{
//	T* stack;
//	int _top;
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//public:
//	Stack(int cap = 100) : _top(0)
//	{
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		delete[] stack;
//	}
//	void push(const T& data)
//	{
//		stack[_top++] = data;
//	}
//	void pop()
//	{
//		--_top;
//	}
//	const T& top() const
//	{
//		return stack[_top - 1];
//	}
//};
//int main()
//{
//	Stack<int> st;
//
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl;
//	st.pop();
//	cout << st.top() << endl;
//
//	system("pause");
//}
//



//#include <iostream> // ??
//#include <cstdlib>
//#include <stack> // 컨테이너 어뎁터 ( 내부적으로 다른 컨테이너의 자료구조를 사용함 )
//#include <vector>
///*
//어뎁터
//-호환이 안될 때 호환 시키는 역할을 하는 것
//정의 : 어떤 컴포넌트의 인터페이스를 호환되도록 또 다른 인터페이스로 바꿈
//*/
//using namespace std;
//
//template <typename T=int> /*default 형식*/
//class Stack
//{
//	T* stack;// 정적 배열 // 컴파일 타임
//	int _top; /*정의라 초기화 할 수 없음*/
//
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	복사하지 못하도록 막아놓는 동작!
//	*/
//public:
//	Stack(int cap = 100) :_top(0)
//	{
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		_top = 0;
//		delete[] stack;
//	}
//	void push(const T& data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[_top++] = data; // 넣고 탑을 증가
//	}
//	void T& pop() // 감소만 하는
//	{
//		--_top;
//	}
//	const T& top() const // top보다 1 작은 원소 참조
//	{
//		return stack[_top-1];
//	}
//};
//void main()
//{
//	Stack<int> st;
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; // top()은 가장 위에 있는 값의 참조
//	st.pop();;// 제거하는 기능만 함.
//	cout << st.top() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <stack> // 컨테이너 어뎁터 ( 내부적으로 다른 컨테이너의 자료구조를 사용함 )
//#include <vector>
///*
//어뎁터
//-호환이 안될 때 호환 시키는 역할을 하는 것
//정의 : 어떤 컴포넌트의 인터페이스를 호환되도록 또 다른 인터페이스로 바꿈
//*/
//using namespace std;
//void main()
//{
//	stack<int, vector<int>> st;
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; // top()은 가장 위에 있는 값의 참조
//	st.pop();;// 제거하는 기능만 함.
//	cout << st.top() << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <stack> // 컨테이너 어뎁터
///*
//어뎁터
//-호환이 안될 때 호환 시키는 역할을 하는 것
//*/
//using namespace std;
//void main()
//{
//	stack<int> st;
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; // top()은 가장 위에 있는 값의 참조
//	st.pop();;// 제거하는 기능만 함.
//	cout << st.top() << endl;
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T=int> /*default 형식*/
//class Stack
//{
//	T* stack;// 정적 배열 // 컴파일 타임
//	int top; /*정의라 초기화 할 수 없음*/
//
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	복사하지 못하도록 막아놓는 동작!
//	*/
//public:
//	Stack(int cap = 100) :top(0)
//	{
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		top = 0;
//		delete[] stack;
//	}
//	void Push(const T& data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[top++] = data; // 넣고 탑을 증가
//	}
//	const T& Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//	{
//		return stack[--top];
//	}
//};
//
//void main()
//{
//	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
//	Stack<> st;
//	//Stack st2 = st; // 복사 막기 ( 종종 복사를 막아야 하는 객체들은 이렇게 복사 방어 한다. )
//	st.Push(10);
//	st.Push(20);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Stack
//{
//	T* stack;// 정적 배열 // 컴파일 타임
//	int top; /*정의라 초기화 할 수 없음*/
//
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	복사하지 못하도록 막아놓는 동작!
//	*/
//public:
//	Stack(int cap = 100) :top(0)
//	{
//		stack = new T[cap];
//	}
//	~Stack()
//	{
//		top = 0;
//		delete[] stack;
//	}
//	void Push(const T& data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[top++] = data; // 넣고 탑을 증가
//	}
//	const T& Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//	{
//		return stack[--top];
//	}
//};
//
//void main()
//{
//	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
//	Stack<int> st;
//	//Stack st2 = st; // 복사 막기 ( 종종 복사를 막아야 하는 객체들은 이렇게 복사 방어 한다. )
//	st.Push(10);
//	st.Push(20);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Stack
//{
//	int* stack;// 정적 배열 // 컴파일 타임
//	int top; /*정의라 초기화 할 수 없음*/
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	복사하지 못하도록 막아놓는 동작!
//	*/
//public:
//	Stack(int cap = 100) :top(0)
//	{
//		stack = new int[cap];
//	}
//	~Stack()
//	{
//		top = 0;
//		delete[] stack;
//	}
//	void Push(int data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[top++] = data; // 넣고 탑을 증가
//	}
//	int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//	{
//		return stack[--top];
//	}
//};
//
//void main()
//{
//	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
//	Stack st;
//	//Stack st2 = st; // 복사 막기 ( 종종 복사를 막아야 하는 객체들은 이렇게 복사 방어 한다. )
//	st.Push(10);
//	st.Push(20);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Stack
//{
//	int stack[10];
//	int top; /*정의라 초기화 할 수 없음*/
//public:
//
//	void Push(int data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[top++] = data; // 넣고 탑을 증가
//	}
//	int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//	{
//		return stack[--top];
//	}
//	void InitStack()
//	{
//		top = 0;
//	}
//	void UninitStack()
//	{
//		top = 0;
//	}
//	Stack() :top(0)
//	{
//	}
//	~Stack()
//	{
//		top = 0;
//	}
//};
//
//void main()
//{
//	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
//	Stack st;
//	st.Push(10);
//	st.Push(20);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Stack
//{
//	int stack[10];
//	int top; /*정의라 초기화 할 수 없음*/
//public:
//
//	void Push(int data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[top++] = data; // 넣고 탑을 증가
//	}
//	int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//	{
//		return stack[--top];
//	}
//	void InitStack()
//	{
//		top = 0;
//	}
//	void UninitStack()
//	{
//		top = 0;
//	}
//	Stack() :top(0)
//	{
//	}
//	~Stack()
//	{
//		top = 0;
//	}
//};
//
//void main()
//{
//	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
//	Stack st;
//	Stack ost;
//
//	st.Push(10);
//	st.Push(20);
//	ost.Push(30);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << ost.Pop() << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Stack
//{
//	int stack[10];
//	int top; /*정의라 초기화 할 수 없음*/
//public:
//	void Push(int data) // 보관 하게 하는 인터페이스 함수
//	{
//		stack[top++] = data; // 넣고 탑을 증가
//	}
//	int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//	{
//		return stack[--top];
//	}
//	void InitStack()
//	{
//		top = 0;
//	}
//	void UninitStack()
//	{
//		top = 0;
//	}
//};
//
//void main()
//{
//	// 그래서 c에서는 약속함 변수를 사용하기 전에 초기화 하자.
//	Stack st;
//
//	Stack ost;
//
//	st.InitStack();
//	ost.InitStack();
//
//	st.Push(10);
//	st.Push(20);
//	ost.Push(30);
//
//	cout << st.Pop() << endl;
//	cout << st.Pop() << endl;
//	cout << ost.Pop() << endl;
//
//
//	st.UninitStack();
//	ost.UninitStack();
//	system("pause");
//}


///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Stack
//{
//	int stack[10];
//	int top; /*정의라 초기화 할 수 없음*/
//};
//
//void Push(Stack& st, int data) // 보관 하게 하는 인터페이스 함수
//{
//	st.stack[st.top++] = data; // 넣고 탑을 증가
//}
//int Pop(Stack& st) // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return st.stack[--st.top];
//}
//void main()
//{
//	Stack st = { 0 }; // 원래 이렇게 하면 안됨 
//
//	Stack ost = { 0 };
//
//
//	Push(st, 10);
//	Push(st, 20);
//	Push(ost, 30);
//
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//	cout << Pop(ost) << endl;
//	system("pause");
//}




///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Stack
//{
//	int stack[10];
//	int top; /*정의라 초기화 할 수 없음*/
//};
//
//void Push(Stack& st, int data) // 보관 하게 하는 인터페이스 함수
//{
//	st.stack[st.top++] = data; // 넣고 탑을 증가
//}
//int Pop(Stack& st) // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return st.stack[--st.top];
//}
//void main()
//{
//	Stack st = { 0 };
//
//	Stack ost = { 0 };
//
//
//	Push(st, 10);
//	Push(st, 20);
//	Push(ost, 30);
//
//	cout << Pop(st) << endl;
//	cout << Pop(st) << endl;
//	cout << Pop(ost) << endl;
//	system("pause");
//}




///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void Push(int* stack, int& top, int data) // 보관 하게 하는 인터페이스 함수
//{
//	stack[top++] = data; // 넣고 탑을 증가
//}
//int Pop(int* stack, int& top) // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return stack[--top];
//}
//void main()
//{
//	int stack[10];
//	int top = 0; // 저장될 위치를 보관
//
//	int ostack[10];
//	int otop = 0; // 저장될 위치를 보관
//
//
//	Push(stack, top, 10);
//	Push(stack, top, 20);
//	Push(ostack, otop, 30);
//
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//	cout << Pop(ostack, otop) << endl;
//	system("pause");
//}

///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void Push(int* stack, int& top, int data) // 보관 하게 하는 인터페이스 함수
//{
//	stack[top++] = data; // 넣고 탑을 증가
//}
//int Pop(int* stack, int& top) // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return stack[--top];
//}
//void main()
//{
//	int stack[10];
//	int top = 0; // 저장될 위치를 보관
//
//	Push(stack, top, 10);
//	Push(stack, top, 20);
//	Push(stack, top, 30);
//
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//	cout << Pop(stack, top) << endl;
//	system("pause");
//}



///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int stack[10];
//int top = 0; // 저장될 위치를 보관
//
//void Push(int data) // 보관 하게 하는 인터페이스 함수
//{
//	stack[top++] = data; // 넣고 탑을 증가
//}
//int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return stack[--top];
//}
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	system("pause");
//}




///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int stack[10];
//int top = 0; // 저장될 위치를 보관
//
//void Push(int data) // 보관 하게 하는 인터페이스 함수
//{
//	stack[top++] = data; // 넣고 탑을 증가
//}
//int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return stack[--top];
//}
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	system("pause");
//}



///*
//스택은 IN, OUT 규칙만 갖음
//인터페이스
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <stdlib.h>
//using namespace std;
//int stack[10];
//int top = 0;
//
//void Push(int data) // 보관 하게 하는 인터페이스 함수
//{
//	stack[top++] = data;
//}
//int Pop() // 꺼내면서 제거도 같이 하는 인터페이스 함수
//{
//	return stack[--top];
//}
//void main()
//{
//	Push(10);
//	Push(20);
//	Push(30);
//
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	cout << Pop() << endl;
//	system("pause");
//}



///*
//프로그램				->				자료구조 : 자료들을 조직하는 방법 ( 몇가지 정형화된 구조들이 있음 )
//명령어/데이터의 집합					목	적	 : 효율적인 좋은 프로그램들을 만들어보자
//
//문제를 해결 하는 명령어 집합 -> 알고리즘 : 무수한 방법들이 존재
//
//*/
//#include <iostream>
//using namespace std;
//void main()
//{
//	
//}