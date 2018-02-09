/*
탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
*/
#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;
struct Node
{
	int data;
	Node* lchild; // 왼쪽 자식
	Node* rchild; // 오른쪽 자식
};
Node* AllocNode(int data)
{
	Node* p = new Node;
	p->data = data;
	p->lchild = p->rchild = NULL;

	return p;
}
void Inorder(Node* p) // 현재 위치
{
	if (p)
	{
		Inorder(p->lchild);
		cout << p->data << " ";
		Inorder(p->rchild);
	}
}
void Preoder(Node* p) // 현재 위치
{
	if (p)
	{
		cout << p->data << " ";
		Preoder(p->lchild);
		Preoder(p->rchild);
	}
}
void Postorder(Node* p) // 현재 위치
{
	if (p)
	{
		Postorder(p->lchild);
		Postorder(p->rchild);
		cout << p->data << " ";
	}
}
void Levelorder(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);

	while (!q.empty())
	{
		Node* cur = q.front();
		q.pop();
		cout << cur->data << " ";
		if (cur->lchild)
			q.push(cur->lchild);
		if (cur->rchild)
			q.push(cur->rchild);
	}
}
void Destroy(Node* root)
{
	if (root == NULL)
		return;
	queue<Node*> q;
	q.push(root);

	while (!q.empty())
	{
		Node* cur = q.front();
		q.pop();
		cout << cur->data << " ";
		if (cur->lchild)
			q.push(cur->lchild);
		if (cur->rchild)
			q.push(cur->rchild);
		delete cur;
	}
}
void AddNode(Node*& root, int data)
{
	if (root == NULL)
	{
		root = AllocNode(data);
		return;
	}

	Node* p = root;
	Node* pp = p;
	while (p)//p가 NULL일 때가지 돌리는 것
	{
		pp = p; // 부모 노드 주소 저장
		p = p->data > data ? p = p->lchild : p = p->rchild;
	}
	if (pp->data > data)
		pp->lchild = AllocNode(data);
	else
		pp->rchild = AllocNode(data);

}
void main()
{
	Node* root = NULL;

	for (int i = 0; i < 100; ++i)
		AddNode(root, rand() % 100);

	Inorder(root); cout << endl;
	//Preoder(root); cout << endl;
	//Postorder(root); cout << endl;
	//Levelorder(root); cout << endl;

	Destroy(root);

	system("pause");
}



///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)
//	{
//		root = AllocNode(data);
//		return;
//	}
//
//	Node* p = root;
//	Node* pp = p;
//	while (p)//p가 NULL일 때가지 돌리는 것
//	{
//		pp = p; // 부모 노드 주소 저장
//		p = p->data > data ? p = p->lchild : p = p->rchild;
//	}
//	if (pp->data > data)
//		pp->lchild = AllocNode(data);
//	else
//		pp->rchild = AllocNode(data);
//
//}
//void main()
//{
//	Node* root = NULL;
//
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 70);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 40);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//
//	system("pause");
//}


///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)
//	{
//		root = AllocNode(data);
//		return;
//	}
//
//	{
//		Node* p = root;
//		Node* pp = p;
//		while (p)//p가 NULL일 때가지 돌리는 것
//		{
//			pp = p; // 부모 노드 주소 저장
//			if (p->data > data)
//			{
//				p = p->lchild;
//			}
//			else
//			{
//				p = p->rchild;
//			}
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//
//}
//void main()
//{
//	Node* root = NULL;
//
//	AddNode(root, 50);
//	AddNode(root, 30);
//	AddNode(root, 10);
//	AddNode(root, 70);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 40);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//
//	system("pause");
//}


///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)
//	{
//		root = AllocNode(data);
//		return;
//	}
//	if (root->data > data)			//왼쪽
//		AddNode(root->lchild, data);
//	else							//오른쪽
//		AddNode(root->rchild, data);
//}
//void main()
//{
//	Node* root = NULL;
//
//	AddNode(root, 50);
//	AddNode(root, 10);
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 40);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//
//	system("pause");
//}



