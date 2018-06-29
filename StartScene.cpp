#include "GameScene.h"
#include "StartScene.h"    
USING_NS_CC;   
CCScene* StartScene::scene()  
{  
    CCScene *scene = CCScene::create();  
  
    // 'layer' is an autorelease object  
    StartScene *layer = StartScene::create();  
  
    // add layer as a child to scene  
    scene->addChild(layer);  
  
    // return the scene  
    return scene;  
}  
  
//场景组件放置  
bool StartScene::init()  
{  
    //声明一个按钮  
	CCMenuItemImage *pjingdian = CCMenuItemImage::create("jingdian.png", "jingdian_selected.png", this, menu_selector(StartScene::menuGoToGameScene));//声明按钮的回调（执行）函数，头文件已经声明过这个函数  
	pjingdian->setPosition(ccp(400, 400));
	CCMenuItemImage *plaizi = CCMenuItemImage::create("laizi.png", "laizi_selected.png", this, menu_selector(StartScene::menuGoToGameScene2));//声明按钮的回调（执行）函数，头文件已经声明过这个函数  
	plaizi->setPosition(ccp(400, 300));
	CCMenuItemImage *ptuichu = CCMenuItemImage::create("tuichu.png", "tuichu_selected.png", this, menu_selector(StartScene::menuCloseCallback));//声明按钮的回调（执行）函数，头文件已经声明过这个函数  
	ptuichu->setPosition(ccp(400, 200));
	CCMenu* pMenu = CCMenu::create(pjingdian, plaizi, ptuichu, NULL);
    pMenu->setPosition(ccp(0,0));
    this->addChild(pMenu);  
    return true;  
}  
void StartScene::menuCloseCallback(Ref* pSender)
{
    //Close the cocos2d-x game scene and quit the application
    Director::getInstance()->end();
    #if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
//按钮的回调（执行）函数的实现  
void StartScene::menuGoToGameScene(CCObject* pSender)  
{   
    //CCTransitionMoveInL为左进入特效，0.4f为耗时，越少越快，可以为3.0f等，HelloWorld::scene()就是要切换到的场景  
    CCDirector::sharedDirector()->replaceScene(CCTransitionMoveInL::create(0.4f,GameScene::scene()));  
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)  
    exit(0);  
#endif   
}  
void StartScene::menuGoToGameScene2(CCObject* pSender)
{
	StartScene::setmoshi(1);
	//CCTransitionMoveInL为左进入特效，0.4f为耗时，越少越快，可以为3.0f等，HelloWorld::scene()就是要切换到的场景  
	CCDirector::sharedDirector()->replaceScene(CCTransitionMoveInL::create(0.4f, GameScene::scene()));
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)  
	exit(0);
#endif   
}