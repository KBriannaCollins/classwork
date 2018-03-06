#include <iostream>

using namespace std;

const int CAP = 3;

template <typename T>
class Arr {
public:
	Arr(){}
	Arr(T zero, T one, T two);
	T GetFirst(){return m_array[0];}
	T GetSecond(){return m_array[1];}
	T GetThird(){return m_array[2];}
	void SetValue(int index, T item);
	T find_max();
	T find_min();
	void sort_ascending();
	void sort_descending();

	/*
	==
	<<
	*/
private:
	T m_array[CAP];

};

template <typename T>
Arr::Arr(T zero, T one, T two)
{
	m_array[0] = zero;
	m_array[1] = one;
	m_array[2] = two;
}

template <typename T>
void Arr::SetValue(int index, T item)
{
	m_array[index] = item;
}

template <typename T>
T Arr::find_max()
{
	//this max won't work for string
	T max = -10000000;
	for (unsigned i = 0; i <= 3; i++)
	{
		if (m_array[i] > max)
			max = m_array[i];
	}
	return max;
}

template <typename T>
T Arr::find_min()
{
	//this min won't work for string
	T min = 10000000;
	for (unsigned i = 0; i < 3; i++)
	{
		if (m_array[i] <= min)
			min = m_array[i];
	}
	return min;
}
template <typename T>
void Arr::sort_ascending()
{
	if (isdigit())
	{
		//sort int
	}
	else
	{
		//sort string

	}
}

template <typename T>
void Arr::sort_descending()
{
	/* test if string or int*/

}
