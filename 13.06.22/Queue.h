#pragma once
template <typename T>
class Queue
{
private:
	int size_qe = 0;
	T* queue = nullptr;
	int count_el = 0;
public:
	Queue(int size_qe)
	{
		this->size_qe = size_qe;
		this->queue = new T[size_qe];
	}
	~Queue()
	{
		delete[]queue;
	}
	Queue& operator = (const Queue& other)
	{
		if (queue != nullptr) delete[]queue;
		this->size_qe = other.size_qe;
		this->count_el = other.count_el;
		queue = new T[other.size_qe];
		for (int i = 0; i < size_qe; i++)
		{
			this->queue[i] = other.queue[i];
		}
		return *this;
	}
	T& front()
	{
		return queue[0];
	}
	T& back()
	{
		return queue[count_el - 1];
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
		for (int i = 0; i < count_el - 1; i++)
		{
			swap(queue[i], queue[i + 1]);
		}
		if (count_el > 0) count_el--;
	}
};

