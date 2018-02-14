/*
���� : �����͸� ��Ģ�� �ְ� ����� �Ϲ����� ���

�����Ͱ� ���ĵǾ� ���� �ʴٸ�, ȿ�������� ó���� �����

�� ���� - �Ǻ����� ������ ���� ������(���� �� ���̳� �� �ڷ� ������)

*/
#include <iostream>
#include <cstdlib>
#include <queue>
using namespace std;

void PrintList(int list[], int size)
{
	for (int i = 0; i < size; ++i)
		cout << list[i] << " ";
	cout << endl;
}
int Min(int list[], int size, int idx)
{
	int minIdx = idx;
	for (int i = idx + 1; i < size; ++i)
		if (list[minIdx] > list[i])
			minIdx = i;

	return minIdx;
}
void Swap(int& a, int& b)
{
	int t = a;
	a = b;
	b = t;
}
void _Sort(int list[], int left, int right)
{
	if (left <= right)
	{
		int pivot = left; //���� ��
		int i = left + 1;
		int j = right;
		// �ʱⰪ�� ����

		while (i <= j)
		{
			while (list[pivot] > list[i])
				++i;
			while (list[pivot] < list[j])
				--j;
			if (i <= j)
				Swap(list[i], list[j]);
			else
				break;
			++i; --j;
		}
		Swap(list[j], list[pivot]);
		_Sort(list, left, j - 1);
		_Sort(list, j + 1, right);
	}
}
void Sort(int list[], int size) // �� ����
{
	_Sort(list, 0, size - 1); // ���� ����
}
int main()
{
	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
	int size = 8;

	PrintList(list, size);
	Sort(list, size);// �� ����
	PrintList(list, size);

	system("pause");
}





///*
//���� : �����͸� ��Ģ�� �ְ� ����� �Ϲ����� ���
//
//�����Ͱ� ���ĵǾ� ���� �ʴٸ�, ȿ�������� ó���� �����
//
//�� ���� - �Ǻ����� ������ ���� ������(���� �� ���̳� �� �ڷ� ������)
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int Min(int list[], int size, int idx)
//{
//	int minIdx = idx;
//	for (int i = idx + 1; i < size; ++i)
//		if (list[minIdx] > list[i])
//			minIdx = i;
//
//	return minIdx;
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void _Sort(int list[], int left, int right)
//{
//	int pivot = left; //���� ��
//	int i = left + 1;
//	int j = right; 
//	// �ʱⰪ�� ����
//
//	while (i < j)
//	{
//		while (list[pivot] > list[i])
//			++i;
//		while (list[pivot] < list[j])
//			--j;
//		if (i <= j)
//			Swap(list[i], list[j]);
//		else
//			break;
//		++i; --j;
//	}
//}
//void Sort(int list[], int size) // �� ����
//{
//	_Sort(list, 0, size - 1); // ���� ����
//}
//int main()
//{
//	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
//	int size = 8;
//
//	PrintList(list, size);
//	Sort(list, size);// �� ����
//	PrintList(list, size);
//
//	system("pause");
//}
//

///*
//���� : �����͸� ��Ģ�� �ְ� ����� �Ϲ����� ���
//
//�����Ͱ� ���ĵǾ� ���� �ʴٸ�, ȿ�������� ó���� �����
//
//�� ���� - �Ǻ����� ������ ���� ������(���� �� ���̳� �� �ڷ� ������)
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int Min(int list[], int size, int idx)
//{
//	int minIdx = idx;
//	for (int i = idx + 1; i < size; ++i)
//		if (list[minIdx] > list[i])
//			minIdx = i;
//
//	return minIdx;
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size) // ���� ����
//{
//	for (int i = 0; i < size; ++i)
//	{
//		int min = Min(list, size, i);
//		Swap(list[i], list[min]);
//	}
//}
//int main()
//{
//	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
//	int size = 8;
//
//	PrintList(list, size);
//	Sort(list, size); // ���� ����
//	PrintList(list, size);
//
//	system("pause");
//}



