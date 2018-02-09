///*
//heap 자료구조
//원소들이 2진 틀리로 구성이 된 상태에서
//
//최대 heap : 모든 부모들이 자식 노드들보다 큼
//
//최소 heap : 모든 자식들이 부모 노드들보다 큼
//
//연산 Push, Pop 두개가 존재
//
//heap의 구조를 이용해서 정렬하는 정렬 알고리즘을 Heap Sort 라고 함
//
//연속한 데이터 구조로 트리를 표현하려면 완전 2진트리 조건을 만족해야 함
//
//			40(1)
//			/   \
//	50(2)   	  20(2)
//	/	\		/		\
//90(3)   10(4)  80(5)   60(6)			논리적 트리
///  \	/
//30(7) 70(8)  100(9)
//
//만약에 인덱스 순서에 따라서 배열에 넣으면, 그 배열을 완전 이진 트리라고 할 수 있음
//0  null
//1	40
//2	50
//3	20										물리적 트리
//4	90
//5	10
//6	80
//...
//
//
//i라는 레벨 위치에 왼쪽 자식의 인덱스 위치는 i*2
//오른쪽 자식의 인덱스 위치는 i*2 + 1
//
//k라는 자식이 있을 때 부모는 k/2 하면 부모의 인덱스가 될 수 있음
//
//다른 언어의 대부분은 heap은 자료구조로 만들어져있음.
//근데 STL은 알고리즘으로 되 있음.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int size = 0; // heap에 담겨 있는 원소의 개수로 할거야..
//
//	size = 10;
//	make_heap(list, list + size); // 10개의 원소를 heap구조로 만들어내라! push 10번 한거랑 같음
//	PrintList(list, size);
//	
//	sort_heap(list, list + size); // pop을 10번 한거랑 같음
//	size = 0;
//	PrintList(list, size);
//
//	PrintList(list, 10);
//	system("pause");
//}
//



///*
//heap 자료구조
//원소들이 2진 틀리로 구성이 된 상태에서
//
//최대 heap : 모든 부모들이 자식 노드들보다 큼
//
//최소 heap : 모든 자식들이 부모 노드들보다 큼
//
//연산 Push, Pop 두개가 존재
//
//heap의 구조를 이용해서 정렬하는 정렬 알고리즘을 Heap Sort 라고 함
//
//연속한 데이터 구조로 트리를 표현하려면 완전 2진트리 조건을 만족해야 함
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			논리적 트리
///  \	/
//30(7) 70(8)  100(9)
//
//만약에 인덱스 순서에 따라서 배열에 넣으면, 그 배열을 완전 이진 트리라고 할 수 있음
//0  null
//1	40
//2	50
//3	20										물리적 트리
//4	90
//5	10
//6	80
//...
//
//
//i라는 레벨 위치에 왼쪽 자식의 인덱스 위치는 i*2
//오른쪽 자식의 인덱스 위치는 i*2 + 1
//
//k라는 자식이 있을 때 부모는 k/2 하면 부모의 인덱스가 될 수 있음
//
//다른 언어의 대부분은 heap은 자료구조로 만들어져있음.
//근데 STL은 알고리즘으로 되 있음.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int size = 0; // heap에 담겨 있는 원소의 개수로 할거야..
//
//	size = 10;
//	make_heap(list, list + size); // 10개의 원소를 heap구조로 만들어내라!
//
//	PrintList(list, size);
//	pop_heap(list, list + size); // pop은 무조건 root를 빼, 근데 알고리즘이라 가장 밑으로 보냄,
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//
//	PrintList(list, size);
//	PrintList(list, 10);
//	system("pause");
//}
//


