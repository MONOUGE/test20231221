#pragma once

// ヘッダファイルのインクルード 
#include	<time.h>
#include	<iostream>
#include	<fstream>

using namespace std;

// 乱数初期化関数
void InitRand()
{
	//乱数のシードを設定
	srand((unsigned)time(NULL));
}