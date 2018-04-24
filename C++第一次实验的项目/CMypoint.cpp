#include "stdafx.h"
#include "CMypoint.h"

using namespace std;

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
	memset(point, 0, sizeof(*point)*6);
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
		
		float dist1 = Cdistance(point[0], point[1], point[2], point[3]);
		float dist2 = Cdistance(point[0], point[1], point[4], point[5]);
		float dist3 = Cdistance(point[4], point[5], point[2], point[3]);
		if (dist1 + dist2 < dist3 || dist2 + dist3 < dist1 || dist1 + dist3 < dist2) {
			return -1;
			cout << "It is not a triangle" << endl;
		}
		else {
			cout.setf(ios::left);
			cout << setw(10)<<"dist1 is" << setw(10) << "dist2 is" << setw(10) << "dist3 is" << endl;
			cout  << setw(10) << setfill(' ') << setprecision(3) << dist1;
			cout   << setw(10) << setfill(' ') << setprecision(3) << dist2;
			cout   << setw(10) << setfill(' ') << setprecision(3) << dist3 << endl;

			float area = sqrt(((dist1 + dist2 + dist3)
				*(dist1 + dist2 - dist3)
				*(dist1 - dist2 + dist3)
				*(-dist1 + dist2 + dist3)) / 16);
			cout << "area is" << right << setw(10) << setfill(' ') << setprecision(3) << area << endl;
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
