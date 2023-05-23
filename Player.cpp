#include "Player.h"
#include "Engine/Camera.h"
#include "Engine/Input.h"

//コンストラクタ
Player::Player(GameObject* parent)
    :GameObject(parent, "Player")
{
}

//デストラクタ
Player::~Player()
{
}

//初期化
void Player::Initialize()
{
}

//更新
void Player::Update()
{
   if (Input::IsKey(DIK_W))
    {
       transform_.position_.z += 1;
    }
    if (Input::IsKey(DIK_A))
    {
        transform_.position_.
    }
    if (Input::IsKey(DIK_D))
    {
        transform_.position_.
    }
    if (Input::IsKey(DIK_S))
    {
        transform_.position_.
    }
    Camera::SetPosition(XMFLOAT3(0, 3, -8));

    Camera::SetTarget(XMFLOAT3(0, 2, 0));
}

//描画
void Player::Draw()
{
}

//開放
void Player::Release()
{
}