///*
//heap 자료구조
//원소들이 2진 틀리로 구성이 된 상태에서
//
//최대 heap : 모든 부모들이 자식 노드들보다 큼
//
//최소 heap : 모든 자식들이 부모 노드들보다 큼
//
//연산 Push, Pop 두개가 존재
//
//heap의 구조를 이용해서 정렬하는 정렬 알고리즘을 Heap Sort 라고 함
//
//연속한 데이터 구조로 트리를 표현하려면 완전 2진트리 조건을 만족해야 함
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			논리적 트리
///  \	/
//30(7) 70(8)  100(9)
//
//만약에 인덱스 순서에 따라서 배열에 넣으면, 그 배열을 완전 이진 트리라고 할 수 있음
//0  null
//1	40
//2	50
//3	20										물리적 트리
//4	90
//5	10
//6	80
//...
//
//
//i라는 레벨 위치에 왼쪽 자식의 인덱스 위치는 i*2
//오른쪽 자식의 인덱스 위치는 i*2 + 1
//
//k라는 자식이 있을 때 부모는 k/2 하면 부모의 인덱스가 될 수 있음
//
//다른 언어의 대부분은 heap은 자료구조로 만들어져있음.
//근데 STL은 알고리즘으로 되 있음.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int size = 0; // heap에 담겨 있는 원소의 개수로 할거야..
//
//				  //make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//
//	PrintList(list, size);
//	pop_heap(list, list + size); // pop은 무조건 root를 빼, 근데 알고리즘이라 가장 밑으로 보냄,
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//	PrintList(list, size);
//	--size;
//
//	PrintList(list, size);
//	PrintList(list, 10);
//	system("pause");
//}
//




///*
//heap 자료구조
//원소들이 2진 틀리로 구성이 된 상태에서
//
//최대 heap : 모든 부모들이 자식 노드들보다 큼
//
//최소 heap : 모든 자식들이 부모 노드들보다 큼
//
//연산 Push, Pop 두개가 존재
//
//heap의 구조를 이용해서 정렬하는 정렬 알고리즘을 Heap Sort 라고 함
//
//연속한 데이터 구조로 트리를 표현하려면 완전 2진트리 조건을 만족해야 함
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			논리적 트리
///  \	/
//30(7) 70(8)  100(9)
//
//만약에 인덱스 순서에 따라서 배열에 넣으면, 그 배열을 완전 이진 트리라고 할 수 있음
//0  null
//1	40
//2	50
//3	20										물리적 트리
//4	90
//5	10
//6	80
//...
//
//
//i라는 레벨 위치에 왼쪽 자식의 인덱스 위치는 i*2
//오른쪽 자식의 인덱스 위치는 i*2 + 1
//
//k라는 자식이 있을 때 부모는 k/2 하면 부모의 인덱스가 될 수 있음
//
//다른 언어의 대부분은 heap은 자료구조로 만들어져있음.
//근데 STL은 알고리즘으로 되 있음.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int size = 0; // heap에 담겨 있는 원소의 개수로 할거야..
//
//	//make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//	++size;
//	push_heap(list, list + size); //iterator 시작, iterator 끝
//
//	PrintList(list, size);
//
//
//	system("pause");
//}




///*
//heap 자료구조
//원소들이 2진 틀리로 구성이 된 상태에서
//
//최대 heap : 모든 부모들이 자식 노드들보다 큼
//
//최소 heap : 모든 자식들이 부모 노드들보다 큼
//
//연산 Push, Pop 두개가 존재
//
//heap의 구조를 이용해서 정렬하는 정렬 알고리즘을 Heap Sort 라고 함
//
//연속한 데이터 구조로 트리를 표현하려면 완전 2진트리 조건을 만족해야 함
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			논리적 트리
///  \	/
//30(7) 70(8)  100(9)
//
//만약에 인덱스 순서에 따라서 배열에 넣으면, 그 배열을 완전 이진 트리라고 할 수 있음
//0  null
//1	40
//2	50
//3	20										물리적 트리
//4	90
//5	10
//6	80
//...
//
//
//i라는 레벨 위치에 왼쪽 자식의 인덱스 위치는 i*2
//오른쪽 자식의 인덱스 위치는 i*2 + 1
//
//k라는 자식이 있을 때 부모는 k/2 하면 부모의 인덱스가 될 수 있음
//
//다른 언어의 대부분은 heap은 자료구조로 만들어져있음.
//근데 STL은 알고리즘으로 되 있음. 
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int size = 10;
//
//	//make_heap(list, list + size);
//	push_heap(list, list + 1); //iterator 시작, iterator 끝
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	PrintList(list, 5);
//
//	system("pause");
//}




