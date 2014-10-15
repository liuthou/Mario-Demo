#ifndef __ABOUTLAYER_H
#define __ABOUTLAYER_H

#include "cocos2d.h"
USING_NS_CC;

class AboutLayer :public Layer
{
public:
	virtual bool init();
	CREATE_FUNC(AboutLayer);

	static Scene* createScene();
};

#endif