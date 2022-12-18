#include <stdio.h>
#include <math.h>

long long phi(int n){
	if(n==0) return 0;
	int res = 1;
	for(int i=2;i<=n;++i){
		if(n%i==0) res -= res/i;
		while(n%i==0){
			
		}
	}
}

int UCLN(int a, int b){
	
	while(b!=0){
		int r = a%b;
		a = b;
		b = r;
	}
}

int main(){
	
}