///*
//heap 자료구조
//원소들이 2진 틀리로 구성이 된 상태에서
//
//최대 heap : 모든 부모들이 자식 노드들보다 큼
//
//최소 heap : 모든 자식들이 부모 노드들보다 큼
//
//연산 Push, Pop 두개가 존재
//
//heap의 구조를 이용해서 정렬하는 정렬 알고리즘을 Heap Sort 라고 함
//
//연속한 데이터 구조로 트리를 표현하려면 완전 2진트리 조건을 만족해야 함
//
//			   40(1)
//			   /   \
//		50(2)   	  20(2)
//		/	\		/		\
//	90(3)   10(4)  80(5)   60(6)			논리적 트리
//	/  \	/
// 30(7) 70(8)  100(9)
//
// 만약에 인덱스 순서에 따라서 배열에 넣으면, 그 배열을 완전 이진 트리라고 할 수 있음
// 0  null
// 1	40
// 2	50
// 3	20										물리적 트리
// 4	90
// 5	10
// 6	80
// ...
//
//
//i라는 레벨 위치에 왼쪽 자식의 인덱스 위치는 i*2
//				오른쪽 자식의 인덱스 위치는 i*2 + 1
//
//k라는 자식이 있을 때 부모는 k/2 하면 부모의 인덱스가 될 수 있음
//
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int main()
//{
//	int list[10] = { 40, 50, 20, 90, 10, 80, 60, 30, 70, 100 };
//	int size = 10;
//	PrintList(list, size);
//
//	make_heap(list, list + size);
//	PrintList(list, size);
//	sort_heap(list, list + size);
//	PrintList(list, size);
//
//	system("pause");
//}
//
//



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//class Btree
//{
//
//	Node* root;
//
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node;
//		p->data = data;
//		p->lchild = p->rchild = NULL;
//		return p;
//	}
//	void Inorder(Node* p)    //p-현재위치
//	{
//		if (p)
//		{   //inorder
//			Inorder(p->lchild);
//			cout << p->data << " ";
//			Inorder(p->rchild);
//		}
//	}
//	void Preorder(Node* p)    //p-현재위치
//	{
//		if (p)
//		{
//			cout << p->data << " ";
//			Preorder(p->lchild);
//			Preorder(p->rchild);
//		}
//	}
//	void Postorder(Node* p)    //p-현재위치
//	{
//		if (p)
//		{
//			Postorder(p->lchild);
//			Postorder(p->rchild);
//			cout << p->data << " ";
//		}
//	}
//	void levelorder(Node* root)     //queue와 비슷함
//	{
//		if (root)
//			return;
//		//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//		queue<Node*> q;
//		q.push(root);
//		while (!q.empty())
//		{
//			Node* cur = q.front();
//			q.pop();
//			cout << cur->data << " ";
//			if (cur->lchild)
//				q.push(cur->lchild);
//			if (cur->rchild)
//				q.push(cur->rchild);
//		}
//	}
//	void Destory(Node* root)
//	{
//		if (root == NULL)
//			return;
//		queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//		q.push(root);
//
//		while (!q.empty()) //비었으면 빠져나가라.
//		{
//			Node* cur = q.front();
//			q.pop();//원소를 참조.
//					//cout << cur->data << " ";
//			if (cur->lchild) //lchild가 널이아니면 
//				q.push(cur->lchild); //담아라.
//			if (cur->rchild)
//				q.push(cur->rchild);
//			delete cur;
//		}
//	}
//	void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//	{
//		if (root == NULL)   //종료조건
//		{
//			root = AllocNode(data);
//			return;
//		}
//		{
//			Node* p = root;
//			Node* pp = p;   //부모주소를 기억하도록
//			while (p)   //p가 NULL일때까지 돌림
//			{
//				pp = p;//부모주소를 넣어준다
//				if (p->data > data)
//					p = p->lchild;     //p는 새로운 주소로 된다
//				else
//					p = p->rchild;
//			}
//			if (pp->data > data)
//				pp->lchild = AllocNode(data);
//			else
//				pp->rchild = AllocNode(data);
//		}
//	}
//	void SearchNode(Node* p, int data) // 재귀
//	{
//		if (p == NULL)
//		{
//			cout << "찾는 원소 없음" << endl;
//			return;
//		}
//
//		if (p->data == data)
//		{
//			cout << "찾음 : " << data << endl;
//			return;
//		}
//
//		if (p->data > data)
//			SearchNode(p->lchild, data);
//		else
//			SearchNode(p->rchild, data);
//	}
//	//Node* SearchNode(Node* root, int data) // 루프
//	//{
//	//	if (root == NULL)
//	//		return NULL;
//	//	Node* p = root;
//	//	while (p)
//	//	{
//	//		if (p->data == data)
//	//			return p;
//	//		else if (p->data > data)
//	//			p = p->lchild;
//	//		else
//	//			p = p->rchild;
//	//	}
//	//	return NULL;
//	//
//	//}
//	Node* RemoveNode(Node* p, int data)
//	{
//		if (p == NULL)
//			return NULL;
//		if (p->data > data)
//			p->lchild = RemoveNode(p->lchild, data);
//		else if (p->data < data)
//			p->rchild = RemoveNode(p->rchild, data);
//		else
//		{
//			//1. 차수 0 // 단말 노드인 경우
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2. 차수 1, 왼쪽, 오른쪽
//			else if (p->lchild != NULL && p->rchild == NULL)
//			{
//				Node* lchild = p->lchild;
//				delete p;
//				return lchild;
//			}
//			else if (p->lchild == NULL && p->rchild != NULL)
//			{
//				Node* rchild = p->rchild;
//				delete p;
//				return rchild;
//			}
//			//3. 차수 2인 경우
//			else
//			{
//				Node* np = p->rchild;
//				Node* npp = p;
//				while (np->lchild)
//				{
//					npp = np;
//					np = np->lchild;
//				}
//				p->data = np->data;
//				if (p == npp)
//					npp->rchild = np->rchild;
//				else
//					npp->lchild = np->rchild;
//				delete np;
//				return p;
//			}
//
//		}
//		return p;
//	}
//	//////////interface//////////
//public:
//	Btree() : root(NULL) { }
//	~Btree() { Destory(root); }
//	void Add(int data)
//	{
//		AddNode(root, data);
//	}
//	void Remove(int data)
//	{
//		root = RemoveNode(root, data);
//	}
//	void Inorder()
//	{
//		Inorder(root);
//	}
//	void Preorder()
//	{
//		Preorder(root);
//	}
//
//};
//int main()
//{
//	Btree t;
//
//	t.Add(50); //return 으로 만듬.
//	t.Add(30);
//	t.Add(70);
//	t.Add(76);
//	t.Add(40);
//	t.Add(10);
//	t.Add(60);
//
//	t.Remove(30);
//	t.Inorder();
//
//	system("pause");
//}






