/*
정렬 : 데이터를 규칙성 있게 만드는 일반적인 방법

데이터가 정렬되어 있지 않다면, 효율적으로 처리가 어려움

퀵 정렬 - 피봇값을 임의의 값을 선택함(보통 맨 앞이나 맨 뒤로 선택함)

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
		int pivot = left; //기준 값
		int i = left + 1;
		int j = right;
		// 초기값의 세팅

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
void Sort(int list[], int size) // 퀵 정렬
{
	_Sort(list, 0, size - 1); // 구간 정보
}
int main()
{
	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
	int size = 8;

	PrintList(list, size);
	Sort(list, size);// 퀵 정렬
	PrintList(list, size);

	system("pause");
}





///*
//정렬 : 데이터를 규칙성 있게 만드는 일반적인 방법
//
//데이터가 정렬되어 있지 않다면, 효율적으로 처리가 어려움
//
//퀵 정렬 - 피봇값을 임의의 값을 선택함(보통 맨 앞이나 맨 뒤로 선택함)
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
//	int pivot = left; //기준 값
//	int i = left + 1;
//	int j = right; 
//	// 초기값의 세팅
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
//void Sort(int list[], int size) // 퀵 정렬
//{
//	_Sort(list, 0, size - 1); // 구간 정보
//}
//int main()
//{
//	int list[10] = { 40, 30, 10, 70, 50, 80, 90, 60 };
//	int size = 8;
//
//	PrintList(list, size);
//	Sort(list, size);// 퀵 정렬
//	PrintList(list, size);
//
//	system("pause");
//}
//

///*
//정렬 : 데이터를 규칙성 있게 만드는 일반적인 방법
//
//데이터가 정렬되어 있지 않다면, 효율적으로 처리가 어려움
//
//퀵 정렬 - 피봇값을 임의의 값을 선택함(보통 맨 앞이나 맨 뒤로 선택함)
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
//void Sort(int list[], int size) // 선택 정렬
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
//	Sort(list, size); // 선택 정렬
//	PrintList(list, size);
//
//	system("pause");
//}



///*
//정렬 : 데이터를 규칙성 있게 만드는 일반적인 방법
//
//데이터가 정렬되어 있지 않다면, 효율적으로 처리가 어려움
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
//void Sort(int list[], int size) // 선택 정렬
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
//	Sort(list, size); // 선택 정렬
//	PrintList(list, size);
//
//	system("pause");
//}





///*
//정렬 : 데이터를 규칙성 있게 만드는 일반적인 방법
//
//데이터가 정렬되어 있지 않다면, 효율적으로 처리가 어려움
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
//void Sort(int list[], int size) // 선택 정렬
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
//	Sort(list, size); // 선택 정렬
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
//	//Node* v[8];// vertex 8개
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1, 2/*가중치*/); // 이건 자동화 할 수 없음(초기 데이터)
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
//	Edge direction[8]; // 현재 나한테 오는게 어디서 출발햇는지 기억하는 것.
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
//	//Node* v[8];// vertex 8개
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1, 2/*가중치*/); // 이건 자동화 할 수 없음(초기 데이터)
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
//	//Node* v[8];// vertex 8개
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1, 2/*가중치*/); // 이건 자동화 할 수 없음(초기 데이터)
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
//	priority_queue<Edge> pq; //우선 순위 큐
//							 //less 최대힙
//							 //greater 최소힙
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
//	priority_queue<Edge> pq; //우선 순위 큐
//							//less 최대힙
//							//greater 최소힙
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
//	Priority_queue<int> pq; //우선 순위 큐
//					   //less 최대힙
//					   //greater 최소힙
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
//	Priority_queue pq; //우선 순위 큐
//													//less 최대힙
//													//greater 최소힙
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
//	priority_queue<int, vector<int>, less<int>> pq; //우선 순위 큐
//	//less 최대힙
//	//greater 최소힙
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
//	priority_queue<int> pq; //우선 순위 큐
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
//그래프를 지금까지는 정점과 엣지들의 집합으로 보았음
//근데 한가지 가만하지 않은게 잇음! 근데 만약 가중치가 있다면?
//
//예를 들어 관계의 친밀도(가중치 cost, weight라고함)를 줄 수 있다.
//간선에 가중치가 부여되면, 간선에 따라서 인접한 정접들 간에 간선, 코스트를 계산할 수 있다.
//
//다익스트라의 핵심
//최소 경로는 또 다른 최소 경로들의 집합으로 이루어진다.
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
//	//Node* v[8];// vertex 8개
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1, 2/*가중치*/); // 이건 자동화 할 수 없음(초기 데이터)
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
//그래프를 지금까지는 정점과 엣지들의 집합으로 보았음
//근데 한가지 가만하지 않은게 잇음! 근데 만약 가중치가 있다면?
//
//예를 들어 관계의 친밀도(가중치 cost, weight라고함)를 줄 수 있다.
//간선에 가중치가 부여되면, 간선에 따라서 인접한 정접들 간에 간선, 코스트를 계산할 수 있다.
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
//	//Node* v[8];// vertex 8개
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
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1, 3/*가중치*/); // 이건 자동화 할 수 없음(초기 데이터)
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
//그래프를 지금까지는 정점과 엣지들의 집합으로 보았음
//근데 한가지 가만하지 않은게 잇음! 근데 만약 가중치가 있다면?
//
//예를 들어 관계의 친밀도(가중치 cost, weight라고함)를 줄 수 있다.
//간선에 가중치가 부여되면, 간선에 따라서 인접한 정접들 간에 간선, 코스트를 계산할 수 있다.
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
//	//Node* v[8];// vertex 8개
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
//	visited[ver] = 1; // 방문 한거
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
//	// 종료 조건 : 끝까지 갔을 때 널일 때
//
//	delete[] visited;
//}
//void Bfs(Graph& g, int ver/*출발 정점*/)
//{
//	queue<int> q; // 정점의 번호만 담으면 됨.. 다 알 수 있음
//	int* visited = new int[g.vSize];
//	q.push(ver);
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop(); // 진짜 제거
//		cout << cur << " ";
//		visited[cur] = 1;
//		/*
//		큐에 담을 때 체크 하지 않으면 이렇게 7이 여러번 출력하게 됨..
//		*/
//		for (Node* p = g.v[cur]; p; p = p->link)
//			if (visited[p->ver] != 1)
//			{
//				q.push(p->ver);// 인접 정점들의 번호, 단 방문되지 않는 놈들만
//			}
//	}
//	cout << endl;
//	delete[] visited;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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
//	Bfs(g, 0); // Level order와 비슷함
//	UninitGraph(g);
//	system("pause");
//}
//




