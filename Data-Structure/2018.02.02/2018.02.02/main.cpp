//#include <iostream>
//#include<cstdlib>
//struct Node     //8����Ʈ, ����� ũ��� 8����Ʈ
//{
//   int data;
//   Node* link;   //���� ����� �ּҸ� �����ϱ� ������ �������̸� �����
//              //���� �񿬼��� �޸� �ڷᱸ���� ��� ����� �ȴ�, 
//};
//using namespace std;
//template <typename T>
//void PrintNode(const T head)
//{
//   for (T p = (Node*)head; p; p = p->link)
//      cout << p->data << endl;
//}
//int main()
//{
//   Node* head;   //�����۰� ��������� ������ ���ÿ� �������
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };    
//   
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//   PrintNode(head);
//
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8����Ʈ, ����� ũ��� 8����Ʈ
//{
//   int data;
//   Node* link;   //���� ����� �ּҸ� �����ϱ� ������ �������̸� �����
//              //���� �񿬼��� �޸� �ڷᱸ���� ��� ����� �ȴ�, 
//};
//int main()
//{
//   Node* head;   //�����۰� ��������� ������ ���ÿ� �������
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };    
//   
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//   
//   cout << p->data << endl;
//   p=p->link;
//   cout << p->data << endl;
//   p = p->link;
//   cout << p->data << endl;
//   p = p->link;
//   cout << p->data << endl;
//   p = p->link;
//   cout << p->data << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8����Ʈ, ����� ũ��� 8����Ʈ
//{
//   int data;
//   Node* link;   //���� ����� �ּҸ� �����ϱ� ������ �������̸� �����
//              //���� �񿬼��� �޸� �ڷᱸ���� ��� ����� �ȴ�, 
//};
//int main()
//{
//   Node* head;   //�����۰� ��������� ������ ���ÿ� �������
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };
//
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//
//   cout << head->data << endl;
//   cout << head->link->data << endl;
//   cout << head->link->link->data << endl;
//   cout << head->link->link->link->data << endl;
//   cout << head->link->link->link->link->data << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8����Ʈ, ����� ũ��� 8����Ʈ
//{
//   int data;
//   Node* link;   //���� ����� �ּҸ� �����ϱ� ������ �������̸� �����
//             //���� �񿬼��� �޸� �ڷᱸ���� ��� ����� �ȴ�, 
//};
//int main()
//{
//   Node* head;   //�����۰� ��������� ������ ���ÿ� �������
//   Node n1 = { 10,NULL };
//   Node n2 = { 20,NULL };
//   Node n3 = { 30,NULL };
//   Node n4 = { 40,NULL };
//   Node n5 = { 50,NULL };
//
//   n1.link = &n2;
//   n2.link = &n3;
//   n3.link = &n4;
//   n4.link = &n5;
//   head = &n1;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//struct Node     //8����Ʈ, ����� ũ��� 8����Ʈ
//{
//   int data;  
//   Node* link;   //���� ����� �ּҸ� �����ϱ� ������ �������̸� �����
////���� �񿬼��� �޸� �ڷᱸ���� ��� ����� �ȴ�, 
//};
//
//int main()
//{
//   cout << sizeof(Node) << endl;
//   system("pause");
//}
//#include <iostream>
//#include <queue>
//#include <deque>
//#include <list>
//#include <vector>
//#include <cstdlib>
//using namespace std;
//template <typename T, typename Cont=deque<T> >
//class Queue
//{
// Cont _cont;
//public:
// void push(const T& data)
// {
//  _cont.push_back(data);
// }
// const T& front()const
// {
//  return _cont.front();
// }
// void pop()
// {
//  _cont.pop_front();
// }
//};
//int main()
//{
// //Queue<int, list<int> > q;
// //Queue<int > q;
// Queue<int,vector<int> > q;
// q.push(10);
// q.push(20);
// q.push(30);
//
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
//
// system("pause");
//}

//#include <iostream>
//#include <queue>
//#include <deque>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Queue
//{ 
// deque<T> _cont;
//public:
// void push(const T& data)
// {
//  _cont.push_back(data);
// }
// const T& front()const
// {
//  return _cont.front();
// }
// void pop()
// {
//  _cont.pop_front();
// }
//};
//int main()
//{
// Queue<int> q;
// q.push(10);
// q.push(20);
// q.push(30);
//
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
// cout << q.front() << endl;
// q.pop();
//
// system("pause");
//}

