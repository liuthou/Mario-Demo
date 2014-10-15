#include "MenuScene.h"
#include "AboutLayer.h"
#include "GameScene.h"


  Scene* MenuScene::createScene()
{
	auto scene = Scene::create();
	auto layer = MenuScene::create();
	scene->addChild(layer);
	return scene;
}
bool MenuScene::init()
{
	if (!Layer::init()){
		return false;
	}
	//添加背景
	auto bg = Sprite::create("menuscene/background.png");
	bg->setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 + 58);
	this->addChild(bg);

	//添加各种按钮
	auto pStartItem = MenuItemImage::create("menuscene/startgame_normal.png", "menuscene/startgame_select.png", [](Ref*)
	{
		Director::getInstance()->replaceScene(GameScene::create());
	});
	pStartItem->setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - 28);

	auto pQuitItem = MenuItemImage::create("menuscene/quitgame_normal.png", "menuscene/quitgame_select.png", [](Ref*){});
	pQuitItem->setPosition(SCREEN_WIDTH / 2, SCREEN_HEIGHT / 2 - 78);

	auto pAboutItem = MenuItemImage::create("menuscene/about_normal.png", "menuscene/about_select.png", [](Ref*){
	
		Director::getInstance()->replaceScene(AboutLayer::createScene());
	});
	pAboutItem->setPosition(SCREEN_WIDTH - 50, 20);

	auto pMenu = Menu::create(pStartItem, pQuitItem, pAboutItem, nullptr);
	pMenu->setPosition(Vec2::ZERO);
	this->addChild(pMenu);
	
	return true;
}
