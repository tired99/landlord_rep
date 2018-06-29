#ifndef __StartSCENE_H__  
#define __StartSCENE_H__  
#include "cocos2d.h"    
class StartScene:public cocos2d::CCLayer  
{  
public:  
    virtual bool init();    
    static cocos2d::CCScene* scene();
	void menuCloseCallback(cocos2d::Ref* pSender);  
    void menuGoToGameScene(CCObject* pSender);//声明场景切换的按钮的回调（执行）函数  
	void menuGoToGameScene2(CCObject* pSender);//声明场景切换的按钮的回调（执行）函数
	void setmoshi(int Moshi) { moshi = Moshi; }
	int getmoshi() { return moshi; }
    CREATE_FUNC(StartScene);  
private:
	int moshi = 0;

};  
  
#endif   
  
