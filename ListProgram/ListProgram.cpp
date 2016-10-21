// ListProgram.cpp : コンソール アプリケーションのエントリ ポイントを定義します。
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// リスト構造体
typedef struct tagListNode{
	struct tagListNode *prev; // 前の要素へのポインタ
	struct tagListNode *next; // 次の要素へのポインタ
	string data; // 要素のデータ
} ListNode;



int main()
{
	// 変数定義
	string InputBuf;
	ListNode *firstnode, *lastnode, *newnode, *thisnode, *removenode;

	// 初期化
	firstnode = NULL;
	lastnode = NULL;

	cout << "タスクを入力してください（exit 入力で終了します。）" << endl;
	do {

		cin >> InputBuf;

		if (InputBuf != "") { 
			// 入力があったら実行

			// 新しいノードの領域を確保
			newnode = new ListNode;
			// 確保したノードのdataに入力値を格納
			newnode->data = InputBuf;
			// 追加したノードに次はないのでNULLを設定
			newnode->next = NULL;

			if (lastnode != NULL) {
				// すでにあるリストの末尾に新しいノードをつなげる。
				lastnode->next = newnode;
				newnode->prev = lastnode;
				lastnode = newnode;
			} else {
				// 最初の要素だった場合
				firstnode = newnode;
				lastnode = newnode;
				newnode->prev = NULL;
			}

		}
	// exit 入力で終了します。
	} while (InputBuf != "exit");
	
	
	// リストをファイルに出力
	ofstream outputfile("List.txt");

	// ファイルの書き込み
	for (thisnode = firstnode; thisnode != NULL; thisnode = thisnode->next) {
		outputfile << thisnode->data << endl;
	}


	// メモリの開放
	for (thisnode = firstnode; thisnode != NULL;) {
		removenode = thisnode;
		thisnode = thisnode -> next;
		delete removenode;
	}

    return 0;
}

