#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <math.h>

#include<iostream>

double SegFun(double x) {
	double y = 0;
	if (x >= 1 && x < 10) {
		y = 2 * x - 1;
		return y;
	}
	if (x >= 10) {
		y = -3 * x - 11;
		return y;
	}
	if (x < 1) {
		return x;
	}
}

int root(double a, double b, double c, double* x1, double* x2) {
	double d = pow(b, 2) - 4 * a * c;
	*x1 = (-b + sqrt(d)) / (2 * a);
	*x2 = (-b - sqrt(d)) / (2 * a);
	if (d == 0) {

		return 1;
	}
	else if (d > 0)
		return 2;
	else
		return 3;

}
double min(double x, double y, double z) {
	if (x < y && x < z)
	{
		return x;
	}
	else if (y < z && y < x) {
		return y;

	}
	else {
		return z;
	}

}

int main() {
	double x = 0, y = 0, z = 0;
	printf("第一题\n输入三个数以求最小值,空格分开\n\n");
	scanf("%lf %lf %lf", &x, &y, &z);
	double MIN = min(x, y, z);
	printf("最小值为%lf\n\n第二题\n\n请以空格做间隔输入a、b、c的值，他们分别表示方程的三个实系数，a 非零\n", MIN);
	double a = 0, b = 0, c = 0, d = 1, x1 = 0, x2 = 0, n1 = 0, n2 = 0, i1 = 0, i2 = 0;

	scanf("%lf %lf %lf", &a, &b, &c);

	int e = root(a, b, c, &x1, &x2);
	;
	if (e == 1) {
		printf("输出方程解为两个相等实数根");
		printf("x=%lf", x1);
	}
	else if (e == 2)
	{
		printf("输出方程解为两个不等实数根");
		printf("x1=%lf,x2=%lf", x1, x2);
	}
	else
	{
		printf("输出方程解为两个虚数根\n");

		d = b * b - 4 * a * c;
		d = sqrt(4 * a * c - b * b);
		n2 = (-b) / (2 * a);
		n1 = n2;
		i1 = d / (2 * a);
		i2 = i1;
		printf("x1=%lf+%lfi x2=%lf-%lfi", n1, i1, n2, i2);
	}
		printf("\n\n第三题\n\n对于题目所提供的分段方程 请输入x的值以求y\n");
		
		scanf(" %lf", &x);
		double s = SegFun(x);
		printf("y=%lf", s);
		printf("\n\n第四题\n");
		double  e1 = 0, e2 = 0, e3 = 0, e4 = 0;
		char m;
		printf("请输入两个实数和运算符，用空格分隔例如，输入： 2 3.6 * \n");
		scanf("%lf %lf %c", &a, &b, &m);
		switch (m) {
		case '+': printf("%lf %c %lf=%.2lf", a, m, b, a + b); break;
		case '-': printf("%lf %c %lf=%.2lf", a, m, b, a - b); break;
		case '*': printf("%lf %c %lf=%.2lf", a, m, b, a * b); break;
		case '/': printf("%lf %c %lf=%.2lf", a, m, b, a / b); if (b == 0) { printf("\n除数为零无意义"); }; break;
		default: printf("未知运算符");
		}
	printf("\n\n第五题switch\n");
	int n = 0;
	scanf("%d", &n);
	n = n / 10;

	switch (n) {
	case 0:case 1:case 2:case 3:case 4:case 5: printf("成绩等级为F"); break;
	case 6:printf("成绩等级为D"); break;
	case 7:printf("成绩等级为C"); break;
	case 8:printf("成绩等级为B"); break;
	case 9:case 10:printf("成绩等级为A"); break;
	default:printf("你没逝吧？？？"); break;
	}
	printf("\n\n第五题if\n");
	int k = 0;
	scanf("%d", &k);
	if (90 <= k && k <= 100) {
		printf("成绩等级为A");
	}
	else if (80 <= k&&k < 90) {
		printf("成绩等级为B");
	}
	else if (70 <= k&&k < 80) {
		printf("成绩等级为C");
	}
	else if (60 <=k&&k < 70) {
		printf("成绩等级为D");
	}
	else {printf("成绩等级为F");
	}
	
}