///*
//���� : �����͸� ��Ģ�� �ְ� ����� �Ϲ����� ���
//
//�����Ͱ� ���ĵǾ� ���� �ʴٸ�, ȿ�������� ó���� �����
//
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//void PrintList(int list[], int size)
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int Min(int list[], int size, int idx)
//{
//	int minIdx = idx;
//	for (int i = idx + 1; i < size; ++i)
//		if (list[minIdx] > list[i])
//			minIdx = i;
//
//	return minIdx;
//}
//void Swap(int& a, int& b)
//{
//	int t = a;
//	a = b;
//	b = t;
//}
//void Sort(int list[], int size) // ���� ����
//{
//	for (int i = 0; i < size ; ++i)
//	{
//		int min = Min(list, size, i);
//		Swap(list[i], list[min]);
//	}
//}
//int main()
//{
//	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
//	int size = 8;
//
//	PrintList(list, size);
//	Sort(list, size); // ���� ����
//	PrintList(list, size);
//
//	system("pause");
//}





///*
//���� : �����͸� ��Ģ�� �ְ� ����� �Ϲ����� ���
//
//�����Ͱ� ���ĵǾ� ���� �ʴٸ�, ȿ�������� ó���� �����
//
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//void PrintList(int list[], int size) 
//{
//	for (int i = 0; i < size; ++i)
//		cout << list[i] << " ";
//	cout << endl;
//}
//int Min(int list[], int size, int idx)
//{
//	int minIdx = idx;
//	for (int i = idx+1; i < size - 1; ++i)
//		if (list[minIdx] > list[i])
//			minIdx = i;
//
//	return minIdx;
//}
//void Sort(int list[], int size) // ���� ����
//{
//	int min = Min(list, size, 3);
//	printf("%d : %d\n", min, list[min]);
//}
//int main()
//{
//	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
//	int size = 8;
//
//	PrintList(list, size);
//	Sort(list, size); // ���� ����
//	PrintList(list, size);
//
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int sVer, eVer;
//	int weight;
//	Node* link;
//	Node(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w), link(0) {}
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int sv, int ev, int weight)
//{
//	if (g.v[sv] == NULL)
//	{
//		g.v[sv] = new Node(sv, ev, weight);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[sv]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(sv, ev, weight);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << p->sVer << "," << p->eVer << ":" << p->weight << ")";
//		cout << endl;
//	}
//}
//
//struct Edge
//{
//	int sVer, eVer;
//	int weight;
//	Edge(int sv=0, int ev=0, int w=0) : sVer(sv), eVer(ev), weight(w) {}
//	bool operator<(const Edge& arg) const
//	{
//		return weight > arg.weight;
//	}
//};
//void Dijkstra(Graph& g, int* distance, Edge* direction)
//{
//	distance[0] = 0;
//	for (int i = 1; i < g.vSize; ++i)
//		distance[i] = 0xffffff;
//	priority_queue<Edge> pq;
//	for (Node* p = g.v[0]; p; p = p->link)
//		pq.push(Edge(p->sVer, p->eVer, p->weight));
//	while (!pq.empty())
//	{
//		Edge e = pq.top();
//		pq.pop();
//		if (distance[e.sVer] + e.weight < distance[e.eVer])
//		{
//			distance[e.eVer] = distance[e.sVer] + e.weight;
//			direction[e.eVer] = Edge(e.sVer, e.eVer);
//		}
//		for (Node* p = g.v[e.eVer]; p; p = p->link)
//		{
//			pq.push(Edge(p->sVer, p->eVer, p->weight));
//		}
//	}
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1, 2/*����ġ*/); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2, 3);
//
//	AddEdge(g, 1, 3, 4);
//	AddEdge(g, 1, 4, 1);
//	AddEdge(g, 2, 5, 10);
//	AddEdge(g, 2, 6, 5);
//
//	AddEdge(g, 3, 7, 13);
//
//	AddEdge(g, 4, 5, 1);
//	AddEdge(g, 4, 7, 20);
//
//	AddEdge(g, 5, 7, 4);
//	AddEdge(g, 6, 7, 5);
//
//	PrintGraph(g);
//	int distance[8];
//	Edge direction[8]; // ���� ������ ���°� ��� ����޴��� ����ϴ� ��.
//
//	Dijkstra(g, distance, direction);
//
//	for (int i = 0; i < g.vSize; ++i)
//		cout << "[" << i << "]: " << distance[i] << endl;
//	for (int i = 0; i < g.vSize; ++i)
//		cout << "[" << i << "]: " << direction[i].sVer << "->" << direction[i].eVer <<  endl;
//
//	UninitGraph(g);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int sVer, eVer;
//	int weight;
//	Node* link;
//	Node(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w), link(0) {}
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int sv, int ev, int weight)
//{
//	if (g.v[sv] == NULL)
//	{
//		g.v[sv] = new Node(sv, ev, weight);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[sv]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(sv, ev, weight);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << p->sVer << "," << p->eVer << ":" << p->weight << ")";
//		cout << endl;
//	}
//}
//
//struct Edge
//{
//	int sVer, eVer;
//	int weight;
//	Edge(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w) {}
//	bool operator<(const Edge& arg) const
//	{
//		return weight > arg.weight;
//	}
//};
//void Dijkstra(Graph& g, int* distance)
//{
//	distance[0] = 0;
//	for (int i = 1; i < g.vSize; ++i)
//		distance[i] = 0xffffff;
//	priority_queue<Edge> pq;
//	for (Node* p = g.v[0]; p; p = p->link)
//		pq.push(Edge(p->sVer, p->eVer, p->weight)); 
//	while (!pq.empty())
//	{
//		Edge e = pq.top();
//		pq.pop();
//		if (distance[e.sVer] + e.weight < distance[e.eVer])
//			distance[e.eVer] = distance[e.sVer] + e.weight;
//		for (Node* p = g.v[e.eVer]; p ; p = p->link)
//		{
//			pq.push(Edge(p->sVer, p->eVer, p->weight));
//		}
//	}
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1, 2/*����ġ*/); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2, 3);
//
//	AddEdge(g, 1, 3, 4);
//	AddEdge(g, 1, 4, 1);
//	AddEdge(g, 2, 5, 10);
//	AddEdge(g, 2, 6, 5);
//
//	AddEdge(g, 3, 7, 13);
//
//	AddEdge(g, 4, 5, 1);
//	AddEdge(g, 4, 7, 20);
//
//	AddEdge(g, 5, 7, 4);
//	AddEdge(g, 6, 7, 5);
//
//	PrintGraph(g);
//	int distance[8];
//	Dijkstra(g, distance);
//
//	for (int i = 0; i < g.vSize; ++i)
//		cout << "[" << i << "]: " << distance[i] << endl;
//
//	UninitGraph(g);
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int sVer, eVer;
//	int weight;
//	Node* link;
//	Node(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w), link(0) {}
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int sv, int ev, int weight)
//{
//	if (g.v[sv] == NULL)
//	{
//		g.v[sv] = new Node(sv, ev, weight);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[sv]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(sv, ev, weight);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << p->sVer << "," << p->eVer << ":" << p->weight << ")";
//		cout << endl;
//	}
//}
//
//struct Edge
//{
//	int sVer, eVer;
//	int weight;
//	Edge(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w) {}
//	bool operator<(const Edge& arg) const
//	{
//		return weight > arg.weight;
//	}
//};
//void Dajikstra(Graph& g, int* distance)
//{
//	distance[0] = 0;
//	for (int i = 1; i < g.vSize; ++i)
//		distance[i] = 0xffffff;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1, 2/*����ġ*/); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2, 3);
//
//	AddEdge(g, 1, 3, 4);
//	AddEdge(g, 1, 4, 1);
//	AddEdge(g, 2, 5, 10);
//	AddEdge(g, 2, 6, 5);
//
//	AddEdge(g, 3, 7, 13);
//
//	AddEdge(g, 4, 5, 1);
//	AddEdge(g, 4, 7, 20);
//
//	AddEdge(g, 5, 7, 4);
//	AddEdge(g, 6, 7, 5);
//
//	PrintGraph(g);
//	int distance[8];
//	Dajikstra(g, distance);
//
//	for (int i = 0; i < g.vSize; ++i)
//		cout << "[" << i << "]: " << distance[i] << endl;
//
//	UninitGraph(g);
//	system("pause");
//}




