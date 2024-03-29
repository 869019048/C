#include <math.h>
typedef struct { 
float re;// really 
float im;// imaginary 
}complex,*pcomplex; 

complex complexBuild(float re,float im) 
{ 
complex cx; 
cx.re=re; 
cx.im=im; 
return cx;
} 

complex complexAdd(complex a,complex b) 
{ 
complex ret; 
ret.re=a.re+b.re;
 ret.im=a.im+b.im; 
return ret; 
}

complex complexMult(complex a,complex b) {
	complex ret; ret.re=a.re*b.re-a.im*b.im; ret.im=a.im*b.re+a.re*b.im;
	return ret; }

void DFT(complex x[],complex X[],int N) 
{ 
int k,n; complex Wnk; 
for (k=0;k\<N;k++) { 
	X[k].re=0; 
	X[k].im=0; 
	for (n=0;n\<N;n++) {	
		Wnk.re=(float)cos(2*PI*k*n/N); 
		Wnk.im=(float)-sin(2*PI*k*n/N); 
		X[k]=complexAdd(X[k],complexMult(x[n],Wnk)); 
}}

}
