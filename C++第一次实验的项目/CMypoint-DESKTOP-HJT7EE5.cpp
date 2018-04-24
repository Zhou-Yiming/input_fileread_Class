#include "stdafx.h"
#include "CMypoint.h"
using namespace std;
using boost::format;
using boost::io::group;
CMypoint::CMypoint(float pointa1, float pointa2, float pointb1, float pointb2)
{
	point = new float[4];
	count = 4;
	memset(point, 0, sizeof(*point)*4);
	point[0] = pointa1;
	point[1] = pointa2;
	point[2] = pointb1;
	point[3] = pointb2;
}
CMypoint::CMypoint(float pointa1, float pointa2, float pointb1, float pointb2, float pointc1, float pointc2)
{
	point = new float[6];
	count = 6;
	memset(point, 0, sizeof(point)*6);
	point[0] = pointa1;
	point[1] = pointa2;
	point[2] = pointb1;
	point[3] = pointb2;
	point[4] = pointc1;
	point[5] = pointc2;
}

float CMypoint::CMycaculate()
{
	if (count == 4) {
		cout << "The Euclidean distance of two point = " << endl;
		float dist = Cdistance(point[0], point[1], point[2], point[3]);
		cout << dist << endl;
	}
	if (count == 6) {
		cout << "The area of three point = " << endl;
		float dist1 = Cdistance(point[0], point[1], point[2], point[3]);
		float dist2 = Cdistance(point[0], point[1], point[4], point[5]);
		float dist3 = Cdistance(point[4], point[5], point[2], point[3]);
		cout << format()
		if (dist1 + dist2 < dist3 || dist2 + dist3 < dist1 || dist1 + dist3 < dist2) {
			return -1;
			cout << "It is not a triangle" << endl;
		}
		else {
			float area = sqrt(((dist1 + dist2 + dist3)
				*(dist1 + dist2 + dist3)
				*(dist1 + dist2 + dist3)
				*(dist1 + dist2 + dist3)) / 16);
			cout << area << endl;
			return area;
		}
	}
}

float CMypoint::Cdistance(float a1, float a2, float b1, float b2)
{
	float dist = sqrt(pow((a1 - b1), 2) + pow((a2 - b2), 2));
	return dist;
}


CMypoint::~CMypoint()
{
}
