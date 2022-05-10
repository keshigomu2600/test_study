// StaticLib.cpp : スタティック ライブラリ用の関数を定義します。
//

#include "pch.h"
#include "framework.h"
#include "../include/StaticLib.h"


bool is_leap_year(int year)
{
	//もし　4で割り切れる　かつ　100で割り切れない場合
	if (year % 4 == 0 && year % 100 != 0)
	{
		return true;
	}

	//もし　400で割り切れる場合
	if (year % 400 == 0)
	{
		return true;
	}

	return false;
}
