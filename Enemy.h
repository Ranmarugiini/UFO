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

	//�����ɓ�������
	//�����FpTarget ������������
	void OnCollision(GameObject* pTarget) override;
};

