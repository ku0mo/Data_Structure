#include <iostream>
#include <stdlib.h>
using namespace std;

struct Node
{
	int data;
	Node* prev;
	Node* next;
};
struct List
{
	Node* head;
	Node* tail;
};
void PrintNextList(List& lt)
{
	Node* p = lt.head->next; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
	while (p != lt.tail)
	{
		cout << p->data << " ";
		p = p->next;
	}
	cout << endl;
}
void PrintPrevList(List& lt)
{
	Node* p = lt.tail->prev; // 더미 노드 다음 실제 노드들 부터 출력하기 위해서
	while (p != lt.head)
	{
		cout << p->data << " ";
		p = p->prev;
	}
	cout << endl;
}
void PrintPrevList(Node* p)
{
	while (p)
	{
		cout << p->data << " ";
		p = p->prev;
	}
	cout << endl;

}
Node* AllocNode(int data)
{
	Node* p = new Node();
	p->data = data;
	p->prev = p->next = NULL;

	return p;
}
void AddNextList(List& lt, int data)
{
	Node* ptail = lt.tail->prev;

	Node* p = AllocNode(data);
	ptail->next = p;
	p->prev = ptail;
	p->next = lt.tail;
	lt.tail->prev = p;
}
void InitList(List& lt)
{
	lt.head = AllocNode(0); // 더미 노드
	lt.tail = AllocNode(0); // 더미 노드
	lt.head->next = lt.tail;
	lt.tail->prev = lt.head;
}
void UninitList(List& lt)
{
	Node* p = lt.tail;
	while (p != NULL)
	{
		Node* pp = p->prev;
		delete p;
		p = pp;
	}
	//Node* p = lt.head;
	//while (p != NULL)
	//{
	//	Node* np = p->next;
	//	delete p;
	//	p = np;
	//}
}
int main()
{
	List lt;

	InitList(lt);

	AddNextList(lt, 10);
	AddNextList(lt, 20);
	AddNextList(lt, 30);
	AddNextList(lt, 40);
	AddNextList(lt, 50);

	PrintNextList(lt);
	PrintPrevList(lt);

	UninitList(lt);

	system("pause");
}



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
//	while ( p != lt.tail)
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
//int main()
//{
//	List lt;
//
//	lt.head = AllocNode(0); // 더미 노드
//	lt.tail = AllocNode(0); // 더미 노드
//	lt.head->next = lt.tail;
//	lt.tail->prev = lt.head;
//
//	AddNextList(lt, 10);
//	AddNextList(lt, 20);
//	AddNextList(lt, 30);
//	AddNextList(lt, 40);
//	AddNextList(lt, 50);
//
//	PrintNextList(lt);
//	PrintPrevList(lt);
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
//void PrintNextList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
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
//void AddNextList(Node* head, Node* tail, int data)
//{
//	Node* ptail = tail->prev;
//
//	Node* p = AllocNode(data);
//	ptail->next = p;
//	p->prev = ptail;
//	p->next = tail;
//	tail->prev = p;
//}
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	head = AllocNode(0); // 더미 노드
//	tail = AllocNode(0); // 더미 노드
//	head->next = tail;
//	tail->prev = head;
//
//	AddNextList(head, tail, 10);
//	AddNextList(head, tail, 20);
//	AddNextList(head, tail, 30);
//	AddNextList(head, tail, 40);
//	AddNextList(head, tail, 50);
//
//	PrintNextList(head);
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
//void PrintNextList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
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
//int main()
//{
//	Node* head = NULL;
//	Node* tail = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(10);
//	head = tail = p;
//
//	p = AllocNode(20);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	p = AllocNode(30);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	p = AllocNode(40);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//
//	p = AllocNode(50);
//	tail->next = p;
//	p->prev = tail;
//	tail = p;
//	PrintNextList(head);
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
//void PrintNextList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
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
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(10);
//	head = p;
//
//	p = AllocNode(20);
//	head->next = p;
//	p->prev = head;
//
//	p = AllocNode(30);
//	head->next->next = p;
//	p->prev = head->next;
//
//	p = AllocNode(40);
//	head->next->next->next = p;
//	p->prev = head->next->next;
//
//	p = AllocNode(50);
//	head->next->next->next->next = p;
//	p->prev = head->next->next->next;
//
//	PrintNextList(head);
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
//void PrintNextList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
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
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(10);
//	head = p;
//
//	p = AllocNode(20);
//	head->next = p;
//	p->prev = head;
//	
//	p = AllocNode(30);
//	head->next->next = p;
//	p->prev = head->next;
//
//	PrintNextList(head);
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
//void PrintNextList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
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
//int main()
//{
//	Node* head = NULL;
//	Node* p = NULL;
//
//	p = AllocNode(10);
//	head = p;
//
//	p = AllocNode(20);
//	head->next = p;
//	p->prev = head;
//
//	PrintNextList(head);
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
//void PrintNextList(Node* p)
//{
//	while (p)
//	{
//		cout << p->data << " ";
//		p = p->next;
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
//int main()
//{
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 20, NULL, NULL };
//	Node n3 = { 30, NULL, NULL };
//	Node n4 = { 40, NULL, NULL };
//	Node n5 = { 50, NULL, NULL };
//
//	n1.next = &n2;
//	n2.prev = &n1;
//	n2.next = &n3;
//	n3.prev = &n2;
//	n3.next = &n4;
//	n4.prev = &n3;
//	n4.next = &n5;
//	n5.prev = &n4;
//
//	PrintNextList(&n1);
//
//	PrintPrevList(&n5);
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
//
//int main()
//{
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 20, NULL, NULL };
//	Node n3 = { 30, NULL, NULL };
//	Node n4 = { 40, NULL, NULL };
//	Node n5 = { 50, NULL, NULL };
//	//n1.next = &n2;
//	//n2.next = &n3;
//	//n3.next = &n4;
//	//n4.next = &n5;
//
//	//n5.prev = &n4;
//	//n4.prev = &n3;
//	//n3.prev = &n2;
//	//n2.prev = &n1;
//
//	n1.next = &n2;
//
//	n2.prev = &n1;
//	n2.next = &n3;
//
//	n3.prev = &n2;
//	n3.next = &n4;
//
//	n4.prev = &n3;
//	n4.next = &n5;
//
//	n5.prev = &n4;
//	for (Node* p = &n1; p; p = p->next)
//		cout << p->data << " ";
//	cout << endl;
//
//	for (Node* p = &n5; p; p = p->prev)
//		cout << p->data << " ";
//	cout << endl;
//
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
//	Node* link;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node*& head, int data)
//{
//	Node* p = AllocNode(data);
//	p->link = head;
//	head = p;
//}
//int main()
//{
//	Node* head = NULL;
//
//	AddNode(head, 10);
//	AddNode(head, 20);
//	AddNode(head, 30);
//
//	for (Node* p = head; p; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}
//

