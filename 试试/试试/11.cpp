#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include<iostream>

//��scanf����ɼ�������ɶ�Ӧ�ĵȼ�����������������Ϊ��C0, �ȼ�A��80 <= x < 90, B��
//70<=x<80, C��60<=x<70, D��0<=x<60, F����if-elseif��switch�ֱ�ʵ�֡�
int main() {
	int x=0,y=0;
	scanf("%d", &x);
	x = x / 10;
	
	switch (x) {
	case 0 :case 1:case 2:case 3:case 4:case 5: printf("�ɼ��ȼ�ΪF"); break;
	case 6:printf("�ɼ��ȼ�ΪD"); break;
	case 7:printf("�ɼ��ȼ�ΪC"); break;
	case 8:printf("�ɼ��ȼ�ΪB"); break;
    case 9:case 10:printf("�ɼ��ȼ�ΪA"); break;
	default:printf("��û�Űɣ�����"); break;
	}

}





















/*����������ʵ������������ÿո�ָ�
���磬���룺 2 3.6 *  */
//int main() {
//	double a = 0, b = 0, e1 = 0, e2 = 0, e3 = 0, e4 = 0;
//	char c;
//	printf("����������ʵ������������ÿո�ָ����磬���룺 2 3.6 * ");
//	scanf("%lf %lf %c", &a, &b, &c);
//	switch (c) {
//	case '+':double e1 = a + b; printf("%lf %c %lf=%.2lf", a, c, b, e1); break;
//	case '-':double e2 = a - b; printf("%lf %c %lf=%.2lf", a, c, b, e2); break;
//	case '*':double e3 = a * b; printf("%lf %c %lf=%.2lf", a, c, b, e3); break;
//	case '/':double e4 = a / b; printf("%lf %c %lf=%.2lf", a, c, b, e4); if (b == 0) { printf("����Ϊ��������"); }; break;
//	default: printf("δ֪�����");
//	}
//	
//}

//int main() {
//	double a = 0, b = 0, e1 = 0, e2 = 0, e3 = 0, e4 = 0;
//	char c;
//	printf("����������ʵ������������ÿո�ָ����磬���룺 2 3.6 * \n");
//	scanf("%lf %lf %c", &a, &b, &c);
//	switch (c) {
//	case '+': printf("%lf %c %lf=%.2lf", a, c, b, a + b ); break;
//	case '-': printf("%lf %c %lf=%.2lf", a, c, b, a - b ); break;
//	case '*': printf("%lf %c %lf=%.2lf", a, c, b,a * b ); break;
//	case '/': printf("%lf %c %lf=%.2lf", a, c, b,a / b ); if (b == 0) { printf("\n����Ϊ��������"); }; break;
//	default: printf("δ֪�����");
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
////���
/*2. ��һԪ���η��� ax
2+bx+c=0 �Ľ⣬д����������¹��ܣ�
1) ��ƺ��� int root(double a, double b, double c)��ⷽ�̵ĸ������� a��b��c �ֱ��ʾ���̵�����
ʵϵ����a ���㡣����һ��ʵ����������ֵΪ 1���Ҵ�ӡ�����ʵ������������ʵ����������ֵΪ
2���Ҵ�ӡ���������ͬ��ʵ�������������������������ֵΪ 3���Ҵ�ӡ���ʵ�����鲿��
2) �� main ���������� scanf ���뷽�̵�����ʵϵ���������� root ���������ݷ���ֵ�Ĳ�ͬ����ֱ���
����Ӧ��Ϣ�����磬������̽�ĸ�����
3) ���Ҫ�� main ��������̵ĸ���root ��ʵ�ַ��������㣬������ӡ���������Ӧ��θĽ���*/


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
//		printf("������̽�Ϊ�������ʵ����");
//		printf("x=%lf", x1);
//	}
//	else if (e == 2)
//	{
//		printf("������̽�Ϊ��������ʵ����");
//		printf("x1=%lf,x2=%lf", x1, x2);
//	}
//	else
//	{
//		printf("������̽�Ϊ����������\n");
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