///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node*& root, int data)
//{
//	if (root == NULL)
//	{
//		root = AllocNode(data);
//		return ;
//	}
//	if (root->data > data)			//왼쪽
//		AddNode(root->lchild, data);
//	else							//오른쪽
//		AddNode(root->rchild, data);
//}
//void main()
//{
//	Node* root = NULL;
//
//	AddNode(root, 50);
//	AddNode(root, 10);
//	AddNode(root, 30);
//	AddNode(root, 70);
//	AddNode(root, 60);
//	AddNode(root, 90);
//	AddNode(root, 40);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//
//	system("pause");
//}




///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//Node* AddNode(Node* root, int data)
//{
//	if (root == NULL)
//		return AllocNode(data);
//
//	if (root->data > data)			//왼쪽
//		root->lchild = AddNode(root->lchild, data);
//	else							//오른쪽
//		root->rchild = AddNode(root->rchild, data);
//
//	return root;
//}
//void main()
//{
//	Node* root = NULL;
//
//	root = AddNode(root, 50);
//	root = AddNode(root, 10);
//	root = AddNode(root, 30);
//	root = AddNode(root, 70);
//	root = AddNode(root, 60);
//	root = AddNode(root, 90);
//	root = AddNode(root, 40);
//
//
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//
//	system("pause");
//}


///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//Node* AddNode(Node* root, int data)
//{
//	if (root == NULL)
//		return AllocNode(data);
//		
//	if (root->data > data)			//왼쪽
//		root->lchild = AddNode(root->lchild, data);
//	else							//오른쪽
//		root->rchild = AddNode(root->rchild, data);
//
//	return root;
//}
//void main()
//{
//	Node* root = NULL;
//
//	root = AddNode(root, 50);
//	root = AddNode(root, 30);
//	root = AddNode(root, 70);
//	root = AddNode(root, 10);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//
//	system("pause");
//}



///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
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
//void Destroy(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while (!q.empty())
//	{
//		Node* cur = q.front();
//		q.pop();
//		cout << cur->data << " ";
//		if (cur->lchild)
//			q.push(cur->lchild);
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void main()
//{
//	Node* root = NULL;
//
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//	root->lchild->lchild = AllocNode(10);
//	root->lchild->rchild = AllocNode(40);
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	Levelorder(root); cout << endl;
//
//	Destroy(root);
//	system("pause");
//}



///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void Levelorder(Node* root)
//{
//	if (root == NULL)
//		return;
//	queue<Node*> q;
//	q.push(root);
//
//	while( !q.empty() )
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
//void Destroy(Node* root)
//{
//	if (root)
//	{
//		Destroy(root->lchild);
//		Destroy(root->rchild);
//		delete root;
//	}
//}
//void main()
//{
//	Node* root = NULL;
//	
//	root = AllocNode(50);
//	root->lchild = AllocNode(30);
//	root->rchild = AllocNode(70);
//	root->lchild->lchild = AllocNode(10);
//	root->lchild->rchild = AllocNode(40);
//	root->rchild->lchild = AllocNode(60);
//	root->rchild->rchild = AllocNode(90);
//
//	Inorder(root); cout << endl;
//	Preoder(root); cout << endl;
//	Postorder(root); cout << endl;
//	//Levelorder(root); cout << endl;
//
//	Destroy(root);
//	system("pause");
//}




///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << endl;
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		cout << p->data << endl;
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Postorder(p->lchild);
//		Postorder(p->rchild);
//		cout << p->data << endl;
//	}
//}
//void main()
//{
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 20, NULL, NULL };
//	Node n3 = { 30, NULL, NULL };
//	Node n4 = { 40, NULL, NULL };
//	Node n5 = { 50, NULL, NULL };
//	Node n6 = { 60, NULL, NULL };
//	Node n7 = { 70, NULL, NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//
//	Node* root = &n1;
//
//	Inorder(root);
//	cout << endl;
//	Preoder(root);
//	cout << endl;
//	Postorder(root);
//	cout << endl;
//	system("pause");
//}





