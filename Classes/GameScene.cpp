#include "GameScene.h"
#include "Control.h"


bool GameScene::init()
{
	if (!Scene::init()){
		return false;
	}


	//Ìí¼Ó¿ØÖÆ²ã
	auto controllayer = ControlLayer::create();
	this->addChild(controllayer);
	return true;
}