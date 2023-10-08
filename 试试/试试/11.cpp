#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<iostream>

//用scanf读入成绩，换算成对应的等级，并输出。换算规则为：C0, 等级A；80 <= x < 90, B；
//70<=x<80, C；60<=x<70, D；0<=x<60, F；用if-elseif和switch分别实现。
int main() {
	int x=0,y=0;
	scanf("%d", &x);
	x = x / 10;
	
	switch (x) {
	case 0 :case 1:case 2:case 3:case 4:case 5: printf("成绩等级为F"); break;
	case 6:printf("成绩等级为D"); break;
	case 7:printf("成绩等级为C"); break;
	case 8:printf("成绩等级为B"); break;
    case 9:case 10:printf("成绩等级为A"); break;
	default:printf("你没逝吧？？？"); break;
	}

}





















/*请输入两个实数和运算符，用空格分隔
例如，输入： 2 3.6 *  */
//int main() {
//	double a = 0, b = 0, e1 = 0, e2 = 0, e3 = 0, e4 = 0;
//	char c;
//	printf("请输入两个实数和运算符，用空格分隔例如，输入： 2 3.6 * ");
//	scanf("%lf %lf %c", &a, &b, &c);
//	switch (c) {
//	case '+':double e1 = a + b; printf("%lf %c %lf=%.2lf", a, c, b, e1); break;
//	case '-':double e2 = a - b; printf("%lf %c %lf=%.2lf", a, c, b, e2); break;
//	case '*':double e3 = a * b; printf("%lf %c %lf=%.2lf", a, c, b, e3); break;
//	case '/':double e4 = a / b; printf("%lf %c %lf=%.2lf", a, c, b, e4); if (b == 0) { printf("除数为零无意义"); }; break;
//	default: printf("未知运算符");
//	}
//	
//}

//int main() {
//	double a = 0, b = 0, e1 = 0, e2 = 0, e3 = 0, e4 = 0;
//	char c;
//	printf("请输入两个实数和运算符，用空格分隔例如，输入： 2 3.6 * \n");
//	scanf("%lf %lf %c", &a, &b, &c);
//	switch (c) {
//	case '+': printf("%lf %c %lf=%.2lf", a, c, b, a + b ); break;
//	case '-': printf("%lf %c %lf=%.2lf", a, c, b, a - b ); break;
//	case '*': printf("%lf %c %lf=%.2lf", a, c, b,a * b ); break;
//	case '/': printf("%lf %c %lf=%.2lf", a, c, b,a / b ); if (b == 0) { printf("\n除数为零无意义"); }; break;
//	default: printf("未知运算符");
//	}
//
//}



//double SegFun(double x){
//	double y = 0;
//	if (x >= 1 && x < 10) {
//		y = 2 * x - 1;
//		return y;
//	}
//	if (x >= 10) {
//		y = -3 * x - 11;
//		return y;
//	}
//	if (x < 1) {
//		return x;
//	}
//}
//
//int main() {
//	double x=0,y = 0;
//	scanf(" %lf", &x);
//	double s = SegFun(x);
//	printf("y=%lf", s);
//}
//
////求根
/*2. 求一元二次方程 ax
2+bx+c=0 的解，写程序完成以下功能：
1) 设计函数 int root(double a, double b, double c)求解方程的根，其中 a、b、c 分别表示方程的三个
实系数，a 非零。如有一个实根则函数返回值为 1，且打印输出该实根；如有两个实根则函数返回值为
2，且打印输出两个不同的实根；如有两个虚根，则函数返回值为 3，且打印输出实部和虚部。
2) 在 main 主函数中用 scanf 输入方程的三个实系数，并调用 root 函数，根据返回值的不同情况分别输
出相应信息，例如，输出方程解的个数。
3) 如果要在 main 中输出方程的根；root 仅实现方程求解计算，并不打印输出，程序应如何改进？*/


//int root(double a, double b, double c, double *x1, double *x2) {
//	double d = pow(b, 2) - 4 * a * c;
//	*x1 = (-b + sqrt(d)) / (2 * a);
//	*x2 = (-b - sqrt(d)) / (2 * a);
//	if (d == 0) {
//
//		return 1;
//	}
//	else if (d > 0)
//		return 2;
//	else
//		return 3;
//
//}
//
//int main() {
//	double a=0,b=0,c=0,d=1,  x1 = 0,  x2 = 0, n1=0, n2=0, i1=0, i2=0;
//	
//	scanf("%lf %lf %lf", &a, &b, &c);
//	
//	int e = root(a, b, c,&x1,&x2);
//	;
//	if (e == 1) {
//		printf("输出方程解为两个相等实数根");
//		printf("x=%lf", x1);
//	}
//	else if (e == 2)
//	{
//		printf("输出方程解为两个不等实数根");
//		printf("x1=%lf,x2=%lf", x1, x2);
//	}
//	else
//	{
//		printf("输出方程解为两个虚数根\n");
//		
//		d = b * b - 4 * a * c;
//		d = sqrt(4 * a * c - b * b);
//		n2 = (-b) / (2 * a);
//		n1 = n2;
//		i1 = d / (2 * a);			
//		i2 = i1;
//		printf("x1=%lf+%lfi x2=%lf-%lfi", n1, i1, n2, i2);
//		
//	}
//	
//}
//




/*void delt1(double* x1, double* x2) {
	double b = 0;

	double a = 0;  double c = 0;
	
	scanf("%lf %lf %lf", &a, &b, &c);
	double k = pow(b, 2) - 4 * a * c;
	*x1 = (-b + sqrt(k)) / (2 * a);
	*x2 = (-b - sqrt(k)) / (2 * a);


;
}

int main() {
	double b = 0;

	double a = 0; double x1 = 0; double x2 = 0; double c = 0;
	double k = pow(b, 2) - 4 * a * c;
	
	delt1(&x1,&x2);

	printf("x1 = %lf;x2 = %lf", x1, x2);
	
}
*/


