#pragma once
class Enemy
{
public:
	Enemy();
	~Enemy();

	bool IsAlive();

	void SetDeath();

	void Update();
	void Draw();

public:

	static  bool isAllAlive; //true:�����@false:����

private:

	bool isAlive; //true:�����@false:����
};