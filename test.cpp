#include <iostream>
#include <vector>  // header for vector

using namespace std;

// no of element to push in vector
const int N = 40 ; 

// funtion to calcuate sum of elements in vector container
inline void sum(int &sum, const vector<int> &data)
{
	// const vector iterator for vector traversal
	vector<int>::const_iterator it;
	//loop through vector and add its element
	for( it = data.begin(); it != data.end(); ++it)
	{
		sum = sum + *it;
	}
}

int main()
{
	int accum = 0;
	vector<int> data;
	for( int i = 0; i < N; ++i)
	{
		// push values to vector
		data.push_back(i);
	}
	sum(accum, data);
	cout<<"sum is " << accum <<endl;
	return 0;
}
