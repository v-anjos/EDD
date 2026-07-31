#include <stdio.h>

int main() {
	long N, T, Nuns[N], i, j;
	
	scanf("%ld %ld", &N, &T);
	
	for(i = 0; i<N; i++){
		scanf("%ld", &Nuns[i]);
	}
	for(i = 0; i<N; i++){
		for(j = i+1; j<N; j++){
			if(Nuns[i]+Nuns[j] == T){
				printf("%ld", i);
				printf(" ");
				printf("%ld\n" , j);
			}
		}
	}
    return 0;
}
