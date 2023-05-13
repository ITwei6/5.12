#include<iostream>
using namespace std;

class A
{
public:
	A(int a )//初始化列表
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
	//初始化列表：对象的成员定义的地方
	B(int a, int ref)
		:_ref(ref)//引用
		, _n(1)//const修饰的
		,_obj(20)//自定义类型--没有默认构造函数
	{
	}
private:
	A _obj;//没有默认构造函数时
	int& _ref;//引用
	//这两个特征就是必须在定义的时候就初始化
	const int _n;//const修饰的
	int _x = 1;//这个1是缺省值，缺省值是给初始化列表的
	//初始化列表没有显式定义_x就会使用这个缺省值
};
//int main()
//{
//	//对象实例化--对象整体定义
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
			perror("malloc申请空间失败");
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

			//要求数组初始化一下
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