//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//class Btree
//{
//
//	Node* root;
//
//	Node* AllocNode(int data)
//	{
//		Node* p = new Node;
//		p->data = data;
//		p->lchild = p->rchild = NULL;
//		return p;
//	}
//	void Inorder(Node* p)    //p-현재위치
//	{
//		if (p)
//		{   //inorder
//			Inorder(p->lchild);
//			cout << p->data << " ";
//			Inorder(p->rchild);
//		}
//	}
//	void preorder(Node* p)    //p-현재위치
//	{
//		if (p)
//		{
//			cout << p->data << " ";
//			preorder(p->lchild);
//			preorder(p->rchild);
//		}
//	}
//	void postorder(Node* p)    //p-현재위치
//	{
//		if (p)
//		{
//			postorder(p->lchild);
//			postorder(p->rchild);
//			cout << p->data << " ";
//		}
//	}
//	void levelorder(Node* root)     //queue와 비슷함
//	{
//		if (root)
//			return;
//		//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//		queue<Node*> q;
//		q.push(root);
//		while (!q.empty())
//		{
//			Node* cur = q.front();
//			q.pop();
//			cout << cur->data << " ";
//			if (cur->lchild)
//				q.push(cur->lchild);
//			if (cur->rchild)
//				q.push(cur->rchild);
//		}
//	}
//	void Destory(Node* root)
//	{
//		if (root == NULL)
//			return;
//		queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//		q.push(root);
//
//		while (!q.empty()) //비었으면 빠져나가라.
//		{
//			Node* cur = q.front();
//			q.pop();//원소를 참조.
//					//cout << cur->data << " ";
//			if (cur->lchild) //lchild가 널이아니면 
//				q.push(cur->lchild); //담아라.
//			if (cur->rchild)
//				q.push(cur->rchild);
//			delete cur;
//		}
//	}
//	void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//	{
//		if (root == NULL)   //종료조건
//		{
//			root = AllocNode(data);
//			return;
//		}
//		{
//			Node* p = root;
//			Node* pp = p;   //부모주소를 기억하도록
//			while (p)   //p가 NULL일때까지 돌림
//			{
//				pp = p;//부모주소를 넣어준다
//				if (p->data > data)
//					p = p->lchild;     //p는 새로운 주소로 된다
//				else
//					p = p->rchild;
//			}
//			if (pp->data > data)
//				pp->lchild = AllocNode(data);
//			else
//				pp->rchild = AllocNode(data);
//		}
//	}
//	void SearchNode(Node* p, int data) // 재귀
//	{
//		if (p == NULL)
//		{
//			cout << "찾는 원소 없음" << endl;
//			return;
//		}
//
//		if (p->data == data)
//		{
//			cout << "찾음 : " << data << endl;
//			return;
//		}
//
//		if (p->data > data)
//			SearchNode(p->lchild, data);
//		else
//			SearchNode(p->rchild, data);
//	}
//	//Node* SearchNode(Node* root, int data) // 루프
//	//{
//	//	if (root == NULL)
//	//		return NULL;
//	//	Node* p = root;
//	//	while (p)
//	//	{
//	//		if (p->data == data)
//	//			return p;
//	//		else if (p->data > data)
//	//			p = p->lchild;
//	//		else
//	//			p = p->rchild;
//	//	}
//	//	return NULL;
//	//
//	//}
//	Node* RemoveNode(Node* p, int data)
//	{
//		if (p == NULL)
//			return NULL;
//		if (p->data > data)
//			p->lchild = RemoveNode(p->lchild, data);
//		else if (p->data < data)
//			p->rchild = RemoveNode(p->rchild, data);
//		else
//		{
//			//1. 차수 0 // 단말 노드인 경우
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2. 차수 1, 왼쪽, 오른쪽
//			else if (p->lchild != NULL && p->rchild == NULL)
//			{
//				Node* lchild = p->lchild;
//				delete p;
//				return lchild;
//			}
//			else if (p->lchild == NULL && p->rchild != NULL)
//			{
//				Node* rchild = p->rchild;
//				delete p;
//				return rchild;
//			}
//			//3. 차수 2인 경우
//			else
//			{
//				Node* np = p->rchild;
//				Node* npp = p;
//				while (np->lchild)
//				{
//					npp = np;
//					np = np->lchild;
//				}
//				p->data = np->data;
//				if (p == npp)
//					npp->rchild = np->rchild;
//				else
//					npp->lchild = np->rchild;
//				delete np;
//				return p;
//			}
//
//		}
//		return p;
//	}
//	//////////interface//////////
//public:
//	Btree() : root(NULL) { }
//	~Btree() { Destory(root); }
//	void Add(int data)
//	{
//		AddNode(root, data);
//	}
//	void Remove(int data)
//	{
//		root = RemoveNode(root, data);
//	}
//	void Inorder()
//	{
//		Inorder(root);
//	}
//
//};
//int main()
//{
//	Btree t;
//
//	t.Add(50); //return 으로 만듬.
//	t.Add(30);
//	t.Add(70);
//	t.Add(76);
//	t.Add(40);
//	t.Add(10);
//	t.Add(60);
//	
//	t.Remove(30);
//	t.Inorder();
//
//	system("pause");
//}
//




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//Node* RemoveNode(Node* p, int data)
//{
//	if (p == NULL)
//		return NULL;
//	if (p->data > data)
//		p->lchild = RemoveNode(p->lchild, data);
//	else if (p->data < data)
//		p->rchild = RemoveNode(p->rchild, data);
//	else
//	{
//		//1. 차수 0 // 단말 노드인 경우
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. 차수 1, 왼쪽, 오른쪽
//		else if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild;
//			delete p;
//			return lchild;
//		}
//		else if (p->lchild == NULL && p->rchild != NULL)
//		{
//			Node* rchild = p->rchild;
//			delete p;
//			return rchild;
//		}
//		//3. 차수 2인 경우
//		else
//		{
//			Node* np = p->rchild;
//			Node* npp = p;
//			while (np->lchild)
//			{
//				npp = np;
//				np = np->lchild;
//			}
//			p->data = np->data;
//			if (p == npp)
//				npp->rchild = np->rchild;
//			else
//				npp->lchild = np->rchild;
//			delete np;
//			return p;
//		}
//
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 79);
//	AddNode(root, 76);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 55);
//	AddNode(root, 57);
//
//	root = RemoveNode(root, 30);
//	Inorder(root);
//
//	Destory(root);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//Node* RemoveNode(Node* p, int data)
//{
//	if (p == NULL)
//		return NULL;
//	if (p->data > data)
//		p->lchild = RemoveNode(p->lchild, data);
//	else if (p->data < data)
//		p->rchild = RemoveNode(p->rchild, data);
//	else
//	{
//		//1. 차수 0 // 단말 노드인 경우
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. 차수 1, 왼쪽, 오른쪽
//		else if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild;
//			delete p;
//			return lchild;
//		}
//		else if (p->lchild == NULL && p->rchild != NULL)
//		{
//			Node* rchild = p->rchild;
//			delete p;
//			return rchild;
//		}
//		//3. 차수 2인 경우
//		else
//		{
//			Node* np = p->rchild;
//			Node* npp = p;
//			while (np->lchild)
//			{
//				npp = np;
//				np = np->lchild;
//			}
//			p->data = np->data;
//			npp->lchild = np->rchild;
//			delete np;
//			return p;
//		}
//
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 79);
//	AddNode(root, 76);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 55);
//	AddNode(root, 57);
//
//	root = RemoveNode(root, 70);
//	Inorder(root);
//
//	Destory(root);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//Node* RemoveNode(Node* p, int data)
//{
//	if (p == NULL)
//		return NULL;
//	if (p->data > data)
//		p->lchild = RemoveNode(p->lchild, data);
//	else if (p->data < data)
//		p->rchild = RemoveNode(p->rchild, data);
//	else
//	{
//		//1. 차수 0 // 단말 노드인 경우
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. 차수 1, 왼쪽, 오른쪽
//		if (p->lchild != NULL && p->rchild == NULL)
//		{
//			Node* lchild = p->lchild;
//			delete p;
//			return lchild;
//		}
//		if (p->lchild == NULL && p->rchild != NULL)
//		{
//			Node* rchild = p->rchild;
//			delete p;
//			return rchild;
//		}
//		//3. 차수 2인 경우
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 55);
//	AddNode(root, 57);
//
//	root = RemoveNode(root, 60);
//	Inorder(root);
//
//	Destory(root);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//Node* RemoveNode(Node* p, int data)
//{
//	if (p == NULL)
//		return NULL;
//	if (p->data > data)
//		p->lchild = RemoveNode(p->lchild, data);
//	else if (p->data < data)
//		p->rchild = RemoveNode(p->rchild, data);
//	else
//	{
//		//1. 차수 0 // 단말 노드인 경우
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. 차수 1, 왼쪽, 오른쪽
//		if (p->lchild == NULL && p->rchild != NULL || p->rchild != NULL && p->rchild == NULL)
//		{
//
//		}
//		//3. 차수 2인 경우
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	root = RemoveNode(root, 40);
//	Inorder(root);
//
//	Destory(root);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//		//cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//void RemoveNode(Node* root, int data)
//{
//	if (root == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//	Node* p = root;
//	Node* pp = p;
//	while (p)
//	{
//		if (p->data == data)
//		{
//			cout << "삭제 : " << p->data << endl;
//			delete p;
//			if (pp->data > data)
//				pp->lchild = NULL;
//			else
//				pp->rchild = NULL;
//			return;
//		}
//		pp = p;
//		p = (p->data > data) ? p->lchild : p->rchild;
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	RemoveNode(root, 40);
//	Inorder(root);
//
//	Destory(root);
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//void RemoveNode(Node* root, int data)
//{
//	if (root == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//	Node* p = root;
//	while (p)
//	{
//		if (p->data == data)
//		{
//			cout << "삭제 : " << p->data << endl;
//		}
//		p = (p->data > data) ? p->lchild : p->rchild;
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	RemoveNode(root, 40);
//
//	Destory(root);
//	system("pause");
//}


