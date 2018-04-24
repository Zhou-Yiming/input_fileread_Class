#include "stdafx.h"
class CMypoint
{
private:
	float *point;
	int count; //统计输入的数字长度
public:
	CMypoint(float pointa1,float pointa2, float pointb1,float pointb2);
	CMypoint(float pointa1, float pointa2, float pointb1, float pointb2,float pointc1,float pointc2);
	float CMycaculate();
	float Cdistance(float a1,float a2,float b1,float b2);

	virtual ~CMypoint();
};