//#include <iostream>
//#include <queue>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Queue
//{
// T* que;
// int capacity;
// int front, rear;
// Queue(const Queue&);
// const Queue& operator=(const Queue&);
//public:
// Queue(int cap = 1000) :front(0), rear(0)
// {
//  que = new T[capacity = cap];
// }
// ~Queue() { delete[] que; }
// void push(const T& data)
// {
//  if ((rear + 1) % capacity == front)
//   return;
//  que[rear = (rear + 1) % capacity] = data;
// }
// const T& pop()
// {
//  if (rear != front)
//   return que[front = (front + 1) % capacity];
//  throw "empty queue!";
// }
//};
//int main()
//{
// Queue<int> q;
// q.push(10);
// q.push(20);
// q.push(30);
// cout << q.pop() << endl;
// cout << q.pop() << endl;
// cout << q.pop() << endl;
// q.push(10);
// q.push(20);
// q.push(30);
// cout << q.pop() << endl;
// cout << q.pop() << endl;
// cout << q.pop() << endl;
//
// system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//#include<queue>////fifo ����
//using namespace std;
//class Queue
//{
//   int que[5];
//   int rear, front;
//public:
//   Queue() :front(0), rear(0) {}
//   //~Queue() { delete[] que; }
//   void push(int data)
//   {
//      if ((rear + 1) % 5 == front)
//      return;      
//      que[rear=(rear+1)%5] = data;   //�޸� �ִ밳���� 5���̴ϱ� 5�� ����
//   }
//   int pop()
//   {
//      if(rear != front)
//         return que[front=(front+1)%5]; //�޸� �ִ밳���� 5���̴ϱ� 5�� ����
//      throw "empty queue!";
//   }
//};
//int main()
//{
//   Queue q;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//#include<queue>////fifo ����
//using namespace std;
//class Queue
//{
//   int que[10];
//   int rear,front;
//public:
//   Queue() :front(0),rear(0){}
//   ~Queue() { delete[] que; }
//   void push(int data)
//   {
//      que[rear++] = data;
//   }
//   int pop()
//   {
//      return que[front++];
//   }
//};
//int main()
//{
//   Queue q;
//   q.push(10);
//   q.push(20);
//   q.push(30);
//
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   cout << q.pop() << endl;
//   q.pop();
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//template<typename T>
//class Vector
//{
//   T* _arr;
//   int _size;
//   int _capacity;
//   Vector(const Vector&);//�����Լ��� ����.
//   const Vector& operator=(const Vector& arg);
//public:
//   class Iterator     
//   {
//      T* ptr;   
//   public:
//      Iterator(T* p):ptr(p){}
//      bool operator!= (Iterator arg)const
//      {
//         return ptr!= arg.ptr;  
//      }
//      Iterator operator++()
//      {
//         ++ptr;
//         return *this;
//      }
//      T& operator*()
//      {
//         return *ptr;
//      }
//   };
//public:
//   Vector() :_arr(0), _size(0), _capacity(0) //vector�� ó���� �����ϸ� ��δ� 0.buf�� NULL��ſ� 0�̶����ذž�.
//   {
//   }
//   ~Vector()
//   {
//      if (_arr)
//         delete[] _arr;
//   }
//   int size()const { return _size; }
//   void push_back(const T& data)//////////////////////////�����ϰ� ������ذ�.
//   {
//      if (_size == _capacity)
//      {
//         if (_capacity == 0)
//            _arr = new T[_capacity = 1];//size�� cap�� ���϶� �޸� �ϳ������ //1���� cap
//         else//�������� 2���ؼ� ���ο�޸𸮸� �����.
//         {//�ӽø޸𸮸� ��������. newint�ϸ� �������� ���󰡼�.
//            T* _tarr = new T[_capacity *= 2];
//            for (int i = 0; i < _size; ++i)
//               _tarr[i] = _arr[i];
//            delete[] _arr; //������ �����ְ�
//            _arr = _tarr;
//         }
//      }
//      _arr[_size++] = data;
//   }
//   const T& operator[](int idx)const //����Ұ�. �б���Լ�.
//   {
//      return _arr[idx];
//   }
//   T& operator[](int idx)//�Լ��ߺ�.�а��°� ������ �Լ�.
//   {
//      return _arr[idx];
//   }
//   Iterator begin()
//   {
//      return Iterator(_arr);
//   }
//   Iterator end()
//   {
//      return Iterator(_arr+_size);
//   }
//};
//int main()
//{
//   Vector<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (Vector<int>::Iterator iter= arr.begin(); iter !=arr.end(); ++iter)
//      cout << *iter << endl;
//   system("pause");
//}
//#include<iostream>
//#include<cstdlib>
//using namespace std;
//template<typename T>
//class Vector
//{
//   T* _arr;
//   int _size;
//   int _capacity;
//   Vector(const Vector&);//�����Լ��� ����.
//   const Vector& operator=(const Vector& arg);
//public:
//   Vector() :_arr(0), _size(0), _capacity(0) //vector�� ó���� �����ϸ� ��δ� 0.buf�� NULL��ſ� 0�̶����ذž�.
//   {
//   }
//   ~Vector()
//   {
//      if (_arr)
//         delete[] _arr;
//   }
//   int size()const { return _size; }
//   void push_back(const T& data)//////////////////////////�����ϰ� ������ذ�.
//   {
//      if (_size == _capacity)
//      {
//         if (_capacity == 0)
//            _arr = new T[_capacity = 1];//size�� cap�� ���϶� �޸� �ϳ������ //1���� cap
//         else//�������� 2���ؼ� ���ο�޸𸮸� �����.
//         {//�ӽø޸𸮸� ��������. newint�ϸ� �������� ���󰡼�.
//            T* _tarr = new T[_capacity *= 2];
//            for (int i = 0; i < _size; ++i)
//               _tarr[i] = _arr[i];
//            delete[] _arr; //������ �����ְ�
//            _arr = _tarr;
//         }
//      }
//      _arr[_size++] = data;
//   }
//   const T& operator[](int idx)const //����Ұ�. �б���Լ�.
//   {
//      return _arr[idx];
//   }
//   T& operator[](int idx)//�Լ��ߺ�.�а��°� ������ �Լ�.
//   {
//      return _arr[idx];
//   }
//};
//int main()
//{
//   Vector<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Vector
//{
//   T* _arr;
//   int _size;
//   int _capacity;
//   Vector(const Vector&);
//   const Vector& operator=(const Vector& arg);
//public:
//   Vector() :_arr(0),_size(0), _capacity(0)
//   {
//      //���ʹ� �޸� ��������, 0�� ��� �����
//   }
//   ~Vector()
//   {
//      if (_arr)    //buf�� NULL�� �ƴϸ�~
//      delete[] _arr; 
//   }
//   void push_back(T data)
//   {
//      if(_size<_capacity)
//         _arr[_size++] = data;
//      else     //�޸𸮰� �����ҽÿ�
//      {
//         if (_capacity == 0)
//         {
//            _arr = new T[_capacity=1];
//            _arr[_size++] = data;
//         }
//         else    //���� �޸𸮸� �ø� �� ����, �׷��� ���ο� �޸𸮸� ������
//            //������ ���ο� �޸𸮸� ����� �������� �����ǹǷ� �ӽø޸𸮸� ������
//         {
//            T* _tarr = new T[_capacity *= 2]; //�ι� �� ���� �޸� ���� 
//            for (int i = 0; i < _size; ++i)
//               _tarr[i] = _arr[i];   //�������� �����Ų��.
//            delete[] _arr;
//            _arr = _tarr;
//            _arr[_size++] = data;
//         }
//      }
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const  //const ��ü ������� �ΰ������
//   {
//      return _arr[idx];
//   }
//   T& operator[](int idx)  //�ΰ������. ��ó�� ������ ������ �ٲٷ��� const�� ����
//   {
//      return _arr[idx];
//   }
//};
//int main()
//{
//   Vector<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array
//{
//   T* _buf;
//   int _size;
//   Array(const Array&);
//   const Array& operator=(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(T data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const  //const ��ü ������� �ΰ������
//   {
//      return _buf[idx];
//   }
//   T& operator[](int idx)  //�ΰ������. ��ó�� ������ ������ �ٲٷ��� const�� ����
//   {
//      return _buf[idx];
//   }
//};
//int main()
//{
//   Array<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array
//{
//   T* _buf;
//   int _size;
//   Array(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(T data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const  //const ��ü ������� �ΰ������
//   {
//      return _buf[idx];
//   }
//    T& operator[](int idx)  //�ΰ������. ��ó�� ������ ������ �ٲٷ��� const�� ����
//   {
//      return _buf[idx];
//   }
//};
//void PrintArray(const Array<int>& arr)   //�迭�̴ϱ� ���� �ȵǵ��� ����
//{
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//}
//int main()
//{
//   Array<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   arr[1] = 200;    //�� ����, �� �ڵ忡�� const �����Ѵ�
//   PrintArray(arr);
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//template <typename T>
//class Array
//{
//   T* _buf;
//   int _size;
//   Array(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(T data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   const T& operator[](int idx) const
//   {
//      return _buf[idx];
//   }
//};
//int main()
//{
//   Array<int> arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}
//#include <iostream>
//#include <cstdlib>
//using namespace std;
//class Array
//{
//   int* _buf;
//   int _size;
//   Array(const Array& arg);
//public:
//   Array(int cap = 100) :_size(0)
//   {
//      _buf = new int[cap];
//   }
//   ~Array() { delete[] _buf; }
//   void push_back(int data)
//   {
//      _buf[_size++] = data;
//   }
//   int size()const { return _size; }
//   int operator[](int idx) const
//   {
//      return _buf[idx];
//   }
//};
//int main()
//{
//   Array arr;
//   arr.push_back(10);
//   arr.push_back(20);
//   arr.push_back(30);
//   
//   for (int i = 0; i < arr.size(); ++i)
//      cout << arr[i] << endl;
//   system("pause");
//}