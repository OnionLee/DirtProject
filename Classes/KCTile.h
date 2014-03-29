#pragma once
#include "cocos2d.h"
#include <iostream>
#include <string>

enum TileKind{
	e_Dirt,
	e_Stone,
};

struct TilePos
{
	int x;
	int y;
	TilePos(){}
	TilePos(int mx, int my){ x = mx, y = my; }
};


class KCTile : public cocos2d::Sprite
{
public:
	virtual bool init();
	void setTile(std::string name, TileKind tileKind, TilePos pos, int strength);
	
	void setTileHp(int val) { m_nTileHp = val; }
	void setTileName(std::string val) { m_sTileName = val; }
	void setTileKind(TileKind val) { m_eTileKind = val; }
	void setTilePos(TilePos val) { m_TilePos = val; }
	void setTileTex();
	
	std::string getTileName() const{ return m_sTileName; }
	TileKind getTileKind() const { return m_eTileKind; }
	TilePos getTilePos() const { return m_TilePos; }
	int getTileHp() const { return m_nTileHp; }

	CREATE_FUNC(KCTile);

	KCTile();
	~KCTile();

private:
	
	std::string m_sTileName;

	TileKind m_eTileKind;

	TilePos m_TilePos;

	int m_nTileHp;

	int m_nStrength;
};

