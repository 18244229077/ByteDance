/**
�ֽ�����2019���к�˿���3��16�ձ�����
 
��һ�⣺ 
ĳ������ϵͳ������ֵ1Ԫ��4Ԫ��16Ԫ��64Ԫ����4��Ӳ�ң��Լ���ֵ1024Ԫ��ֽ�ҡ�
����ĳ��ʹ��1024Ԫ��ֽ�ҹ�����һ���۸�ΪN(0��N��1024)����Ʒ��
�������������յ�����öӲ��?

���˼·��̰���㷨 
**/

#include<stdio.h>

int main(){
	int n;
	int z;
	int count1 = 0;
	int count2 = 0;
	int count3 = 0;
	int count4 = 0;
	
	scanf("%d", &n);
	z = 1024-n;
	while(z>=64){
		z = z-64;
		count1++;
	}
	while(z>=16){
		z = z-16;
		count2++;
	}
	while(z>=4){
		z = z-4;
		count3++;
	}
	while(z>=1){
		z = z-1;
		count4++;
	}
	printf("%d", count1+count2+count3+count4);
	
	return 0;
} 
