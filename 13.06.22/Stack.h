#pragma once

template <typename T>
void swap_func(T& t1, T& t2);

template <typename T>
class Stack
{
private:
	int size_st=0;
	T* stack = nullptr;
	int count_el = 0;
public:
	Stack(int size_st)
	{
		this->size_st = size_st;
		this->stack = new T[size_st];
	}
	~Stack()
	{
		delete[]stack;
	}
	Stack& operator = (const Stack& other)
	{
		if (stack != nullptr) delete[]stack;
		this->size_st = other.size_st;
		this->count_el = other.count_el;
		stack = new T[other.size_st];
		for (int i = 0; i < size_st; i++)
		{
			this->stack[i] = other.stack[i];
		}
		return *this;
	}
	T& top()
	{
		return stack[count_el-1];
	}
	bool empty()
	{
		return !count_el;
	}
	int size()
	{
		return count_el;
	}
	void push(const T& value)
	{
		stack[count_el++] = value;
	}
	void push(T&& value)
	{
		stack[count_el++] = value;
	}
	void emplace(const T& value)
	{
		stack[count_el++] = value;
	}
	void pop()
	{
		if (count_el > 0) count_el--;
	}
	//void swap(Stack& other)
	//{
	//	swap_func(*this, other);
	//	//Stack* buf1;
	//	//Stack* buf2;
	//	//buf1 = this;
	//	//buf2 = other;
	//	//this = buf2;
	//	//other = *buf1;
	//}
};

//template <typename T>
//void swap_func(T& t1, T& t2)
//{
//	swap(t1, t2);
//}