//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <functional>
//using namespace std;
//struct Edge
//{
//	int sVer, eVer;
//	int weight;
//	Edge(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w) {}
//	bool operator<(const Edge& arg) const
//	{
//		return weight > arg.weight;
//	}
//};
//int main()
//{
//	priority_queue<Edge> pq; //�켱 ���� ť
//							 //less �ִ���
//							 //greater �ּ���
//	pq.push(Edge(0, 1, 13));
//	pq.push(Edge(1, 2, 23));
//	pq.push(Edge(4, 5, 5));
//	pq.push(Edge(4, 6, 8));
//	pq.push(Edge(5, 6, 10));
//
//	Edge e(0, 0, 0);
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <functional>
//using namespace std;
//struct Edge
//{
//	int sVer, eVer;
//	int weight;
//	Edge(int sv, int ev, int w): sVer(sv), eVer(ev), weight(w) {}
//	bool operator<(const Edge& arg) const
//	{
//		return weight < arg.weight;
//	}
//};
//int main()
//{
//	priority_queue<Edge> pq; //�켱 ���� ť
//							//less �ִ���
//							//greater �ּ���
//	pq.push(Edge(0, 1, 13));
//	pq.push(Edge(1, 2, 23));
//	pq.push(Edge(4, 5, 5));
//	pq.push(Edge(4, 6, 8));
//	pq.push(Edge(5, 6, 10));
//
//	Edge e(0, 0, 0);
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//	e = pq.top();
//	cout << e.sVer << ',' << e.eVer << ":" << e.weight << endl;
//	pq.pop();
//
//	system("pause");
//}






