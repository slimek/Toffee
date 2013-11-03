// Toffee Samples "HelloToffee" - Menu Scene Implementation

#include "HelloToffeePch.h"
#include "MenuScene.h"


void MenuScene::OnSceneEnter()
{
    auto sprite = CCSprite::create( "HelloWorld.png" );

    auto size = this->getContentSize();

    sprite->setPosition( ccp( size.width / 2, size.height / 2 ));

    this->addChild( sprite );
}
