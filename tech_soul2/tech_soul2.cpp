// tech_soul2.cpp : �R���\�[�� �A�v���P�[�V�����̃G���g�� �|�C���g���`���܂��B
//
/*�G���g���|�C���g*/
#include "stdafx.h"
#include <iostream>

using namespace std;
/*�֐��v���g�^�C�v�錾*/
int linear_search(int SerchValue, int *array, int arraySize);
int binary_search(int SerchValue, int *array, int left, int right);

/*�萔*/
#define ARRAY_MAX_SIZE	(10)

int main()
{
	int input_SerchValue;
	int ret;
	int array[ARRAY_MAX_SIZE] = {1,2,3,4,5,6,7,8,9,10};
	
	cout << "�����l����͂��Ă�������" << endl;
	cin >> input_SerchValue;

//	ret = linear_search(input_SerchValue,array,ARRAY_MAX_SIZ);
	ret =  binary_search(input_SerchValue, array, 0, ARRAY_MAX_SIZE - 1);
	if (ret == -1) {
		cout << "�����l�͑��݂��܂���B" << endl;
	}
	else {
		cout << "�����l�F" << input_SerchValue << " ��array[" << ret << "] = " << array[ret] << endl;
	}
	cin >> input_SerchValue;
	return 0;
}