//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <functional>
//using namespace std;
//template <typename T, typename Pred = less<T>>
//class Priority_queue
//{
//	vector<T> v;
//public:
//	void push(const T& data)
//	{
//		v.push_back(data);
//		make_heap(v.begin(), v.end(), Pred());
//	}
//	int top()
//	{
//		return v.front();
//	}
//	void pop()
//	{
//		pop_heap(v.begin(), v.end(), Pred());
//		v.pop_back();
//	}
//};
//int main()
//{
//	Priority_queue<int> pq; //�켱 ���� ť
//					   //less �ִ���
//					   //greater �ּ���
//	pq.push(100);
//	pq.push(50);
//	pq.push(80);
//	pq.push(30);
//	pq.push(40);
//
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//
//	system("pause");
//}
//


//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <functional>
//using namespace std;
//class Priority_queue
//{
//	vector<int> v;
//public:
//	void push(int data)
//	{
//		v.push_back(data);
//		make_heap(v.begin(), v.end());
//	}
//	int top()
//	{
//		return v.front();
//	}
//	void pop()
//	{
//		pop_heap(v.begin(), v.end());
//		v.pop_back();
//	}
//};
//int main()
//{
//	Priority_queue pq; //�켱 ���� ť
//													//less �ִ���
//													//greater �ּ���
//	pq.push(100);
//	pq.push(50);
//	pq.push(80);
//	pq.push(30);
//	pq.push(40);
//
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//
//	system("pause");
//}



//#include <iostream>
//#include <cstdlib>
//#include <queue>
//#include <functional>
//using namespace std;
//int main()
//{
//	priority_queue<int, vector<int>, less<int>> pq; //�켱 ���� ť
//	//less �ִ���
//	//greater �ּ���
//	pq.push(100);
//	pq.push(50);
//	pq.push(80);
//	pq.push(30);
//	pq.push(40);
//
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//
//	system("pause");
//}





//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//int main()
//{
//	priority_queue<int> pq; //�켱 ���� ť
//	
//	pq.push(100);
//	pq.push(50);
//	pq.push(80);
//	pq.push(30);
//	pq.push(40);
//
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	cout << pq.top() << endl;
//	pq.pop();
//	
//	system("pause");
//}

