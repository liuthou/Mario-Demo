#ifndef __MENUSCENE_H
#define __MENUSCENE_H
#include "cocos2d.h"
USING_NS_CC;

#define SCREEN_WIDTH		Director::getInstance()->getVisibleSize().width//��Ļ��(ָ���ֱ���)
#define SCREEN_HEIGHT		Director::getInstance()->getVisibleSize().height	//��Ļ��(ָ���ֱ���)
#define SCREEN_CENTER		Vec2(SCREEN_WIDTH*0.5f,SCREEN_HEIGHT*0.5f)			//��Ļ����
#define SCREEN_SIZE			Size(SCREEN_WIDTH,SCREEN_HEIGHT)				//��Ļ�ߴ�
#define NAME_LEN			128													//�ַ�������

class MenuScene :public Layer{

public:
	static Scene* createScene();
	virtual bool init();
	CREATE_FUNC(MenuScene);
	
	
};
#endif