//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void PrintNode(List& lt)
//{
//	for (Node* p = lt.head->link; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//void AddNode(List& lt, int data)
//{
//	Node* p = AllocNode(data);
//	lt.tail->link = p;
//	lt.tail = p;
//}
//void InitList(List& lt)
//{
//	lt.head = lt.tail = AllocNode(0);
//}
//void UninitList(List& lt)
//{
//	for (Node* p = lt.head; p != NULL; )
//	{
//		Node* np = p->link;
//		delete p;
//		p = np;
//	}
//}
//void RemoveList(List& lt, int data)
//{
//	Node* pp = lt.head;
//	Node* p = lt.head->link;
//	//for (Node* p = lt.head->link; p/* != NULL */ && p->link; p = p->link) // 실제 노드부터 // 널만 0주소 이기때문에, 모든 주소는 참이고 널 주소만 거짓임
//	//{
//	//	pp = p;
//	//	p = p->link;
//	//}
//	while( p && data != p->data)
//	{
//		pp = p;
//		p = p->link;
//	}
//	if (p) //p가 널이 아닐 때만
//	{
//		if (lt.tail == p) // 끝노드 지울 때
//			lt.tail = pp;
//		pp->link = p->link;
//		delete p;
//	}
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//
//	AddNode(lt, 10);
//	AddNode(lt, 20);
//	AddNode(lt, 30);
//	AddNode(lt, 40);
//	AddNode(lt, 50);
//
//	RemoveList(lt, 10);
//
//	PrintNode(lt);
//	UninitList(lt);
//	system("pause");
//}


//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	int data;
//	Node* link;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void PrintNode(List& lt)
//{
//	for (Node* p = lt.head->link; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//void AddNode(List& lt, int data)
//{
//	Node* p = AllocNode(data);
//	lt.tail->link = p;
//	lt.tail = p;
//}
//void InitList(List& lt)
//{
//	lt.head = lt.tail = AllocNode(0);
//}
//void UninitList(List& lt)
//{
//	for (Node* p = lt.head; p != NULL; )
//	{
//		Node* np = p->link;
//		delete p;
//		p = np;
//	}
//}
//int main()
//{
//	List lt;
//
//	InitList(lt);
//
//	AddNode(lt, 10);
//	AddNode(lt, 20);
//	AddNode(lt, 30);
//	AddNode(lt, 40);
//	AddNode(lt, 50);
//	AddNode(lt, 60);
//
//	PrintNode(lt);
//	UninitList(lt);
//	system("pause");
//}