///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//void Inorder(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << endl;// inorder
//		Inorder(p->rchild);
//	}
//}
//void main()
//{
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 20, NULL, NULL };
//	Node n3 = { 30, NULL, NULL };
//	Node n4 = { 40, NULL, NULL };
//	Node n5 = { 50, NULL, NULL };
//	Node n6 = { 60, NULL, NULL };
//	Node n7 = { 70, NULL, NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//
//	Node* root = &n1;
//
//	Inorder(root);
//	system("pause");
//}
//
//


///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//void PrintNode(Node* p) // 현재 위치
//{
//	if (p)
//	{
//		PrintNode(p->lchild);
//		cout << p->data << endl;// inorder
//		PrintNode(p->rchild);
//	}
//}
//void main()
//{
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 20, NULL, NULL };
//	Node n3 = { 30, NULL, NULL };
//	Node n4 = { 40, NULL, NULL };
//	Node n5 = { 50, NULL, NULL };
//	Node n6 = { 60, NULL, NULL };
//	Node n7 = { 70, NULL, NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//
//	Node* root = &n1;
//
//	PrintNode(root);
//	system("pause");
//}


///*
//탐색 이진 트리 : 일정한 규칙을 가지고 데이터를 보관
//ex) 작은 것은 왼쪽 큰 것 오른 쪽 이런 규칙
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // 왼쪽 자식
//	Node* rchild; // 오른쪽 자식
//};
//void main()
//{
//	Node n1 = { 10, NULL, NULL };
//	Node n2 = { 20, NULL, NULL };
//	Node n3 = { 30, NULL, NULL };
//	Node n4 = { 40, NULL, NULL };
//	Node n5 = { 50, NULL, NULL };
//	Node n6 = { 60, NULL, NULL };
//	Node n7 = { 70, NULL, NULL };
//
//	n1.lchild = &n2;
//	n1.rchild = &n3;
//
//	n2.lchild = &n4;
//	n2.rchild = &n5;
//
//	n3.lchild = &n6;
//	n3.rchild = &n7;
//
//	Node* root = &n1;
//
//	cout << root->data << endl;
//
//	cout << root->lchild->data << endl;
//	cout << root->rchild->data << endl;
//
//	cout << root->lchild->lchild->data << endl;
//	cout << root->lchild->rchild->data << endl;
//
//	cout << root->rchild->lchild->data << endl;
//	cout << root->rchild->rchild->data << endl;
//
//
//	system("pause");
//}


///*
//Tree 구조
//
//		root			1		(root) , root는 형제를 가지지 않음
//		/  \
//	   /	\
//	node	node		2		(branch) , 자식을 가지고 있는 노드를 인터널 노드, 내부노드라고 함
//	/ \		/ \
// /   \   /   \
//node node node node		3		(reaf)	 , 자식을 가지고 있지 않은 노드, 외부 노드, 혹은 단말 노드라고 함
//
//
//tree를 표기하는 방법 크게 2개
//1. nlink 표현 ( n개의 자식(자식)degree를 가질 수 있음 )
//struct Node
//{
//	int data;
//	list<Node*> l;
//}
//
//2 .왼쪽이 자식, 오른쪽 형제 표현 // 메모리 절약,
//ex)
//struct Node
//{
//	int data;
//	Node leftChild;
//	Node rightChild;
//}
//근데 일반적으로 자료구조 tree는 자료구조의 구조를 의미하는 것
//트리는 왜 쓸까? - 성격이 약간 다름
//1. 하나는 계층적인 자료들을 조직하고자 할 때 사용 { *n링크*, 자식 형제 }
//2. 검색 성능을 높이고자 가장 많이 씀!
//
//
//2진 트리 
//- 자식 노드의 개수가 2차(2개)이하인 트리를 이진 트리라고 함
//왜 2진트리를 쓰나? 성능을 높이고자 씀 (규칙이 많음 그렇기 때문에 그 규칙으로 성능을 높일 수 있음)
//
//1. 포화 2진 트리 
//
//2. 완전 2진 트리 : 가장 깊은 레벨이 4라면 왼쪽부터 꽉 채워진 형태를 의미함
//
//알고리즘이 포화 트리에서만 돌아가는 알고리즘이 있고, 완전에서만 돌아가는 알고리즘이 있음
//
//n0 = n2 + 1;
//단말 노드(자식이 없는 노드)는 항상 차수 2인 노드보다 1나 더 크게 되어 있다.
//
//트리를 탐색하는 방법 4가지 ( 부모를 기준으로 )
//1. inorder 탐색 순서 : 왼쪽, 부모, 오른쪽
//2. preorder 탐색 순서 : 부모, 왼쪽, 오른쪽
//3. postorder 탐색 순서 : 왼쪽, 오른쪽 , 부모
//4. levelorder 탐색 순서 : 레벨 별로 왼쪽부터 오른쪽 탐색
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	system("pause");
//}


