#ifndef __MENUSCENE_H
#define __MENUSCENE_H
#include "cocos2d.h"
USING_NS_CC;

#define SCREEN_WIDTH		Director::getInstance()->getVisibleSize().width//屏幕宽(指定分辨率)
#define SCREEN_HEIGHT		Director::getInstance()->getVisibleSize().height	//屏幕高(指定分辨率)
#define SCREEN_CENTER		Vec2(SCREEN_WIDTH*0.5f,SCREEN_HEIGHT*0.5f)			//屏幕中心
#define SCREEN_SIZE			Size(SCREEN_WIDTH,SCREEN_HEIGHT)				//屏幕尺寸
#define NAME_LEN			128													//字符串长度

class MenuScene :public Layer{

public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MenuScene);
	
	
};
#endif