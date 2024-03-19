#pragma once
#include "Engine/GameObject.h"

class Bullet : public GameObject
{
	int hModel_;
public:
	Bullet(GameObject* parent);
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;

};

