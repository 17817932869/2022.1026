#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	//�۲������������
	double a = 9e20;  //����
	printf("%lf\n", a);
	double b = 2e-10;  //����,���Ϊ��
	printf("%lf\n", b);

	//��ʾ����ASCLL��ֵ����ӡ����ַ�
	int ascll;
	printf("Please input a ASCLL value:");
	scanf("%d", &ascll);
	printf("The character corresponding to this ASCLL value is %c", ascll);

	//������������ӡ�ı�
	printf("\a Started by the suddden sound,Sally shouted,\n\"By the Great Pumpkin,what was that!\"\n");

	//ת���������ĸ�ʽ���(p��������%aת����
	float floating_point;
	printf("Enter a floating_point value:");
	scanf("%f", &floating_point);
	printf("fixed_point notation:%f\nexponetinal notation:%e\np notation:%a\n", floating_point, floating_point,floating_point);
	

	//����ת������
	printf("Please input your age:");
	int age;
	scanf("%d", &age);
	printf("So far,you have been born for %e second\n", age * 3.156e7);
	

	//������λ��ת����
	float ping, bei, gu_si, tang_shao, cha_shao;
	printf("Please inpurt a number(bei),I will Convert it to other units: ");
	scanf("%f", &bei);
	ping = bei * 2, gu_si  =bei / 8, tang_shao =gu_si  / 2, cha_shao =tang_shao  / 3;
	
	printf("%.2fbei=%.3fping=%.3fgu_shi=%.3ftang_shao=%.3fcha_shao\n", bei, ping, gu_si, tang_shao, cha_shao);


	//һЩ���������η������(������������н��Ϊ 2.853E+03��ǰ�����ҽ���һ���ո�˵��ǰ���10���Ƶ������������λ����������E+03)
	const double RENT = 2852.9;
	printf("%10.3E\n", RENT);

	//c�����С���ռһ���ַ������㻻��Ҳֻռһ����printf���з���ֵ��
	int rv;
	rv = printf("hello world\n");
	int rt;
	rt = printf("hello "
		"word\n");
	printf("%d\n", rv);
	printf("%d\n", rt);
	char c = "";
	printf("%zd", sizeof(c));



	return 0;
}