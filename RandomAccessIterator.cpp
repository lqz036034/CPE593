#include <iostream>
#include <vector>
using namespace std;

template<class Container_T, class T> class MyIterator
{
public:
	MyIterator(Container_T &orig_container, int index)
	{
		this->container = &orig_container;
		this->index = index;
	}
	
	T operator*() const
	{
		return (*container)[index];
	}

	MyIterator &operator++()
	{
		++index; 
		return *this;
	}

	MyIterator &operator--()
	{
		--index; 
		return *this;
	}
	
	bool operator==(const MyIterator &other) const
	{
		if (container != (other.container))
			return false;
		if (this->index != other.index)
			return false;
		return true;
	}

	bool operator!=(const MyIterator &other) const
	{
		if (container != (other.container))
			return true;
		else
		{
			if (this->index != other.index)
				return true;
			else return false;
		}
	}

private:
	int index;
	Container_T *container;
};

int main()
{


	return 0;
}
