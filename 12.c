#include<stdio.h>


char an[]="mm",a1[]="mm",a2[]="nmm",a3[]="hh",a4[]="consulting",a5[]="hhh",a6[]="jj";
int Sleep(int  cn){
int i,i1,ck=cn*100;
for(i1=0;i1<ck;i1++){
for(i=0;i<6000;i++);

}
return 0;
}
int  prtc(char pk[],int am){
	int  i;
printf("%s\n",pk);
printf("[");
for(i=0;i<am;i=i+1){
	printf(">");
	Sleep(100);}
	printf("]OK\n");
	printf("---------------\n");
	
	
	
	
return 0;	
	
}
int  main(){
	printf("   hhh\n");
	printf("   jjj");
	getchar() ;
prtc(an,5);

prtc(a1,10); 
prtc(a2,13);
prtc(a3,15);
prtc(a4,10); 
prtc(a5,13); 
printf("hhh");
 
return 0;	
}









