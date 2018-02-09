///*
//heap �ڷᱸ��
//���ҵ��� 2�� Ʋ���� ������ �� ���¿���
//
//�ִ� heap : ��� �θ���� �ڽ� ���麸�� ŭ
//
//�ּ� heap : ��� �ڽĵ��� �θ� ���麸�� ŭ
//
//���� Push, Pop �ΰ��� ����
//
//heap�� ������ �̿��ؼ� �����ϴ� ���� �˰����� Heap Sort ��� ��
//
//������ ������ ������ Ʈ���� ǥ���Ϸ��� ���� 2��Ʈ�� ������ �����ؾ� ��
//
//			40(1)
//			/   \
//	50(2)   	  20(2)
//	/	\		/		\
//90(3)   10(4)  80(5)   60(6)			���� Ʈ��
///  \	/
//30(7) 70(8)  100(9)
//
//���࿡ �ε��� ������ ���� �迭�� ������, �� �迭�� ���� ���� Ʈ����� �� �� ����
//0  null
//1	40
//2	50
//3	20										������ Ʈ��
//4	90
//5	10
//6	80
//...
//
//
//i��� ���� ��ġ�� ���� �ڽ��� �ε��� ��ġ�� i*2
//������ �ڽ��� �ε��� ��ġ�� i*2 + 1
//
//k��� �ڽ��� ���� �� �θ�� k/2 �ϸ� �θ��� �ε����� �� �� ����
//
//�ٸ� ����� ��κ��� heap�� �ڷᱸ���� �����������.
//�ٵ� STL�� �˰������� �� ����.
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
//	int size = 0; // heap�� ��� �ִ� ������ ������ �Ұž�..
//
//	size = 10;
//	make_heap(list, list + size); // 10���� ���Ҹ� heap������ ������! push 10�� �ѰŶ� ����
//	PrintList(list, size);
//	
//	sort_heap(list, list + size); // pop�� 10�� �ѰŶ� ����
//	size = 0;
//	PrintList(list, size);
//
//	PrintList(list, 10);
//	system("pause");
//}
//