///*
//�׷����� ���ݱ����� ������ �������� �������� ������
//�ٵ� �Ѱ��� �������� ������ ����! �ٵ� ���� ����ġ�� �ִٸ�?
//
//���� ��� ������ ģ�е�(����ġ cost, weight�����)�� �� �� �ִ�.
//������ ����ġ�� �ο��Ǹ�, ������ ���� ������ ������ ���� ����, �ڽ�Ʈ�� ����� �� �ִ�.
//
//���ͽ�Ʈ���� �ٽ�
//�ּ� ��δ� �� �ٸ� �ּ� ��ε��� �������� �̷������.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int sVer, eVer;
//	int weight;
//	Node* link;
//	Node(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w), link(0) {}
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int sv, int ev, int weight)
//{
//	if (g.v[sv] == NULL)
//	{
//		g.v[sv] = new Node(sv, ev, weight);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[sv]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(sv, ev, weight);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << p->sVer << "," << p->eVer << ":" << p->weight << ")";
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1, 2/*����ġ*/); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2, 3);
//
//	AddEdge(g, 1, 3, 4);
//	AddEdge(g, 1, 4, 1);
//	AddEdge(g, 2, 5, 10);
//	AddEdge(g, 2, 6, 5);
//
//	AddEdge(g, 3, 7, 13);
//
//	AddEdge(g, 4, 5, 1);
//	AddEdge(g, 4, 7, 20);
//
//	AddEdge(g, 5, 7, 4);
//	AddEdge(g, 6, 7, 5);
//
//	PrintGraph(g);
//	UninitGraph(g);
//	system("pause");
//}



///*
//�׷����� ���ݱ����� ������ �������� �������� ������
//�ٵ� �Ѱ��� �������� ������ ����! �ٵ� ���� ����ġ�� �ִٸ�?
//
//���� ��� ������ ģ�е�(����ġ cost, weight�����)�� �� �� �ִ�.
//������ ����ġ�� �ο��Ǹ�, ������ ���� ������ ������ ���� ����, �ڽ�Ʈ�� ����� �� �ִ�.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int sVer, eVer;
//	int weight;
//	Node* link;
//	Node(int sv, int ev, int w) : sVer(sv), eVer(ev), weight(w), link(0) {}
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int sv, int ev, int weight)
//{
//	if (g.v[sv] == NULL)
//	{
//		g.v[sv] = new Node(sv, ev, weight);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[sv]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(sv, ev, weight);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << p->sVer << "," << p->eVer << ":" << p->weight << ")";
//		cout << endl;
//	}
//}
//
//
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1, 3/*����ġ*/); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2, 2);
//
//	AddEdge(g, 1, 3, 4);
//	AddEdge(g, 1, 4, 1);
//	AddEdge(g, 2, 5, 10);
//	AddEdge(g, 2, 6, 5);
//	AddEdge(g, 3, 7, 13);
//
//	AddEdge(g, 4, 5, 1);
//	AddEdge(g, 4, 7, 20);
//
//	AddEdge(g, 5, 7, 4);
//	AddEdge(g, 6, 7, 5);
//
//	PrintGraph(g);
//	UninitGraph(g);
//	system("pause");
//}




///*
//�׷����� ���ݱ����� ������ �������� �������� ������
//�ٵ� �Ѱ��� �������� ������ ����! �ٵ� ���� ����ġ�� �ִٸ�?
//
//���� ��� ������ ģ�е�(����ġ cost, weight�����)�� �� �� �ִ�.
//������ ����ġ�� �ο��Ǹ�, ������ ���� ������ ������ ���� ����, �ڽ�Ʈ�� ����� �� �ִ�.
//
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int ver;
//	Node* link;
//	Node(int v) : ver(v), link(0) { }
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//	if (g.v[start_v] == NULL)
//	{
//		g.v[start_v] = new Node(end_v);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[start_v]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(end_v);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << i << "," << p->ver << ")";
//		cout << endl;
//	}
//}
//void _Dfs(Graph& g, int ver, int visited[])
//{
//	cout << ver << " ";
//	visited[ver] = 1; // �湮 �Ѱ�
//
//	for (Node* p = g.v[ver]; p; p = p->link)
//	{
//		if (visited[p->ver] != 1)
//			_Dfs(g, p->ver, visited);
//	}
//}
//void Dfs(Graph& g, int ver)
//{
//	int* visited = new int[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		visited[i] = 0;
//
//	_Dfs(g, ver, visited);
//	cout << endl;
//	// ���� ���� : ������ ���� �� ���� ��
//
//	delete[] visited;
//}
//void Bfs(Graph& g, int ver/*��� ����*/)
//{
//	queue<int> q; // ������ ��ȣ�� ������ ��.. �� �� �� ����
//	int* visited = new int[g.vSize];
//	q.push(ver);
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop(); // ��¥ ����
//		cout << cur << " ";
//		visited[cur] = 1;
//		/*
//		ť�� ���� �� üũ ���� ������ �̷��� 7�� ������ ����ϰ� ��..
//		*/
//		for (Node* p = g.v[cur]; p; p = p->link)
//			if (visited[p->ver] != 1)
//			{
//				q.push(p->ver);// ���� �������� ��ȣ, �� �湮���� �ʴ� ��鸸
//			}
//	}
//	cout << endl;
//	delete[] visited;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintGraph(g);
//	Bfs(g, 0); // Level order�� �����
//	UninitGraph(g);
//	system("pause");
//}
//




