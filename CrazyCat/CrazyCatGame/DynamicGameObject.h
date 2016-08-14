#pragma once

#ifndef CDYNAMICGAMEOBJECT_H
#define CDYNAMICGAMEOBJECT_H

#include "GameObject.h"

class CDynamicGameObject :
	public CGameObject
{
protected:
	CSprite *_sprite_resource;
public:
	CDynamicGameObject();
	CDynamicGameObject(int id, float x, float y, float width, float height, float vx, float vy,
		LPD3DXSPRITE sprite_handler, LPWSTR file_path, int count_sprite, int sprite_per_row);
	~CDynamicGameObject();

	void				next();
	virtual void		inital();
	virtual void		draw(D3DXVECTOR2 view_port);
	virtual void		update();
};

#endif
