#include "GameScene.h"
#include "Control.h"


bool GameScene::init()
{
	if (!Scene::init()){
		return false;
	}


	//��ӿ��Ʋ�
	auto controllayer = ControlLayer::create();
	this->addChild(controllayer);
	return true;
}