///*
//이진 검색(정렬 되있는 상태에서 가능) - 선형 재귀로 해결 가능
//left middle right의 값으로 비교
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//int Compare(int a, int b)
//{
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int _Find(int list[], int left, int right, int data)
//{// 종료조건(재귀함수를 재 호출 하지 않는 조건) 1. 찾았을 때 2. 못 찾았을 때
//	if (left > right)
//		return -1; // 못 찾았을 때!
//	int middle = (left + right) / 2;
//	switch (Compare(data, list[middle]))
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; // 종료 조건
//	default://예외 
//		throw "설마?";
//	}
//	return -1;
//}
//int Find(int list[], int size, int data)
//{
//	int left = 0;
//	int right = size - 1;
//	while (left <= right)
//	{
//		int middle = (left + right) / 2;
//		switch (Compare(data, list[middle]))
//		{
//		case 1:// 찾는 데이터가 오른 쪽에 있을 때
//			left = middle + 1;
//			break;
//		case -1: // 찾는 데이터가 왼쪽에 있을 때
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		default:
//			throw "헉!";
//		}
//	}
//	return -1;
//}
//void main()
//{
//	int list[10] = { 20, 35, 64, 38, 95, 75, 68, 56, 42, 51 };
//
//	sort(list, list + 10);
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//		cout << "[" << idx << "]: " << list[idx] << endl;
//	system("pause");
//
//}


///*
//이진 검색(정렬 되있는 상태에서 가능) - 선형 재귀로 해결 가능
//left middle right의 값으로 비교
//*/
//#include <iostream>
//#include <cstdlib>
//#include <algorithm>
//using namespace std;
//int Compare(int a, int b)
//{
//	if (a > b)
//		return 1;
//	else if (a < b)
//		return -1;
//	else
//		return 0;
//}
//int _Find(int list[], int left, int right, int data)
//{// 종료조건(재귀함수를 재 호출 하지 않는 조건) 1. 찾았을 때 2. 못 찾았을 때
//	if (left > right)
//		return -1; // 못 찾았을 때!
//	int middle = (left + right) / 2;
//	switch (Compare(data, list[middle]))
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; // 종료 조건
//	default://예외 
//		throw "설마?";
//	}
//	return -1;
//}
//int Find(int list[], int size, int data)
//{
//	return _Find(list, 0, size-1, data); // 재귀 위임
//}
//void main()
//{
//	int list[10] = { 20, 35, 64, 38, 95, 75, 68, 56, 42, 51 };
//
//	sort(list, list + 10);
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//		cout << "[" << idx << "]: " << list[idx] << endl;
//	system("pause");
//
//}


///*
//이진 검색(정렬 되있는 상태에서 가능) - 선형 재귀로 해결 가능
//left middle right의 값으로 비교
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//int Find(int list[], int size, int data)
//{
//	for (int i = 0; i < size; ++i)
//		if (list[i] == data)
//			return i;
//	return -1;
//}
//void main()
//{
//	int list[10] = { 20, 35, 64, 38, 95, 75, 68, 56, 42, 51 };
//
//	int idx = Find(list, 10, 75);
//	if (idx >= 0)
//		cout << "[" << idx << "]: " << list[idx] << endl;
//	system("pause");
//
//}