//// ���� ���� ����Ʈ�� �ٲٰ� ����
///*
//Ž�� ( ��� ���� ����ϵ��� ��� ����, ��� ������ Ž���غ��ڴ� �� )
//dfs Ž�� - ���̷� Ž�� (�� �̻� ������ ������ ���� ������, �� �� �ִµ����� ������)
//
//bfs Ž�� - �ʺ� �켱���� Ž�� ( �̿��� �������� 0 ���� �������� �� Ž���ϰ� ������ )
//
//Ʈ���� ���̴� �׷����� ����Ŭ�� �̷�⶧���� �װ� üũ �ؾ� �Ѵ�.
//����Ƽ�� ���� ( Ž�� �� ������ Ȯ���ϴ� ��)
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int ver;
//	Node* link;
//	Node(int v) : ver(v), link(0) { }
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//	if (g.v[start_v] == NULL)
//	{
//		g.v[start_v] = new Node(end_v);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[start_v]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(end_v);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << i << "," << p->ver << ")";
//		cout << endl;
//	}
//}
//void _Dfs(Graph& g, int ver, int visited[])
//{
//	cout << ver << " ";
//	visited[ver] = 1; // �湮 �Ѱ�
//
//	for (Node* p = g.v[ver]; p; p = p->link)
//	{
//		if (visited[p->ver] != 1)
//			_Dfs(g, p->ver, visited);
//	}
//}
//void Dfs(Graph& g, int ver)
//{
//	int* visited = new int[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		visited[i] = 0;
//
//	_Dfs(g, ver, visited);
//	cout << endl;
//	// ���� ���� : ������ ���� �� ���� ��
//
//	delete[] visited;
//}
//void Bfs(Graph& g, int ver/*��� ����*/)
//{
//	queue<int> q; // ������ ��ȣ�� ������ ��.. �� �� �� ����
//	int* visited = new int[g.vSize];
//	q.push(ver);
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop(); // ��¥ ����
//		cout << cur << " ";
//		visited[cur] = 1;
//		/*
//		ť�� ���� �� üũ ���� ������ �̷��� 7�� ������ ����ϰ� ��..
//		*/
//		for (Node* p = g.v[cur]; p; p = p->link)
//			if (visited[p->ver] != 1)
//			{
//				q.push(p->ver);// ���� �������� ��ȣ, �� �湮���� �ʴ� ��鸸
//			}
//	}
//	cout << endl;
//	delete[] visited;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintGraph(g);
//	Bfs(g, 0); // Level order�� �����
//	UninitGraph(g);
//	system("pause");
//}
//




