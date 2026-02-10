#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1,Rect R2){
    double xs = max(R1.x,R2.x);
    double ys = min(R1.y,R2.y);
    double xe = min(R1.x+R1.w,R2.x+R2.w);
    double ye = max(R1.y-R1.h,R2.y-R2.h);
    double neww = xe-xs,newh = ys-ye;
    double area = 0;
    if(neww>0 && newh>0) area = neww*newh;
    return area;
}