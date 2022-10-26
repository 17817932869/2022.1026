#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {

	//观察上溢下溢情况
	double a = 9e20;  //上溢
	printf("%lf\n", a);
	double b = 2e-10;  //下溢,结果为零
	printf("%lf\n", b);

	//提示输入ASCLL码值，打印输出字符
	int ascll;
	printf("Please input a ASCLL value:");
	scanf("%d", &ascll);
	printf("The character corresponding to this ASCLL value is %c", ascll);

	//发出警报并打印文本
	printf("\a Started by the suddden sound,Sally shouted,\n\"By the Great Pumpkin,what was that!\"\n");

	//转换浮点数的格式输出(p计数法用%a转换）
	float floating_point;
	printf("Enter a floating_point value:");
	scanf("%f", &floating_point);
	printf("fixed_point notation:%f\nexponetinal notation:%e\np notation:%a\n", floating_point, floating_point,floating_point);
	

	//年龄转换秒数
	printf("Please input your age:");
	int age;
	scanf("%d", &age);
	printf("So far,you have been born for %e second\n", age * 3.156e7);
	

	//计量单位的转化；
	float ping, bei, gu_si, tang_shao, cha_shao;
	printf("Please inpurt a number(bei),I will Convert it to other units: ");
	scanf("%f", &bei);
	ping = bei * 2, gu_si  =bei / 8, tang_shao =gu_si  / 2, cha_shao =tang_shao  / 3;
	
	printf("%.2fbei=%.3fping=%.3fgu_shi=%.3ftang_shao=%.3fcha_shao\n", bei, ping, gu_si, tang_shao, cha_shao);


	//一些浮点型修饰符的组合(下面的例子运行结果为 2.853E+03，前面有且仅有一个空格，说明前面的10限制的是最终输出的位数，包括了E+03)
	const double RENT = 2852.9;
	printf("%10.3E\n", RENT);

	//c语言中“”占一个字符，就算换行也只占一个，printf是有返回值的
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