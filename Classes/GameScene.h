#ifndef __GAMESCENE_H
#define __GAMESCENE_H

#include "cocos2d.h"
USING_NS_CC;

class GameScene :public Scene
{
public:
	virtual bool init();
	CREATE_FUNC(GameScene);
};
#endif