#pragma once

#define SHOP_NAME "Blimpies"
#define PI 3.1416f

enum Type
{
	Italian,
	Turkey,
	Tuna
};

void f2();

class Sandwich
{
public:

	void Read();
	void Write();

private:
	char name[32];
	float price;
	bool isHot;

	static const float TAX;
};