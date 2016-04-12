#include <iostream>
#include <vector>
#include <ctime>
#include <algorithm>

using namespace std;

int main()
{
	srand(time(NULL));
	// create a vector to store int
	vector<int> vec;
	int i;

	// push 5 values into the vector
	for (i = 0; i < 5; i++){
		vec.push_back(rand()%4+1);
	}

	sort(vec.begin(), vec.end());

	// use iterator to access the values
	vector<int>::iterator v = vec.begin();
	while (v != vec.end()) {
		cout << "value of v = " << *v << endl;
		v++;
	}

	return 0;
}