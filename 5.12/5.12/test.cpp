#include<iostream>
using namespace std;

class A
{
public:
	A(int a )//��ʼ���б�
		:_a(a)
	{
		cout << "A(int a = 0)" << endl;
	}
private:
	int _a;
};
class B
{
public:
	//��ʼ���б�����ĳ�Ա����ĵط�
	B(int a, int ref)
		:_ref(ref)//����
		, _n(1)//const���ε�
		,_obj(20)//�Զ�������--û��Ĭ�Ϲ��캯��
	{
	}
private:
	A _obj;//û��Ĭ�Ϲ��캯��ʱ
	int& _ref;//����
	//�������������Ǳ����ڶ����ʱ��ͳ�ʼ��
	const int _n;//const���ε�
	int _x = 1;//���1��ȱʡֵ��ȱʡֵ�Ǹ���ʼ���б��
	//��ʼ���б�û����ʽ����_x�ͻ�ʹ�����ȱʡֵ
};
//int main()
//{
//	//����ʵ����--�������嶨��
//	B bb1(10, 1);
//}
 typedef int DataType;
class Stack
{
public:
	Stack(size_t capacity = 10)
	{
		_array = (DataType*)malloc(capacity * sizeof(DataType));
		if (nullptr == _array)
		{
			perror("malloc����ռ�ʧ��");
			return;
		}

		_size = 0;
		_capacity = capacity;
	}
	

	void Push(const DataType& data)
	{
		// CheckCapacity();
		_array[_size] = data;
		_size++;
	}

	~Stack()
	{
		if (_array)
		{
			free(_array);
			_array = nullptr;
			_capacity = 0;
			_size = 0;
		}
	}

private:
	DataType* _array;
	size_t _size;
	size_t _capacity;
};
class MyQueue
{
public:
	MyQueue()
	{}
	MyQueue(int capacity)
		:_pushst(capacity)
		,_popst(capacity)
	{

	}
private:
	Stack _pushst;
	Stack _popst;
};
//int main()
//{
//	MyQueue q1;
//	MyQueue q2(20);
//}
class Stack
{
public:
	Stack(int capacity=10)
		:_a((int*)malloc(sizeof(int)* capacity))
		,_top(0)
		,_capacity(capacity)
	{
		if (_a == nullptr)
		{
			perror("malloc");

			//Ҫ�������ʼ��һ��
			memset(_a, 0, sizeof(int) * capacity);
		}
	}
private:
	int* _a;
	int _top;
	int _capacity
};
class AA
{
public:
	AA(int row = 10, int col = 5)
		:_row(row)
		, _col(col)
	{
		_a = (int**)malloc(sizeof(int*) * row);
		for (int i = 0; i < row; i++)
		{
			_a[i] = (int*)malloc(sizeof(int) * col);
		}
	}
private:
	int** _a;
	int _row;
	int _col;
};