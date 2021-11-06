#include "myl.h"

//FUNCTION TO PRINT STRING

int printStr(char *s){
	int len = 1, i = 0 ;

	while((s[i] != '\0') && (s[i] != '\n') && (s[i] != '\t')){
		len++ ;
		i++ ;
	}

	__asm__ __volatile__ (
		"movl $1, %%eax \n\t"
		"movq $1, %%rdi \n\t"
		"syscall \n\t"
		:
		:"S"(s), "d"(len)
	) ;

	return (len - 1) ; 
}

// FUNCTION TO READ INTEGER

int readInt(int *eP){

	int n ;

	char ipnum[25] ;

	int check  ;

	int sn = 24 ;

	__asm__ __volatile__ (
			"movl $0, %%eax \n\t"
			"movq $0, %%rdi \n\t"
			"syscall \n\t"
			: "=a"(check)
			:"S"(ipnum), "d"(sn) 
	) ;

	int p = 0, nn = 0 ;

	while((ipnum[p] != '\0') && (ipnum[p] != '\n') && (ipnum[p] != '\t')){
		nn++ ;
		p++ ;
	}

	p = 0 ;

	int sign = 1 ;

	if(ipnum[p] == '-'){
		p++ ;
		nn-- ;
		sign = -1 ;

		if(ipnum[p] == '\0') check = -1 ;
	}

	int j = nn, ans = 0 ;

	while((ipnum[p] != '\0') && (ipnum[p] != '\n') && (ipnum[p] != '\t')){
		if((ipnum[p] < '0') || (ipnum[p] > '9')) return ERR ;
		int p10 = 1 ;
		for(int k = 1 ; k < j ; k++)p10 *= 10 ;
		int temp = ipnum[p] - '0' ;
		temp *= p10 ;
		ans += temp ;
		p++ ;
		j-- ;
	}

	n = (ans*sign) ;

	if(check < 0) *eP = ERR ;
	else *eP = OK ;

	return n ;
}

// FUNCTION TO PRINT INTEGER

int printInt(int n){

	char num[25] , z = '0' ;
	int p = 0 , j = 0 , k ;

	if(!n) num[p++] = '0' ;

	else{
		if(n < 0){
			num[p++] = '-' ;
			n *= -1 ;
		}

		while(n > 0){
			int rem = n%10 ;
			num[p++] = (char)(z + rem) ;
			n /= 10 ;
		}

		if(num[0] == '-')j++ ;
		k = p - 1 ;

		while(j < k){
			char t = num[j] ;
			num[j] = num[k] ;
			num[k] = t ;
			j++ ;
			k-- ;
		}
	}

	num[p] = '\0' ;

	int strl = p + 1 ;

	int check ;

	__asm__ __volatile__ (
			"movl $1, %%eax \n\t"
			"movq $1, %%rdi \n\t"
			"syscall \n\t"
			: "=a"(check)
			:"S"(num), "d"(strl)
	) ;

	if(check < 0) return ERR ;
	return (strl - 1) ;
}

