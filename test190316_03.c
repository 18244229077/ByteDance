/**
�ֽ�����2019���к�˿���3��16�ձ�����

�����⣺ 
n���˲μӱ�����������ÿ����һ��������
�콱ʱ�����������ų�һȦ����һ���͵�n�����ڡ� 
Ҫ��:
1.���ĳ���˵ķ������Աߵ��˸ߣ���ô��Ʒ����ҲҪ�����ࡣ
2.ÿ�����ٵ�һ����Ʒ��
������Ӧ��׼�����ٸ���Ʒ?

���˼·������Ϊֱ����̬����ѭ������ 
**/

#include<stdio.h>

#define N 100000

int getAns(int n, int grade[]) {
	int num[N]; //��Ʒ��
	int sum; //��Ʒ����
	int i;
	int flag = 0; //�����Ƿ����仯 

	for(i=0; i<=n+1; i++) {
		num[i] = 1;
	}

	do {
		flag = 0;
		for(i=1; i<=n; i++) {
			// ����ߵ��˱� 
			if(grade[i]>grade[i-1] && num[i]<=num[i-1]){
				num[i] = num[i]+1;
				flag = 1;
			}
		}
		for(i=1; i<=n; i++){
			// ���ұߵ��˱�
			if(grade[i]>grade[i+1] && num[i]<=num[i+1]){
				num[i] = num[i]+1;
				flag = 1;
			}
		}
		num[0] = num[n];
		num[n+1] = num[1];
	}while(flag==1);

	sum = 0;
	for(i=1; i<=n; i++) {
		sum += num[i];
	}

	return sum;
}

int main() {
	int ans;
	int count; //������������
	int n; //����
	int grade[N];
	int i,j;

	scanf("%d", &count);
	for(i=0; i<count; i++) {
		scanf("%d", &n);
		for(j=1; j<=n; j++) {
			scanf("%d", &grade[j]);
		}
		
		//��β���� 
		grade[0] = grade[n];
		grade[n+1] = grade[1];
		  
		ans = getAns(n, grade);
		printf("%d\n", ans);
	}

	return 0;
}
