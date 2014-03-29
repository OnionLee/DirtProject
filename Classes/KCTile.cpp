#include "KCTile.h"

KCTile::KCTile()
{

}


KCTile::~KCTile()
{
}

bool KCTile::init()
{
	m_nTileHp = 100;
	return true;
}

void KCTile::setTile(std::string name, TileKind tileKind, TilePos pos, int strength)
{
	m_sTileName = name;
	m_eTileKind = tileKind;
	m_TilePos = pos;
	m_nStrength = strength;
	setTileTex();
}

void KCTile::setTileTex()
{

}