///*
//heap �ڷᱸ��
//���ҵ��� 2�� Ʋ���� ������ �� ���¿���
//
//�ִ� heap : ��� �θ���� �ڽ� ���麸�� ŭ
//
//�ּ� heap : ��� �ڽĵ��� �θ� ���麸�� ŭ
//
//���� Push, Pop �ΰ��� ����
//
//heap�� ������ �̿��ؼ� �����ϴ� ���� �˰����� Heap Sort ��� ��
//
//������ ������ ������ Ʈ���� ǥ���Ϸ��� ���� 2��Ʈ�� ������ �����ؾ� ��
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			���� Ʈ��
///  \	/
//30(7) 70(8)  100(9)
//
//���࿡ �ε��� ������ ���� �迭�� ������, �� �迭�� ���� ���� Ʈ����� �� �� ����
//0  null
//1	40
//2	50
//3	20										������ Ʈ��
//4	90
//5	10
//6	80
//...
//
//
//i��� ���� ��ġ�� ���� �ڽ��� �ε��� ��ġ�� i*2
//������ �ڽ��� �ε��� ��ġ�� i*2 + 1
//
//k��� �ڽ��� ���� �� �θ�� k/2 �ϸ� �θ��� �ε����� �� �� ����
//
//�ٸ� ����� ��κ��� heap�� �ڷᱸ���� �����������.
//�ٵ� STL�� �˰������� �� ����.
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
//	int size = 0; // heap�� ��� �ִ� ������ ������ �Ұž�..
//
//	size = 10;
//	make_heap(list, list + size); // 10���� ���Ҹ� heap������ ������!
//
//	PrintList(list, size);
//	pop_heap(list, list + size); // pop�� ������ root�� ��, �ٵ� �˰����̶� ���� ������ ����,
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
//heap �ڷᱸ��
//���ҵ��� 2�� Ʋ���� ������ �� ���¿���
//
//�ִ� heap : ��� �θ���� �ڽ� ���麸�� ŭ
//
//�ּ� heap : ��� �ڽĵ��� �θ� ���麸�� ŭ
//
//���� Push, Pop �ΰ��� ����
//
//heap�� ������ �̿��ؼ� �����ϴ� ���� �˰����� Heap Sort ��� ��
//
//������ ������ ������ Ʈ���� ǥ���Ϸ��� ���� 2��Ʈ�� ������ �����ؾ� ��
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			���� Ʈ��
///  \	/
//30(7) 70(8)  100(9)
//
//���࿡ �ε��� ������ ���� �迭�� ������, �� �迭�� ���� ���� Ʈ����� �� �� ����
//0  null
//1	40
//2	50
//3	20										������ Ʈ��
//4	90
//5	10
//6	80
//...
//
//
//i��� ���� ��ġ�� ���� �ڽ��� �ε��� ��ġ�� i*2
//������ �ڽ��� �ε��� ��ġ�� i*2 + 1
//
//k��� �ڽ��� ���� �� �θ�� k/2 �ϸ� �θ��� �ε����� �� �� ����
//
//�ٸ� ����� ��κ��� heap�� �ڷᱸ���� �����������.
//�ٵ� STL�� �˰������� �� ����.
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
//	int size = 0; // heap�� ��� �ִ� ������ ������ �Ұž�..
//
//				  //make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//
//	PrintList(list, size);
//	pop_heap(list, list + size); // pop�� ������ root�� ��, �ٵ� �˰����̶� ���� ������ ����,
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
//heap �ڷᱸ��
//���ҵ��� 2�� Ʋ���� ������ �� ���¿���
//
//�ִ� heap : ��� �θ���� �ڽ� ���麸�� ŭ
//
//�ּ� heap : ��� �ڽĵ��� �θ� ���麸�� ŭ
//
//���� Push, Pop �ΰ��� ����
//
//heap�� ������ �̿��ؼ� �����ϴ� ���� �˰����� Heap Sort ��� ��
//
//������ ������ ������ Ʈ���� ǥ���Ϸ��� ���� 2��Ʈ�� ������ �����ؾ� ��
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			���� Ʈ��
///  \	/
//30(7) 70(8)  100(9)
//
//���࿡ �ε��� ������ ���� �迭�� ������, �� �迭�� ���� ���� Ʈ����� �� �� ����
//0  null
//1	40
//2	50
//3	20										������ Ʈ��
//4	90
//5	10
//6	80
//...
//
//
//i��� ���� ��ġ�� ���� �ڽ��� �ε��� ��ġ�� i*2
//������ �ڽ��� �ε��� ��ġ�� i*2 + 1
//
//k��� �ڽ��� ���� �� �θ�� k/2 �ϸ� �θ��� �ε����� �� �� ����
//
//�ٸ� ����� ��κ��� heap�� �ڷᱸ���� �����������.
//�ٵ� STL�� �˰������� �� ����.
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
//	int size = 0; // heap�� ��� �ִ� ������ ������ �Ұž�..
//
//	//make_heap(list, list + size);
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//	++size;
//	push_heap(list, list + size); //iterator ����, iterator ��
//
//	PrintList(list, size);
//
//
//	system("pause");
//}




