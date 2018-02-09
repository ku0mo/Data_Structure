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



//#include <iostream> // Iterator�� ���� �����ϱ����� ������ �ǰ� �� ��
//#include <stdlib.h>
//#include <vector>
//using namespace std;
//template <typename T>
//class Vector
//{
//public:
//	class Iterator // ��ø ����, ���� ����
//	{
//	public:
//		int operator*() const
//		{
//			return 0;
//		}
//	}; // Iterator�� ���Ͳ���. �� �ȿ����� ����.
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
//	//vector<T> cont; //�����̳�
//	Cont cont;
//public:
//	void push(const T& data)
//	{
//		cont.push_back(data);  // ���� ( ��������Ʈ )
//	}
//	void pop()
//	{
//		cont.pop_back(); // ����
//	}
//	const T& top() const
//	{
//		return cont.back(); // ���� ���� ���� �����ϴ� �༮
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
//	vector<T> cont; //�����̳�
//public:
//	void push(const T& data)
//	{
//		cont.push_back(data);  // ���� ( ��������Ʈ )
//	}
//	void pop()
//	{
//		cont.pop_back(); // ����
//	}
//	const T& top() const
//	{
//		return cont.back(); // ���� ���� ���� �����ϴ� �༮
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
//#include <stack> // �����̳� ��� ( ���������� �ٸ� �����̳��� �ڷᱸ���� ����� )
//#include <vector>
///*
//���
//-ȣȯ�� �ȵ� �� ȣȯ ��Ű�� ������ �ϴ� ��
//���� : � ������Ʈ�� �������̽��� ȣȯ�ǵ��� �� �ٸ� �������̽��� �ٲ�
//*/
//using namespace std;
//
//template <typename T=int> /*default ����*/
//class Stack
//{
//	T* stack;// ���� �迭 // ������ Ÿ��
//	int _top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	�������� ���ϵ��� ���Ƴ��� ����!
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
//	void push(const T& data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[_top++] = data; // �ְ� ž�� ����
//	}
//	void T& pop() // ���Ҹ� �ϴ�
//	{
//		--_top;
//	}
//	const T& top() const // top���� 1 ���� ���� ����
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
//	cout << st.top() << endl; // top()�� ���� ���� �ִ� ���� ����
//	st.pop();;// �����ϴ� ��ɸ� ��.
//	cout << st.top() << endl;
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <stack> // �����̳� ��� ( ���������� �ٸ� �����̳��� �ڷᱸ���� ����� )
//#include <vector>
///*
//���
//-ȣȯ�� �ȵ� �� ȣȯ ��Ű�� ������ �ϴ� ��
//���� : � ������Ʈ�� �������̽��� ȣȯ�ǵ��� �� �ٸ� �������̽��� �ٲ�
//*/
//using namespace std;
//void main()
//{
//	stack<int, vector<int>> st;
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; // top()�� ���� ���� �ִ� ���� ����
//	st.pop();;// �����ϴ� ��ɸ� ��.
//	cout << st.top() << endl;
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <stack> // �����̳� ���
///*
//���
//-ȣȯ�� �ȵ� �� ȣȯ ��Ű�� ������ �ϴ� ��
//*/
//using namespace std;
//void main()
//{
//	stack<int> st;
//	st.push(10);
//	st.push(20);
//
//	cout << st.top() << endl; // top()�� ���� ���� �ִ� ���� ����
//	st.pop();;// �����ϴ� ��ɸ� ��.
//	cout << st.top() << endl;
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T=int> /*default ����*/
//class Stack
//{
//	T* stack;// ���� �迭 // ������ Ÿ��
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	�������� ���ϵ��� ���Ƴ��� ����!
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
//	void Push(const T& data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[top++] = data; // �ְ� ž�� ����
//	}
//	const T& Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
//	{
//		return stack[--top];
//	}
//};
//
//void main()
//{
//	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
//	Stack<> st;
//	//Stack st2 = st; // ���� ���� ( ���� ���縦 ���ƾ� �ϴ� ��ü���� �̷��� ���� ��� �Ѵ�. )
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
//	T* stack;// ���� �迭 // ������ Ÿ��
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	�������� ���ϵ��� ���Ƴ��� ����!
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
//	void Push(const T& data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[top++] = data; // �ְ� ž�� ����
//	}
//	const T& Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
//	{
//		return stack[--top];
//	}
//};
//
//void main()
//{
//	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
//	Stack<int> st;
//	//Stack st2 = st; // ���� ���� ( ���� ���縦 ���ƾ� �ϴ� ��ü���� �̷��� ���� ��� �Ѵ�. )
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
//	int* stack;// ���� �迭 // ������ Ÿ��
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//	Stack(const Stack&);
//	const Stack& operator=(const Stack&);
//	/*
//	�������� ���ϵ��� ���Ƴ��� ����!
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
//	void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[top++] = data; // �ְ� ž�� ����
//	}
//	int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
//	{
//		return stack[--top];
//	}
//};
//
//void main()
//{
//	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
//	Stack st;
//	//Stack st2 = st; // ���� ���� ( ���� ���縦 ���ƾ� �ϴ� ��ü���� �̷��� ���� ��� �Ѵ�. )
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
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//public:
//
//	void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[top++] = data; // �ְ� ž�� ����
//	}
//	int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
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
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//public:
//
//	void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[top++] = data; // �ְ� ž�� ����
//	}
//	int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
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
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//public:
//	void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//	{
//		stack[top++] = data; // �ְ� ž�� ����
//	}
//	int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//	// �׷��� c������ ����� ������ ����ϱ� ���� �ʱ�ȭ ����.
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
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
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//};
//
//void Push(Stack& st, int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	st.stack[st.top++] = data; // �ְ� ž�� ����
//}
//int Pop(Stack& st) // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
//{
//	return st.stack[--st.top];
//}
//void main()
//{
//	Stack st = { 0 }; // ���� �̷��� �ϸ� �ȵ� 
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
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
//	int top; /*���Ƕ� �ʱ�ȭ �� �� ����*/
//};
//
//void Push(Stack& st, int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	st.stack[st.top++] = data; // �ְ� ž�� ����
//}
//int Pop(Stack& st) // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void Push(int* stack, int& top, int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	stack[top++] = data; // �ְ� ž�� ����
//}
//int Pop(int* stack, int& top) // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
//{
//	return stack[--top];
//}
//void main()
//{
//	int stack[10];
//	int top = 0; // ����� ��ġ�� ����
//
//	int ostack[10];
//	int otop = 0; // ����� ��ġ�� ����
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//
//void Push(int* stack, int& top, int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	stack[top++] = data; // �ְ� ž�� ����
//}
//int Pop(int* stack, int& top) // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
//{
//	return stack[--top];
//}
//void main()
//{
//	int stack[10];
//	int top = 0; // ����� ��ġ�� ����
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int stack[10];
//int top = 0; // ����� ��ġ�� ����
//
//void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	stack[top++] = data; // �ְ� ž�� ����
//}
//int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
//PUSH
//POP
//Stack = LIFO
//*/
//
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int stack[10];
//int top = 0; // ����� ��ġ�� ����
//
//void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	stack[top++] = data; // �ְ� ž�� ����
//}
//int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//������ IN, OUT ��Ģ�� ����
//�������̽�
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
//void Push(int data) // ���� �ϰ� �ϴ� �������̽� �Լ�
//{
//	stack[top++] = data;
//}
//int Pop() // �����鼭 ���ŵ� ���� �ϴ� �������̽� �Լ�
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
//���α׷�				->				�ڷᱸ�� : �ڷ���� �����ϴ� ��� ( ��� ����ȭ�� �������� ���� )
//��ɾ�/�������� ����					��	��	 : ȿ������ ���� ���α׷����� ������
//
//������ �ذ� �ϴ� ��ɾ� ���� -> �˰��� : ������ ������� ����
//
//*/
//#include <iostream>
//using namespace std;
//void main()
//{
//	
//}