/* 

  Copy String :
  vivek
    char * MyStrcpy(destination,source)
    
    i.e 
    > copy source string into destination and print into main file.
    > Do with temp variable
    > try to eleminate this temp variable

*/#include<stdio.h>

void COPY(char D[], char S[])
     {
     	int i;
     
     	for(i=0;S[i]!='\0';i++)
    
     	{
     		D[i]=S[i];
		 }
		 
		 
	 }
   
    int main()
   {
   		char S[100];
   	    char D[100];
   	printf("ENTER THE NAME\n");
   	scanf("%s",&S);
     	
   	COPY(D,S);
   	printf("\nCopy string=%s",D);
   	
   }
   
