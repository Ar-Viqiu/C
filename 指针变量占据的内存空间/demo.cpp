#include <stdio.h>	//printf需要的头文件。 
#include <conio.h>
int main()	//书上写的是void main(void)，但实际运行却是错的，暂时不知道是怎么回事。 
{
	int Inum = 0;
	short Snum = 0;
	double Dnum = 0;
	int* pInt =&Inum;	//声明int型指针变量pInt，用Inum地址为其初始化。 
	short* pShort =&Snum;
	double* pDouble =&Dnum;
	printf("Inum占据的内存字节数为:%d\n",sizeof(Inum));
	printf("pInt占据的内存字节数为:%d\n",sizeof(pInt));
	printf("Snum占据的内存字节数为:%d\n",sizeof(Snum));
	printf("pShort占据的内存字节数为:%d\n",sizeof(pShort));
	getchar ();
}

		//结果显示，指针变量占据的内存字节数恒为4（由32位地址数据决定）， 与变量占据的内存不同。 