//// 이제 인접 리스트로 바꾸고 싶음
///*
//탐색 ( 어디서 부터 출발하든지 상관 없고, 모든 정점을 탐색해보자는 것 )
//dfs 탐색 - 깊이로 탐색 (더 이상 인접한 접점이 없을 때까지, 갈 수 있는데까지 끝까지)
//
//bfs 탐색 - 너비를 우선으로 탐색 ( 이웃한 정점으로 0 정점 기준으로 다 탐색하고 내려감 )
//
//트리와 차이는 그래프는 사이클을 이루기때문에 그걸 체크 해야 한다.
//비지티는 변수 ( 탐색 한 놈인지 확인하는 놈)
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
//	//Node* v[8];// vertex 8개
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
//	visited[ver] = 1; // 방문 한거
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
//	// 종료 조건 : 끝까지 갔을 때 널일 때
//
//	delete[] visited;
//}
//void Bfs(Graph& g, int ver/*출발 정점*/)
//{
//	queue<int> q; // 정점의 번호만 담으면 됨.. 다 알 수 있음
//	int* visited = new int[g.vSize];
//	q.push(ver);
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop(); // 진짜 제거
//		cout << cur << " ";
//		visited[cur] = 1;
//		/*
//		큐에 담을 때 체크 하지 않으면 이렇게 7이 여러번 출력하게 됨..
//		*/
//		for (Node* p = g.v[cur]; p; p = p->link)
//			if (visited[p->ver] != 1)
//			{
//				q.push(p->ver);// 인접 정점들의 번호, 단 방문되지 않는 놈들만
//			}
//	}
//	cout << endl;
//	delete[] visited;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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
//	Bfs(g, 0); // Level order와 비슷함
//	UninitGraph(g);
//	system("pause");
//}
//




//// 이제 인접 리스트로 바꾸고 싶음
///*
//탐색 ( 어디서 부터 출발하든지 상관 없고, 모든 정점을 탐색해보자는 것 )
//dfs 탐색 - 깊이로 탐색 (더 이상 인접한 접점이 없을 때까지, 갈 수 있는데까지 끝까지)
//
//bfs 탐색 - 너비를 우선으로 탐색 ( 이웃한 정점으로 0 정점 기준으로 다 탐색하고 내려감 )
//
//트리와 차이는 그래프는 사이클을 이루기때문에 그걸 체크 해야 한다.
//비지티는 변수 ( 탐색 한 놈인지 확인하는 놈)
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
//	//Node* v[8];// vertex 8개
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
//	visited[ver] = 1; // 방문 한거
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
//	// 종료 조건 : 끝까지 갔을 때 널일 때
//
//	delete[] visited;
//}
//void Bfs(Graph& g, int ver/*출발 정점*/)
//{
//	queue<int> q; // 정점의 번호만 담으면 됨.. 다 알 수 있음
//	int* visited = new int[g.vSize];
//	q.push(ver);
//	visited[ver] = 1; // 큐에 넣은 놈은 무조건 방문하게 될 것이기 때문에
//	while (!q.empty())
//	{
//		int cur = q.front();
//		q.pop(); // 진짜 제거
//		cout << cur << " ";
//		for (Node* p = g.v[cur]; p; p = p->link)
//			if (visited[p->ver] != 1)
//			{
//				q.push(p->ver);// 인접 정점들의 번호, 단 방문되지 않는 놈들만
//				visited[p->ver] = 1;
//			}
//	}
//	cout << endl;
//	delete[] visited;
//}
//int main()
//{
//	Graph g;
//	InitGraph(g, 8); // 8,8 그래프를 만들어라 // 인정 행렬의 개수 만큼 버텍스가 있음!
//	AddEdge(g, 0, 1); // 이건 자동화 할 수 없음(초기 데이터)
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
//	Bfs(g, 0); // Level order와 비슷함
//	UninitGraph(g);
//	system("pause");
//}
