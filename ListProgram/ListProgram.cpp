// ListProgram.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


// ���X�g�\����
typedef struct tagListNode{
	struct tagListNode *prev; // �O�̗v�f�ւ̃|�C���^
	struct tagListNode *next; // ���̗v�f�ւ̃|�C���^
	string data; // �v�f�̃f�[�^
} ListNode;



int main()
{
	// �ϐ���`
	string InputBuf;
	ListNode *firstnode, *lastnode, *newnode, *thisnode, *removenode;

	// ������
	firstnode = NULL;
	lastnode = NULL;

	cout << "�^�X�N����͂��Ă��������iexit ���͂ŏI�����܂��B�j" << endl;
	do {

		cin >> InputBuf;

		if (InputBuf != "") { 
			// ���͂�����������s

			// �V�����m�[�h�̗̈���m��
			newnode = new ListNode;
			// �m�ۂ����m�[�h��data�ɓ��͒l���i�[
			newnode->data = InputBuf;
			// �ǉ������m�[�h�Ɏ��͂Ȃ��̂�NULL��ݒ�
			newnode->next = NULL;

			if (lastnode != NULL) {
				// ���łɂ��郊�X�g�̖����ɐV�����m�[�h���Ȃ���B
				lastnode->next = newnode;
				newnode->prev = lastnode;
				lastnode = newnode;
			} else {
				// �ŏ��̗v�f�������ꍇ
				firstnode = newnode;
				lastnode = newnode;
				newnode->prev = NULL;
			}

		}
	// exit ���͂ŏI�����܂��B
	} while (InputBuf != "exit");
	
	
	// ���X�g���t�@�C���ɏo��
	ofstream outputfile("List.txt");

	// �t�@�C���̏�������
	for (thisnode = firstnode; thisnode != NULL; thisnode = thisnode->next) {
		outputfile << thisnode->data << endl;
	}


	// �������̊J��
	for (thisnode = firstnode; thisnode != NULL;) {
		removenode = thisnode;
		thisnode = thisnode -> next;
		delete removenode;
	}

    return 0;
}

