#ifndef __CONTROL_H
#define __CONTROL_H

#include "cocos2d.h"
USING_NS_CC;
class ControlLayer :public Layer
{
public:
	CREATE_FUNC(ControlLayer);
protected:
	virtual bool init();
};
#endif