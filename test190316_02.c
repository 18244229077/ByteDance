/**
�ֽ�����2019���к�˿���3��16�ձ�����

�ڶ���:
���� 
1.����ͬ������ĸ����һ��һ����ƴд����ȥ��һ���ͺ��ˡ�����:helllo --> hello
2.����һ������ĸ(AABB��)����һ��һ����ƴд����ȥ���ڶ��Եĵ�һ����ĸ������:helloo --> hello
3.����Ĺ������ȴ�����ƥ�䣬�������AABBCC�ͣ�Ӧ���ȿ����޸�AABBΪAABCC��
���룺
һ���ַ���
�����
��������ַ��� 

���˼·������һ���ַ������� 
**/

#include<stdio.h>

#define S 1000000

int check(char str[]){
	int i = 0;
	int j;
	int count1 = 0; //����1������ͬ������ĸ���� 
	int count2 = 0; //����2������һ������ĸ����һ��  
	int aa = 0;
	
	while(str[i]!='\0'){
		if(i==0){
			count1 = 1;
			count2 = 0; 
			aa = 0;
		}else{
			if(str[i]==str[i-1]){
				count1++;
				if(count1==2){
					aa = 0;
					count2++;
				}
			}else{
				count1 = 1;
				aa++;
				if(aa==2){
					count2 = 0;
				}
			}
		}
		if(count1==3){
			j = i;
			while(str[j+1]!='\0'){
				str[j] = str[j+1];
				j++;	
			}
			str[j] = '\0';
			i = i-2;
			count1 = 1;
			count2 = 0; 
			aa = 0;
			continue;
		}
		if(count2==2){
			j = i;
			while(str[j+1]!='\0'){
				str[j] = str[j+1];
				j++;	
			}
			str[j] = '\0';
			i = i-3;
			count1 = 1;
			count2 = 0; 
			aa = 0;
			continue;
		}
		i++;	
	}
}

int main(){
	int n;
	char str[S];
	int i;
	int flag;
	
	scanf("%d", &n);
	for(i=0; i<n; i++){
		scanf("%s", str);
		check(str);
		printf("%s\n", str);
	}
	
	return 0;
} 