//// ���� ���� ����Ʈ�� �ٲٰ� ����
///*
//Ž�� ( ��� ���� ����ϵ��� ��� ����, ��� ������ Ž���غ��ڴ� �� )
//dfs Ž�� - ���̷� Ž�� (�� �̻� ������ ������ ���� ������, �� �� �ִµ����� ������)
//
//bfs Ž�� - �ʺ� �켱���� Ž�� ( �̿��� �������� 0 ���� �������� �� Ž���ϰ� ������ )
//
//Ʈ���� ���̴� �׷����� ����Ŭ�� �̷�⶧���� �װ� üũ �ؾ� �Ѵ�.
//����Ƽ�� ���� ( Ž�� �� ������ Ȯ���ϴ� ��)
//*/
//#include <iostream>
//#include <cstdlib>
//#include <queue>
//using namespace std;
//
//struct Node
//{
//	int ver;
//	Node* link;
//	Node(int v) : ver(v), link(0) { }
//};
//struct Graph
//{
//	//Node* v[8];// vertex 8��
//	Node** v;
//	int vSize;
//};
//void InitGraph(Graph& g, int vs)
//{
//	g.vSize = vs;
//	g.v = new Node*[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		g.v[i] = NULL;
//}
//void UninitGraph(Graph& g)
//{
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p;)
//		{
//			Node* np = p->link;
//			delete p;
//			p = np;
//		}
//	}
//	delete[] g.v;
//}
//
//void AddEdge(Graph& g, int start_v, int end_v)
//{
//	if (g.v[start_v] == NULL)
//	{
//		g.v[start_v] = new Node(end_v);
//		return;
//	}
//	Node* p = 0;
//	for (p = g.v[start_v]; p->link; p = p->link)
//		; // empty ..
//	p->link = new Node(end_v);
//}
//void PrintGraph(const Graph& g)
//{
//	cout << "v : ";
//	for (int i = 0; i < g.vSize; ++i)
//		cout << i << " ";
//	cout << endl;
//	cout << "E : ";
//	for (int i = 0; i < g.vSize; ++i)
//	{
//		for (Node* p = g.v[i]; p; p = p->link)
//			cout << "(" << i << "," << p->ver << ")";
//		cout << endl;
//	}
//}
//void _Dfs(Graph& g, int ver, int visited[])
//{
//	cout << ver << " ";
//	visited[ver] = 1; // �湮 �Ѱ�
//
//	for (Node* p = g.v[ver]; p; p = p->link)
//	{
//		if (visited[p->ver] != 1)
//			_Dfs(g, p->ver, visited);
//	}
//}
//void Dfs(Graph& g, int ver)
//{
//	int* visited = new int[g.vSize];
//	for (int i = 0; i < g.vSize; ++i)
//		visited[i] = 0;
//
//	_Dfs(g, ver, visited);
//	cout << endl;
//	// ���� ���� : ������ ���� �� ���� ��
//
//	delete[] visited;
//}
//void Bfs(Graph& g, int ver/*��� ����*/)
//{
//	queue<int> q; // ������ ��ȣ�� ������ ��.. �� �� �� ����
//	int* visited = new int[g.vSize];
//	q.push(ver);
//	visited[ver] = 1; // ť�� ���� ���� ������ �湮�ϰ� �� ���̱� ������
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop(); // ��¥ ����
//		cout << cur << " ";
//		for (Node* p = g.v[cur]; p; p = p->link)
//			if (visited[p->ver] != 1)
//			{
//				q.push(p->ver);// ���� �������� ��ȣ, �� �湮���� �ʴ� ��鸸
//				visited[p->ver] = 1;
//			}
//	}
//	cout << endl;
//	delete[] visited;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 �׷����� ������ // ���� ����� ���� ��ŭ ���ؽ��� ����!
//	AddEdge(g, 0, 1); // �̰� �ڵ�ȭ �� �� ����(�ʱ� ������)
//	AddEdge(g, 0, 2);
//
//	AddEdge(g, 1, 0);
//	AddEdge(g, 1, 3);
//	AddEdge(g, 1, 4);
//
//	AddEdge(g, 2, 0);
//	AddEdge(g, 2, 5);
//	AddEdge(g, 2, 6);
//
//	AddEdge(g, 3, 1);
//	AddEdge(g, 3, 7);
//
//	AddEdge(g, 4, 1);
//	AddEdge(g, 4, 7);
//
//	AddEdge(g, 5, 2);
//	AddEdge(g, 5, 7);
//
//	AddEdge(g, 6, 2);
//	AddEdge(g, 6, 7);
//
//	AddEdge(g, 7, 3);
//	AddEdge(g, 7, 4);
//	AddEdge(g, 7, 5);
//	AddEdge(g, 7, 6);
//
//	PrintGraph(g);
//	Bfs(g, 0); // Level order�� �����
//	UninitGraph(g);
//	system("pause");
//}
