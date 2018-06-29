#include "GameScene.h"
#include<vector>

using namespace std;
GameScene::GameScene()
{
}


GameScene::~GameScene()
{
}
void Init()
{
	vector<int>cardpack;
	for (int i = 0; i < 54; i++)
	{   if(i<52)
		    cardpack.push_back(i%13+1);
	    else 
			cardpack.push_back(i);
	}
	course mycourse;
	mycourse.Shuffle(cardpack);
}