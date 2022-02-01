/*
    作成者Noiman
    ragcはラジアンを計算
*/

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define _USE_MATH_DEFINES
#include<math.h>
//sincなどのcに意味はありません
double r = 0;
double sinc(double x1);
double cosc(double x2);
double tanc(double x3);
double ragc(double rag);
double ansS(double y, double x);
int main()
{
	double ans = 0;
	double rag = 0;
	printf("角度を入力\n");
	scanf_s("%lf",&rag);
	ragc(rag);

	return 0;
}
//ラジアンを計算してます
double ragc(double rag)
{
	int tt = 0;
	int ans2 = 0;
	int  z[361][3] = 0;
    int  y = 0;
    int  x = 0;
	int i= 0;
	double ans = 0;
	double tans = 0;
	ans = (rag * M_PI)/180;
	printf("1sin,2cos,3tan,4面積,5三角関数表\n");
	scanf_s("%d",&i);
	printf("半径を入力");
    scanf_s("%lf",&r);
	switch (i)
	{
	case 1:
		sinc(ans);
		break;
	case 2:
		cosc(ans);
		break;
	case 3:
		tanc(ans);
		break;
    case 4:
        y = sinc(ans);
        x = cosc(ans);
        ansS(r,x);
		break;
	case 5:
		for(int s = 0; s <= 360; s++)
		{
			ans2 = (s * M_PI)/180;
			z[s][0] = sinc(ans2);
			z[s][1] = cosc(ans2);
			z[s][2] = tanc(ans2);  
		}
		for(tt = 0; tt <= 360; tt++)
		{
			printf("sin%d,%lf///cos%d,%lf///tan%d,%lf\n",tt,z[tt][0],tt,z[tt][1],tt,z[tt][2]);
		}
	}
}
double sinc(double x1)
{
	double y = 0;
	y = sin(x1);
    y *= r;
	printf("%lf", y);
	return y;
}
double cosc(double x2)
{
	double y = 0;
	y = cos(x2);
    y *= r;
	printf("%lf", y);
	return y;
}
double tanc(double x3)
{
	double y = 0;
	y = tan(x3);
    y *= r;
	printf("%lf", y);
	return 0;
}
double ansS(double y, double x)
{
    double S = 0;
    S = (x*y)/2;
    printf("%lf",S);

}
//ok