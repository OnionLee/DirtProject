#include "KCUIlayer.h"

#include "KCDirector.h"

bool KCUIlayer::init()
{
	if (!Layer::init())
	{
		return false;
	}

	return true;
}
