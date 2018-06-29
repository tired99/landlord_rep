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
  
//�����������  
bool StartScene::init()  
{  
    //����һ����ť  
	CCMenuItemImage *pjingdian = CCMenuItemImage::create("jingdian.png", "jingdian_selected.png", this, menu_selector(StartScene::menuGoToGameScene));//������ť�Ļص���ִ�У�������ͷ�ļ��Ѿ��������������  
	pjingdian->setPosition(ccp(400, 400));
	CCMenuItemImage *plaizi = CCMenuItemImage::create("laizi.png", "laizi_selected.png", this, menu_selector(StartScene::menuGoToGameScene2));//������ť�Ļص���ִ�У�������ͷ�ļ��Ѿ��������������  
	plaizi->setPosition(ccp(400, 300));
	CCMenuItemImage *ptuichu = CCMenuItemImage::create("tuichu.png", "tuichu_selected.png", this, menu_selector(StartScene::menuCloseCallback));//������ť�Ļص���ִ�У�������ͷ�ļ��Ѿ��������������  
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
//��ť�Ļص���ִ�У�������ʵ��  
void StartScene::menuGoToGameScene(CCObject* pSender)  
{   
    //CCTransitionMoveInLΪ�������Ч��0.4fΪ��ʱ��Խ��Խ�죬����Ϊ3.0f�ȣ�HelloWorld::scene()����Ҫ�л����ĳ���  
    CCDirector::sharedDirector()->replaceScene(CCTransitionMoveInL::create(0.4f,GameScene::scene()));  
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)  
    exit(0);  
#endif   
}  
void StartScene::menuGoToGameScene2(CCObject* pSender)
{
	StartScene::setmoshi(1);
	//CCTransitionMoveInLΪ�������Ч��0.4fΪ��ʱ��Խ��Խ�죬����Ϊ3.0f�ȣ�HelloWorld::scene()����Ҫ�л����ĳ���  
	CCDirector::sharedDirector()->replaceScene(CCTransitionMoveInL::create(0.4f, GameScene::scene()));
#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)  
	exit(0);
#endif   
}