#include <stdio.h>
#include <stdlib.h>


int main(void)
{
	int l = 0;
	int n = 0;
	int * s;
	s = (int *)malloc( sizeof (int) * 50);
	free(s);
	int i = 0;
	int j = 0;
	int k = 0;
	int total = 0;
	int tmp = 0;
	int count = 0;
			
	printf("1行目：作成する棒の長さ\n");
	printf("2行目：棒の数\n");
	printf("3行目以降：各棒の長さ\n");
	
	scanf("%d",&l);
	scanf("%d",&n);
	while(n > i) {
		scanf("%d",&s[i]);
		i++;
	}
	for(i=0; i<n; i++){
		for(j=i+1; j<n; j++){
			for(k=j+1; k<n; k++){
				total= s[i] + s[j] + s[k];
				tmp = total;
				total = 0;
				if(tmp==l){
					count++;
					tmp = 0;
				}
			}
		}
	}
	printf("%dつの組み合わせがありました。\n\n",count);
	return 0;
}
	
