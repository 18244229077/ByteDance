/**
�ֽ�����2019���к�˿���3��16�ձ�����

������:
��N�����ӣ���i����ΪLi������Ҫm���ȳ����ӡ�
����Զ�N�����ӽ����������(����ƴ��)���������m��������ĳ����Ƕ���?

���˼·�����ַ� 
**/ 

#include<stdio.h>

#define N 100000

// �ж��ܽسɶ��ٶ� 
int check(int n, int len[], double mid){
	int sum = 0;
	int i;
	for(i=0; i<n; i++){
		sum += len[i]/mid;
	}
	return sum;
}

double getAns(int n, int m, int len[]){
	double ans = 0;
	double max = 0; // ����Ǹ����ӵĳ��� 
	int i;
	double l, r, mid;
	
	for(i=1; i<n; i++){
		if(len[i]>max){
			max = len[i];
		}
	} 
	
	// ���ַ� 
	l = 0;
	r = max;
	while((r-l)>1e-4){
		mid = (l+r)/2;
		if(mid==0){
			break;
		}
		if(check(n, len, mid)>=m){
			l = mid;
			ans = mid;
		} else{
			r = mid;
		}
	}
	
	return ans;
}

int main(){
	double ans;
	int n, m;
	int len[N];
	int i;
	
	scanf("%d %d", &n, &m);
	for(i=0; i<n; i++){
		scanf("%d", &len[i]);
	}
	ans = getAns(n, m, len);
	printf("%0.2lf", ans);
	
	return 0;
} 
