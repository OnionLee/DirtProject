#pragma once
#include "cocos2d.h"
using namespace cocos2d;

class KCPlayer : public Sprite
{
public:
	KCPlayer();
	~KCPlayer();

	CREATE_FUNC(KCPlayer);

	virtual bool init();
};

