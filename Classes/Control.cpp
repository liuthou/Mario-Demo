#include "Control.h"
#include "GameScene.h"



bool ControlLayer::init()
{
	if (!Layer::init()){
		return false;
	}
	//Ìí¼Ó¿ØÖÆÆ÷µÄ±³¾°Í¼Æ¬
	auto bg = Sprite::create("controlUI.png");
	bg->setAnchorPoint(Vec2(0, 0));
	bg->setPosition(0, 0);
	this->addChild(bg);

	//Ìí¼ÓAB°´Å¥
	auto pLeftItem = MenuItemImage::create("AB_normal.png", "AB_select.png", [](Ref*)
	{

	}
	);
	pLeftItem->setPosition(40, 48);
	auto pRightAItem = MenuItemImage::create("AB_normal.png", "AB_select.png", [](Ref*)
	{

	}
	);
	pRightAItem->setPosition(128, 48);
	auto pAItem = MenuItemImage::create("AB_normal.png", "AB_select.png", [](Ref*)
	{
		
	}
	);
	pAItem->setPosition(432, 35);
	auto pBItem = MenuItemImage::create("AB_normal.png", "AB_select.png", [](Ref*)
	{

	}
	);
	pBItem->setPosition(353, 35);
	auto pMenu = Menu::create(pLeftItem, pRightAItem, pAItem, pBItem, nullptr);
	pMenu->setPosition(0, 0);
	this->addChild(pMenu);

	return true;
}