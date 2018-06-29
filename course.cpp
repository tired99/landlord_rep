#include "course.h"
#include<vector>
#include <time.h>
#include<algorithm>
#include <iostream>
using namespace std;
course::course()
{
}


course::~course()
{
}
void course::Shuffle(std::vector<int> &vec)
{
	srand((unsigned)time(NULL));
	for (int i=0;i<vec.size;i++)
	{
		swap(vec[i], vec[rand() % 54]);
	}

}
