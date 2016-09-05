// tech_soul2.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//
/*エントリポイント*/
#include "stdafx.h"
#include <iostream>

using namespace std;
/*関数プロトタイプ宣言*/
int linear_search(int SerchValue, int *array, int arrayLength);

/*定数*/
#define N	(10)

int main()
{
	int input_SerchValue;
	int ret;
	int array[N] = {1,2,3,4,5,6,7,8,9,10};
	
	cout << "検索値を入力してください" << endl;
	cin >> input_SerchValue;

	ret = linear_search(input_SerchValue,array,5);
	cout << "検索値：" << input_SerchValue << " はarray[" << ret << "] = " << array[ret]<<endl;
	cin >> input_SerchValue;
	return 0;
}