//
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s, char* buf)
//{
//	if (*s != NULL)
//	{
//		int size = strlen(s);
//		cout << "+" << *s << " : " << size - 1 << endl;
//		buf[size - 1] = *s;
//		PrintString(s + 1, buf);
//		cout << "-" << *s << " : " << size - 1 << endl;
//	}
//}
//int main()
//{
//	char buf[100] = { 0 };
//	PrintString("ABCDEF", buf);
//	system("pause");
//}
//
//


//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s, char* buf)
//{
//	if (*s != NULL)
//	{
//		int size = strlen(s);
//		cout << "+" << *s << " : " << size - 1 << endl;
//		buf[size - 1] = *s;
//		PrintString(s + 1, buf);
//		cout << "-" << *s << " : " << size - 1 << endl;
//	}
//}
//int main()
//{
//	char buf[100] = { 0 };
//	PrintString("ABCDEF", buf);
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s)
//{
//	if (*s != NULL)
//	{
//		int size = strlen(s);
//		cout << "+" << s << " : " << size - 1 << endl;
//		PrintString(s + 1);
//		cout << "-" << s << " : " << size - 1 << endl;
//	}
//}
//int main()
//{
//	PrintString("ABCDEF");
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <cstring>
//using namespace std;
//void PrintString(const char* s, int last)
//{
//	if (last >= 0) 
//	{
//		int size = strlen(s);
//		cout << "+" << s << " : " << size - 1 << endl;
//		PrintString(s + 1, size-1 - 1);
//		cout << "-" << s << " : " << size - 1 << endl;
//	}
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//void PrintString(const char* s, int last)
//{
//	if (last < 0) //NULL이냐?
//		return;
//	cout << "+" << s << " : " << last << endl;
//	PrintString(s + 1, last - 1);
//	cout << "-" << s << " : " << last << endl;
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//void PrintString(const char* s, int last)
//{
//	if (*s == NULL) //NULL이냐?
//		return;
//	cout << "+" << s << " : " << last << endl;
//	PrintString(s + 1, last - 1);
//	cout << "-" << s << " : " << last << endl;
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//void PrintString(const char* s, int last)
//{
//	if (*s == NULL) //NULL이냐?
//		return;
//	cout << "+" << s << " : " << last << endl;
//	PrintString(s + 1, last - 1);
//	cout << "-" << s << " : " << last << endl;
//}
//int main()
//{
//	PrintString("ABCDEF", 5);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//	{
//		cout << "찾는 원소 없음" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "찾음 : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	SearchNode(root, 190);
//
//	Destory(root);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//Node* SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//		return NULL;
//	if (p->data == data)
//		return p;
//	if (p->data > data)
//		return SearchNode(p->lchild, data);
//	else
//		return SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	Node* p = SearchNode(root, 90);
//
//	if (NULL != p)
//		cout << p->data << endl;
//
//	Destory(root);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//Node* SearchNode(Node* p, int data) // 재귀
//{
//	if (p == NULL)
//		return NULL;
//	if (p->data == data)
//		return p;
//
//	if (p->data > data)
//		return SearchNode(p->lchild, data);
//	else
//		return SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // 루프
////{
////	if (root == NULL)
////		return NULL;
////	Node* p = root;
////	while (p)
////	{
////		if (p->data == data)
////			return p;
////		else if (p->data > data)
////			p = p->lchild;
////		else
////			p = p->rchild;
////	}
////	return NULL;
////
////}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	Node* p = SearchNode(root, 50);
//
//	if (NULL != p)
//		cout << p->data << endl;
//
//	Destory(root);
//	system("pause");
//}


