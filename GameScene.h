#pragma once
#include "cocos2d.h"
#include "course.h"
USING_NS_CC;
class GameScene
{
public:
	GameScene();
	~GameScene();
	static cocos2d::CCScene* scene();
	CREATE_FUNC(GameScene);
	void Init();
	course mycourse;
};

