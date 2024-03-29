#pragma once
#include "Engine/GameObject.h"
#include "Engine/BoxCollider.h"

class Enemy : public GameObject
{
	int hModel_;

public:
	Enemy(GameObject* parent);
	void Initialize() override;
	void Update() override;
	void Draw() override;
	void Release() override;

	//何かに当たった
	//引数：pTarget 当たった相手
	void OnCollision(GameObject* pTarget) override;
};