//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild;
//	Node* rchild;
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//	return p;
//}
//void Inorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-현재위치
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue와 비슷함
//{
//	if (root)
//		return;
//	//값을 꺼낼 때 자식에 대한 정보가전혀 없다, 그래서 노드의 주소를 담는 형식을 사용한다-주소를 알면 형식을 알 수 있으니까
//	queue<Node*> q;
//	q.push(root);
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//	}
//}
//void Destory(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q; //자식정보를 큐에 담아서 내용물을 출력하려고
//	q.push(root);
//
//	while (!q.empty()) //비었으면 빠져나가라.
//	{
//		Node* cur = q.front();
//		q.pop();//원소를 참조.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild가 널이아니면 
//			q.push(cur->lchild); //담아라.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //선형재귀함수---어차피 실행되는건 한개의 라인뿐, 2진검색-선형라인
//{
//	if (root == NULL)   //종료조건
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //부모주소를 기억하도록
//		while (p)   //p가 NULL일때까지 돌림
//		{
//			pp = p;//부모주소를 넣어준다
//			if (p->data > data)
//				p = p->lchild;     //p는 새로운 주소로 된다
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
////Node* SearchNode(Node* root, int data)
////{
////	if (root == NULL)
////		return NULL;
////
////	if (root->data == data)
////		return root;
////
////	if (root->data > data)
////		return SearchNode(root->lchild, data);
////	else
////		return SearchNode(root->rchild, data);
////}
//Node* SearchNode(Node* root, int data)
//{
//	if (root == NULL)
//		return NULL;
//	Node* p = root;
//	while (p)
//	{
//		if (p->data == data)
//			return p;
//		else if (p->data > data)
//			p = p->lchild;
//		else
//			p = p->rchild;
//	}
//	return NULL;
//
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return 으로 만듬.
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 40);
//	AddNode(root, 10);
//	AddNode(root, 60);
//	AddNode(root, 90);
//
//	Node* p = SearchNode(root, 50);
//
//	if (NULL != p)
//		cout << p->data << endl;
//
//	Destory(root);
//	system("pause");
//}