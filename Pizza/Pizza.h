#pragma once
#include <string>

using namespace std;

class Pizza
{
public:
	virtual void prepare() = 0;		//������ ��Ḧ �غ��Ѵ�.
	virtual void bake() = 0;		//���ڸ� ���´�
	virtual void cut() = 0;			//���ڸ� �ڸ���.
	virtual void box() = 0;			//���ڸ� �ڽ��� ��´�.
	virtual string toString() = 0;	//������ ������ ��Ʈ������ �����Ѵ�.
};