//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//struct List
//{
//	Node* head;
//	Node* tail;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head->link; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* p = AllocNode(data);
//	tail->link = p;
//	tail = p;
//}
//int main()
//{
//	Node* head = AllocNode(0); // 더미 노드 // 진짜 노드는 아닌데, 코드를 간단하게 하기 위해서
//	Node* tail = head;
//
//	AddNode(head, tail, 20);
//	AddNode(head, tail, 30);
//	AddNode(head, tail, 40);
//	AddNode(head, tail, 50);
//	AddNode(head, tail, 60);
//	PrintNode(head);
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head->link; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node* head, Node* tail, int data)
//{
//	Node* p = AllocNode(data);
//	tail->link = p;
//	tail = p;
//}
//int main()
//{
//	Node* head = AllocNode(0); // 더미 노드 // 진짜 노드는 아닌데, 코드를 간단하게 하기 위해서
//	Node* tail = head;
//
//	AddNode(head, tail, 20);
//	AddNode(head, tail, 30);
//	AddNode(head, tail, 40);
//	AddNode(head, tail, 50);
//	AddNode(head, tail, 60);
//	PrintNode(head);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head->link; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node* head, int data)
//{
//	Node* p = AllocNode(data);
//	Node* tail;
//	for (tail = head; tail->link != NULL; tail = tail->link)
//		;
//	tail->link = p;
//}
//int main()
//{
//	Node* head = AllocNode(0); // 더미 노드 // 진짜 노드는 아닌데, 코드를 간단하게 하기 위해서
//
//	AddNode(head, 20);
//	AddNode(head, 30);
//	AddNode(head, 40);
//	AddNode(head, 50);
//	AddNode(head, 60);
//	PrintNode(head);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node*& head, int data)
//{
//	Node* p = AllocNode(data);
//	if (head == NULL)
//	{
//		head = p;
//		return;
//	}
//	Node* tail;
//	for (tail = head; tail->link != NULL; tail = tail->link)
//		;
//	tail->link = p;
//}
//int main()
//{
//	Node* head = NULL;
//
//	AddNode(head, 20);
//	AddNode(head, 30);
//	AddNode(head, 40);
//	AddNode(head, 50);
//	AddNode(head, 60);
//	PrintNode(head);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node* head, int data)
//{
//	Node* p = AllocNode(data);
//	Node* tail;
//	for (tail = head; tail->link != NULL; tail = tail->link)
//		;
//	tail->link = p;
//}
//int main()
//{
//	Node* head;
//	Node* p = AllocNode(10);
//	head = p;
//	AddNode(head, 20);
//	AddNode(head, 30);
//	AddNode(head, 40);
//	AddNode(head, 50);
//	AddNode(head, 60);
//	PrintNode(head);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->link = NULL;
//
//	return p;
//}
//void AddNode(Node* head, int data)
//{
//	Node* p = AllocNode(data);
//	Node* tail;
//	for (tail = head; tail->link != NULL; tail = tail->link)
//		;
//	tail->link = p;
//}
//int main()
//{
//	Node* head;
//	Node* p = AllocNode(10);
//	head = p;
//	AddNode(head, 20);
//	AddNode(head, 30);
//	AddNode(head, 40);
//	AddNode(head, 50);
//	AddNode(head, 60);
//	PrintNode(head);
//	system("pause");
//}



//#include <iostream> // heap에 만들어짐,, delete 해야함
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void PrintNode(Node* head)
//{
//	for (Node* p = head;p != NULL; p = p->link)
//		cout << p->data << endl;
//}
//void main()
//{
//	Node* head;
//	Node* p = new Node;
//	p->data = 10;
//	p->link = NULL;
//	head = p;
//
//	p = new Node;
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = new Node;
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	p = new Node;
//	p->data = 40;
//	p->link = NULL;
//	head->link->link->link = p;
//
//	p = new Node;
//	p->data = 50;
//	p->link = NULL;
//	head->link->link->link->link = p;
//
//	PrintNode(head);
//
//	system("pause");
//}



//#include <iostream> // heap에 만들어짐,, delete 해야함
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node* head;
//	Node* p = new Node;
//	p->data = 10;
//	p->link = NULL;
//	head = p;
//
//	p = new Node;
//	p->data = 20;
//	p->link = NULL;
//	head->link = p;
//
//	p = new Node;
//	p->data = 30;
//	p->link = NULL;
//	head->link->link = p;
//
//	p = new Node;
//	p->data = 40;
//	p->link = NULL;
//	head->link->link->link = p;
//
//	p = new Node;
//	p->data = 50;
//	p->link = NULL;
//	head->link->link->link->link = p;
//
//
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}




//#include <iostream> // stack에 메모리를 만듬
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node* head;
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node* head;
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//	head = &n1;
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	for (Node* p = head; p != NULL; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* link;
//};
//void main()
//{
//	Node n1 = { 10, NULL };
//	Node n2 = { 20, NULL };
//	Node n3 = { 30, NULL };
//	Node n4 = { 40, NULL };
//	Node n5 = { 50, NULL };
//	n1.link = &n2;
//	n2.link = &n3;
//	n3.link = &n4;
//	n4.link = &n5;
//
//	for (Node* p = &n1; p != NULL; p = p->link)
//		cout << p->data << endl;
//
//	system("pause");
//}