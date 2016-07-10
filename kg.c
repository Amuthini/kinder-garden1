#include <stdio.h>
void main()
{
    char c;
        	int i,j;
        	int n,c,d,day;
        	int asci=97;
	    	char name[100];
	        printf("Enter the value n ");
		scanf("%d",&n);        
		 c=2*n;
		d=c-1;
			for(i=0;i<c;i++)
		       	{
				name[i]=asci;
				asci++;
			}
								  
			 day=d;
			 j=2*n-1;
			
			 while(days!=0)
			 {
				printf("\n The children pairs for day %d",day);
				for(int i=0;i<2*n;i++)
				{
					printf("\n %c %c",name[i],name[j]);
				}
					for(int i=0;i<2*n;i++)
					{ 
					char temp;
						if(i==0)
						{
							temp=name[i];
						}
					name[i]=name[i+1];
					if(i==(2*n)-1)
						{
						name[i]=temp;
						}
					}
					day--;
			 }
		return 0;
	}
