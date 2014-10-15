#ifndef __MAPLAYER_H
#define __MAPLAYER_H
#include "cocos2d.h"
USING_NS_CC;

class MapLayer :public TMXTiledMap
{
public:
	CREATE_FUNC(MapLayer);
protected:
	virtual bool init();
	
private:
	
};
#endif