///*
//heap �ڷᱸ��
//���ҵ��� 2�� Ʋ���� ������ �� ���¿���
//
//�ִ� heap : ��� �θ���� �ڽ� ���麸�� ŭ
//
//�ּ� heap : ��� �ڽĵ��� �θ� ���麸�� ŭ
//
//���� Push, Pop �ΰ��� ����
//
//heap�� ������ �̿��ؼ� �����ϴ� ���� �˰����� Heap Sort ��� ��
//
//������ ������ ������ Ʈ���� ǥ���Ϸ��� ���� 2��Ʈ�� ������ �����ؾ� ��
//
//40(1)
///   \
//50(2)   	  20(2)
///	\		/		\
//90(3)   10(4)  80(5)   60(6)			���� Ʈ��
///  \	/
//30(7) 70(8)  100(9)
//
//���࿡ �ε��� ������ ���� �迭�� ������, �� �迭�� ���� ���� Ʈ����� �� �� ����
//0  null
//1	40
//2	50
//3	20										������ Ʈ��
//4	90
//5	10
//6	80
//...
//
//
//i��� ���� ��ġ�� ���� �ڽ��� �ε��� ��ġ�� i*2
//������ �ڽ��� �ε��� ��ġ�� i*2 + 1
//
//k��� �ڽ��� ���� �� �θ�� k/2 �ϸ� �θ��� �ε����� �� �� ����
//
//�ٸ� ����� ��κ��� heap�� �ڷᱸ���� �����������.
//�ٵ� STL�� �˰������� �� ����. 
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
//	push_heap(list, list + 1); //iterator ����, iterator ��
//	push_heap(list, list + 2);
//	push_heap(list, list + 3);
//	push_heap(list, list + 4);
//	push_heap(list, list + 5);
//	PrintList(list, 5);
//
//	system("pause");
//}




