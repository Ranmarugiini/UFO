#include "Bullet.h"
#include "Engine/Model.h"
#include "Engine/SphereCollider.h"
#include "Player.h"

Bullet::Bullet(GameObject* parent)
	:GameObject(parent,"Bullet")
{
}

void Bullet::Initialize()
{
	hModel_ = Model::Load("DebugCollision/SphereCollider.fbx");
	
	Player* p = (Player*)FindObject("Player");
	transform_.position_ = p->GetPosition();

	SphereCollider* collision = new SphereCollider(XMFLOAT3(0, 0, 0), 0.1f);
	AddCollider(collision);
	transform_.scale_ = { 0.2f,0.2f,0.2f };
}

void Bullet::Update()
{
	transform_.position_.z += 0.1f;
}

void Bullet::Draw()
{
	Model::SetTransform(hModel_, transform_);
	Model::Draw(hModel_);
}

void Bullet::Release()
{
}
