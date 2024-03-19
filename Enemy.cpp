#include "Enemy.h"
#include "Engine/Model.h"

Enemy::Enemy(GameObject* parent)
	:GameObject(parent,"Enemy")
{
}

void Enemy::Initialize()
{
	hModel_ = Model::Load("DebugCollision/BoxCollider.fbx");
	transform_.position_.z += 7.f;

	BoxCollider* collision = new BoxCollider(XMFLOAT3(0, 0, 0), XMFLOAT3(1, 1, 1));
	AddCollider(collision);
}

void Enemy::Update()
{
}

void Enemy::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Enemy::Release()
{
}

void Enemy::OnCollision(GameObject* pTarget)
{
	//�e�ɓ��������Ƃ�
	if (pTarget->GetObjectName() == "Bullet")
	{
		KillMe();
	}
}
