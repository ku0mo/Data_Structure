/*
Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
*/
#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;
struct Node
{
	int data;
	Node* lchild; // ���� �ڽ�
	Node* rchild; // ������ �ڽ�
};
Node* AllocNode(int data)
{
	Node* p = new Node;
	p->data = data;
	p->lchild = p->rchild = NULL;

	return p;
}
void Inorder(Node* p) // ���� ��ġ
{
	if (p)
	{
		Inorder(p->lchild);
		cout << p->data << " ";
		Inorder(p->rchild);
	}
}
void Preoder(Node* p) // ���� ��ġ
{
	if (p)
	{
		cout << p->data << " ";
		Preoder(p->lchild);
		Preoder(p->rchild);
	}
}
void Postorder(Node* p) // ���� ��ġ
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
	while (p)//p�� NULL�� ������ ������ ��
	{
		pp = p; // �θ� ��� �ּ� ����
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//	while (p)//p�� NULL�� ������ ������ ��
//	{
//		pp = p; // �θ� ��� �ּ� ����
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//		while (p)//p�� NULL�� ������ ������ ��
//		{
//			pp = p; // �θ� ��� �ּ� ����
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//	if (root->data > data)			//����
//		AddNode(root->lchild, data);
//	else							//������
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//	if (root->data > data)			//����
//		AddNode(root->lchild, data);
//	else							//������
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//	if (root->data > data)			//����
//		root->lchild = AddNode(root->lchild, data);
//	else							//������
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//	if (root->data > data)			//����
//		root->lchild = AddNode(root->lchild, data);
//	else							//������
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//Node* AllocNode(int data)
//{
//	Node* p = new Node;
//	p->data = data;
//	p->lchild = p->rchild = NULL;
//
//	return p;
//}
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//void Inorder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		Inorder(p->lchild);
//		cout << p->data << endl;
//		Inorder(p->rchild);
//	}
//}
//void Preoder(Node* p) // ���� ��ġ
//{
//	if (p)
//	{
//		cout << p->data << endl;
//		Preoder(p->lchild);
//		Preoder(p->rchild);
//	}
//}
//void Postorder(Node* p) // ���� ��ġ
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//void Inorder(Node* p) // ���� ��ġ
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
//};
//void PrintNode(Node* p) // ���� ��ġ
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
//Ž�� ���� Ʈ�� : ������ ��Ģ�� ������ �����͸� ����
//ex) ���� ���� ���� ū �� ���� �� �̷� ��Ģ
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//struct Node
//{
//	int data;
//	Node* lchild; // ���� �ڽ�
//	Node* rchild; // ������ �ڽ�
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
//Tree ����
//
//		root			1		(root) , root�� ������ ������ ����
//		/  \
//	   /	\
//	node	node		2		(branch) , �ڽ��� ������ �ִ� ��带 ���ͳ� ���, ���γ���� ��
//	/ \		/ \
// /   \   /   \
//node node node node		3		(reaf)	 , �ڽ��� ������ ���� ���� ���, �ܺ� ���, Ȥ�� �ܸ� ����� ��
//
//
//tree�� ǥ���ϴ� ��� ũ�� 2��
//1. nlink ǥ�� ( n���� �ڽ�(�ڽ�)degree�� ���� �� ���� )
//struct Node
//{
//	int data;
//	list<Node*> l;
//}
//
//2 .������ �ڽ�, ������ ���� ǥ�� // �޸� ����,
//ex)
//struct Node
//{
//	int data;
//	Node leftChild;
//	Node rightChild;
//}
//�ٵ� �Ϲ������� �ڷᱸ�� tree�� �ڷᱸ���� ������ �ǹ��ϴ� ��
//Ʈ���� �� ����? - ������ �ణ �ٸ�
//1. �ϳ��� �������� �ڷ���� �����ϰ��� �� �� ��� { *n��ũ*, �ڽ� ���� }
//2. �˻� ������ ���̰��� ���� ���� ��!
//
//
//2�� Ʈ�� 
//- �ڽ� ����� ������ 2��(2��)������ Ʈ���� ���� Ʈ����� ��
//�� 2��Ʈ���� ����? ������ ���̰��� �� (��Ģ�� ���� �׷��� ������ �� ��Ģ���� ������ ���� �� ����)
//
//1. ��ȭ 2�� Ʈ�� 
//
//2. ���� 2�� Ʈ�� : ���� ���� ������ 4��� ���ʺ��� �� ä���� ���¸� �ǹ���
//
//�˰����� ��ȭ Ʈ�������� ���ư��� �˰����� �ְ�, ���������� ���ư��� �˰����� ����
//
//n0 = n2 + 1;
//�ܸ� ���(�ڽ��� ���� ���)�� �׻� ���� 2�� ��庸�� 1�� �� ũ�� �Ǿ� �ִ�.
//
//Ʈ���� Ž���ϴ� ��� 4���� ( �θ� �������� )
//1. inorder Ž�� ���� : ����, �θ�, ������
//2. preorder Ž�� ���� : �θ�, ����, ������
//3. postorder Ž�� ���� : ����, ������ , �θ�
//4. levelorder Ž�� ���� : ���� ���� ���ʺ��� ������ Ž��
//*/
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void main()
//{
//	system("pause");
//}


///*
//���� �˻�(���� ���ִ� ���¿��� ����) - ���� ��ͷ� �ذ� ����
//left middle right�� ������ ��
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
//{// ��������(����Լ��� �� ȣ�� ���� �ʴ� ����) 1. ã���� �� 2. �� ã���� ��
//	if (left > right)
//		return -1; // �� ã���� ��!
//	int middle = (left + right) / 2;
//	switch (Compare(data, list[middle]))
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; // ���� ����
//	default://���� 
//		throw "����?";
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
//		case 1:// ã�� �����Ͱ� ���� �ʿ� ���� ��
//			left = middle + 1;
//			break;
//		case -1: // ã�� �����Ͱ� ���ʿ� ���� ��
//			right = middle - 1;
//			break;
//		case 0:
//			return middle;
//		default:
//			throw "��!";
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
//���� �˻�(���� ���ִ� ���¿��� ����) - ���� ��ͷ� �ذ� ����
//left middle right�� ������ ��
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
//{// ��������(����Լ��� �� ȣ�� ���� �ʴ� ����) 1. ã���� �� 2. �� ã���� ��
//	if (left > right)
//		return -1; // �� ã���� ��!
//	int middle = (left + right) / 2;
//	switch (Compare(data, list[middle]))
//	{
//	case 1:
//		return _Find(list, middle + 1, right, data);
//	case -1:
//		return _Find(list, left, middle - 1, data);
//	case 0:
//		return middle; // ���� ����
//	default://���� 
//		throw "����?";
//	}
//	return -1;
//}
//int Find(int list[], int size, int data)
//{
//	return _Find(list, 0, size-1, data); // ��� ����
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
//���� �˻�(���� ���ִ� ���¿��� ����) - ���� ��ͷ� �ذ� ����
//left middle right�� ������ ��
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