///*
//heap �ڷᱸ��
//���ҵ��� 2�� Ʋ���� ������ �� ���¿���
//
//�ִ� heap : ��� �θ���� �ڽ� ���麸�� ŭ
//
//�ּ� heap : ��� �ڽĵ��� �θ� ���麸�� ŭ
//
//���� Push, Pop �ΰ��� ����
//
//heap�� ������ �̿��ؼ� �����ϴ� ���� �˰����� Heap Sort ��� ��
//
//������ ������ ������ Ʈ���� ǥ���Ϸ��� ���� 2��Ʈ�� ������ �����ؾ� ��
//
//			   40(1)
//			   /   \
//		50(2)   	  20(2)
//		/	\		/		\
//	90(3)   10(4)  80(5)   60(6)			���� Ʈ��
//	/  \	/
// 30(7) 70(8)  100(9)
//
// ���࿡ �ε��� ������ ���� �迭�� ������, �� �迭�� ���� ���� Ʈ����� �� �� ����
// 0  null
// 1	40
// 2	50
// 3	20										������ Ʈ��
// 4	90
// 5	10
// 6	80
// ...
//
//
//i��� ���� ��ġ�� ���� �ڽ��� �ε��� ��ġ�� i*2
//				������ �ڽ��� �ε��� ��ġ�� i*2 + 1
//
//k��� �ڽ��� ���� �� �θ�� k/2 �ϸ� �θ��� �ε����� �� �� ����
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
//	void Inorder(Node* p)    //p-������ġ
//	{
//		if (p)
//		{   //inorder
//			Inorder(p->lchild);
//			cout << p->data << " ";
//			Inorder(p->rchild);
//		}
//	}
//	void Preorder(Node* p)    //p-������ġ
//	{
//		if (p)
//		{
//			cout << p->data << " ";
//			Preorder(p->lchild);
//			Preorder(p->rchild);
//		}
//	}
//	void Postorder(Node* p)    //p-������ġ
//	{
//		if (p)
//		{
//			Postorder(p->lchild);
//			Postorder(p->rchild);
//			cout << p->data << " ";
//		}
//	}
//	void levelorder(Node* root)     //queue�� �����
//	{
//		if (root)
//			return;
//		//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//		queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//		q.push(root);
//
//		while (!q.empty()) //������� ����������.
//		{
//			Node* cur = q.front();
//			q.pop();//���Ҹ� ����.
//					//cout << cur->data << " ";
//			if (cur->lchild) //lchild�� ���̾ƴϸ� 
//				q.push(cur->lchild); //��ƶ�.
//			if (cur->rchild)
//				q.push(cur->rchild);
//			delete cur;
//		}
//	}
//	void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//	{
//		if (root == NULL)   //��������
//		{
//			root = AllocNode(data);
//			return;
//		}
//		{
//			Node* p = root;
//			Node* pp = p;   //�θ��ּҸ� ����ϵ���
//			while (p)   //p�� NULL�϶����� ����
//			{
//				pp = p;//�θ��ּҸ� �־��ش�
//				if (p->data > data)
//					p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//				else
//					p = p->rchild;
//			}
//			if (pp->data > data)
//				pp->lchild = AllocNode(data);
//			else
//				pp->rchild = AllocNode(data);
//		}
//	}
//	void SearchNode(Node* p, int data) // ���
//	{
//		if (p == NULL)
//		{
//			cout << "ã�� ���� ����" << endl;
//			return;
//		}
//
//		if (p->data == data)
//		{
//			cout << "ã�� : " << data << endl;
//			return;
//		}
//
//		if (p->data > data)
//			SearchNode(p->lchild, data);
//		else
//			SearchNode(p->rchild, data);
//	}
//	//Node* SearchNode(Node* root, int data) // ����
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
//			//1. ���� 0 // �ܸ� ����� ���
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2. ���� 1, ����, ������
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
//			//3. ���� 2�� ���
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
//	t.Add(50); //return ���� ����.
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
//	void Inorder(Node* p)    //p-������ġ
//	{
//		if (p)
//		{   //inorder
//			Inorder(p->lchild);
//			cout << p->data << " ";
//			Inorder(p->rchild);
//		}
//	}
//	void preorder(Node* p)    //p-������ġ
//	{
//		if (p)
//		{
//			cout << p->data << " ";
//			preorder(p->lchild);
//			preorder(p->rchild);
//		}
//	}
//	void postorder(Node* p)    //p-������ġ
//	{
//		if (p)
//		{
//			postorder(p->lchild);
//			postorder(p->rchild);
//			cout << p->data << " ";
//		}
//	}
//	void levelorder(Node* root)     //queue�� �����
//	{
//		if (root)
//			return;
//		//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//		queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//		q.push(root);
//
//		while (!q.empty()) //������� ����������.
//		{
//			Node* cur = q.front();
//			q.pop();//���Ҹ� ����.
//					//cout << cur->data << " ";
//			if (cur->lchild) //lchild�� ���̾ƴϸ� 
//				q.push(cur->lchild); //��ƶ�.
//			if (cur->rchild)
//				q.push(cur->rchild);
//			delete cur;
//		}
//	}
//	void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//	{
//		if (root == NULL)   //��������
//		{
//			root = AllocNode(data);
//			return;
//		}
//		{
//			Node* p = root;
//			Node* pp = p;   //�θ��ּҸ� ����ϵ���
//			while (p)   //p�� NULL�϶����� ����
//			{
//				pp = p;//�θ��ּҸ� �־��ش�
//				if (p->data > data)
//					p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//				else
//					p = p->rchild;
//			}
//			if (pp->data > data)
//				pp->lchild = AllocNode(data);
//			else
//				pp->rchild = AllocNode(data);
//		}
//	}
//	void SearchNode(Node* p, int data) // ���
//	{
//		if (p == NULL)
//		{
//			cout << "ã�� ���� ����" << endl;
//			return;
//		}
//
//		if (p->data == data)
//		{
//			cout << "ã�� : " << data << endl;
//			return;
//		}
//
//		if (p->data > data)
//			SearchNode(p->lchild, data);
//		else
//			SearchNode(p->rchild, data);
//	}
//	//Node* SearchNode(Node* root, int data) // ����
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
//			//1. ���� 0 // �ܸ� ����� ���
//			if (p->lchild == NULL && p->rchild == NULL)
//			{
//				delete p;
//				return NULL;
//			}
//			//2. ���� 1, ����, ������
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
//			//3. ���� 2�� ���
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
//	t.Add(50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//		//1. ���� 0 // �ܸ� ����� ���
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. ���� 1, ����, ������
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
//		//3. ���� 2�� ���
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
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//		//1. ���� 0 // �ܸ� ����� ���
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. ���� 1, ����, ������
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
//		//3. ���� 2�� ���
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
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//		//1. ���� 0 // �ܸ� ����� ���
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. ���� 1, ����, ������
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
//		//3. ���� 2�� ���
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//				//cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//		//1. ���� 0 // �ܸ� ����� ���
//		if (p->lchild == NULL && p->rchild == NULL)
//		{
//			delete p;
//			return NULL;
//		}
//		//2. ���� 1, ����, ������
//		if (p->lchild == NULL && p->rchild != NULL || p->rchild != NULL && p->rchild == NULL)
//		{
//
//		}
//		//3. ���� 2�� ���
//	}
//	return p;
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//		//cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//	Node* p = root;
//	Node* pp = p;
//	while (p)
//	{
//		if (p->data == data)
//		{
//			cout << "���� : " << p->data << endl;
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
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//	Node* p = root;
//	while (p)
//	{
//		if (p->data == data)
//		{
//			cout << "���� : " << p->data << endl;
//		}
//		p = (p->data > data) ? p->lchild : p->rchild;
//	}
//}
//int main()
//{
//	Node* root = NULL;
//	AddNode(root, 50); //return ���� ����.
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
//	if (last < 0) //NULL�̳�?
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
//	if (*s == NULL) //NULL�̳�?
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
//	if (*s == NULL) //NULL�̳�?
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//void SearchNode(Node* p, int data) // ���
//{
//	if (p == NULL)
//	{
//		cout << "ã�� ���� ����" << endl;
//		return;
//	}
//
//	if (p->data == data)
//	{
//		cout << "ã�� : " << data << endl;
//		return;
//	}
//
//	if (p->data > data)
//		SearchNode(p->lchild, data);
//	else
//		SearchNode(p->rchild, data);
//}
////Node* SearchNode(Node* root, int data) // ����
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
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//Node* SearchNode(Node* p, int data) // ���
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
////Node* SearchNode(Node* root, int data) // ����
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
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
//			else
//				p = p->rchild;
//		}
//		if (pp->data > data)
//			pp->lchild = AllocNode(data);
//		else
//			pp->rchild = AllocNode(data);
//	}
//}
//Node* SearchNode(Node* p, int data) // ���
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
////Node* SearchNode(Node* root, int data) // ����
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
//	AddNode(root, 50); //return ���� ����.
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
//void Inorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{   //inorder
//		Inorder(p->lchild);
//		cout << p->data << " ";
//		Inorder(p->rchild);
//	}
//}
//void preorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		cout << p->data << " ";
//		preorder(p->lchild);
//		preorder(p->rchild);
//	}
//}
//void postorder(Node* p)    //p-������ġ
//{
//	if (p)
//	{
//		postorder(p->lchild);
//		postorder(p->rchild);
//		cout << p->data << " ";
//	}
//}
//void levelorder(Node* root)     //queue�� �����
//{
//	if (root)
//		return;
//	//���� ���� �� �ڽĿ� ���� ���������� ����, �׷��� ����� �ּҸ� ��� ������ ����Ѵ�-�ּҸ� �˸� ������ �� �� �����ϱ�
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
//	queue<Node*> q; //�ڽ������� ť�� ��Ƽ� ���빰�� ����Ϸ���
//	q.push(root);
//
//	while (!q.empty()) //������� ����������.
//	{
//		Node* cur = q.front();
//		q.pop();//���Ҹ� ����.
//		cout << cur->data << " ";
//		if (cur->lchild) //lchild�� ���̾ƴϸ� 
//			q.push(cur->lchild); //��ƶ�.
//		if (cur->rchild)
//			q.push(cur->rchild);
//		delete cur;
//	}
//}
//void AddNode(Node* &root, int data)     //��������Լ�---������ ����Ǵ°� �Ѱ��� ���λ�, 2���˻�-��������
//{
//	if (root == NULL)   //��������
//	{
//		root = AllocNode(data);
//		return;
//	}
//	{
//		Node* p = root;
//		Node* pp = p;   //�θ��ּҸ� ����ϵ���
//		while (p)   //p�� NULL�϶����� ����
//		{
//			pp = p;//�θ��ּҸ� �־��ش�
//			if (p->data > data)
//				p = p->lchild;     //p�� ���ο� �ּҷ� �ȴ�
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
//	AddNode(root, 50); //return ���� ����.
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