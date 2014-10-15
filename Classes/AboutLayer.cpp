#include "AboutLayer.h"
#include "MenuScene.h"

Scene* AboutLayer::createScene()
{
	auto scene = Scene::create();
	auto layer = AboutLayer::create();
	scene->addChild(layer);
	return scene;
}

bool AboutLayer::init()
{
	if (!Layer::init()){
		return false;
	}
	//Ìí¼Ó±³¾°
	for (int i = 0; i < 40; i++){
		auto bg = Sprite::create("menuscene/bglabel.png");
		bg->setPosition(8 + i * 16, 8);
		this->addChild(bg);

	}
	//Ìí¼Ó±³¾°
	for (int i = 0; i < 40; i++)
	{
		auto bg = Sprite::create("menuscene/bglabel.png");
		bg->setPosition(8 + i * 16, SCREEN_HEIGHT - 8);
		this->addChild(bg);
	}

	//Ìí¼Ó·µ»Ø°´Å¥
	 
	auto pBackItem = MenuItemImage::create("menuscene/back_normal.png", "menuscene/back_select.png", [](Ref*){
	
		auto scene = MenuScene::createScene();
		Director::getInstance()->replaceScene(scene);
	});
	pBackItem->setPosition(SCREEN_WIDTH - 100, 50);

	 
	auto pMenu = Menu::create(pBackItem, nullptr);
	pMenu->setPosition(Vec2::ZERO);
	this->addChild(pMenu);
	return true;
}