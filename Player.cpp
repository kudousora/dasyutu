#include "Player.h"
#include "Engine/Camera.h"
#include "Engine/Input.h"

//�R���X�g���N�^
Player::Player(GameObject* parent)
    :GameObject(parent, "Player")
{
}

//�f�X�g���N�^
Player::~Player()
{
}

//������
void Player::Initialize()
{
}

//�X�V
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

//�`��
void Player::Draw()
{
}

//�J��
void Player::Release()
{
}