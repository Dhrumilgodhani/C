// write 5 student result program show, 3 subject marks ,total marks , percentage  and grade . 



#include <stdio.h>  
  
int main()  
{  
    int eng[5], guj[5],sp[5],total[5],per[5]; 
   
   
    for(int i=0; i<5; i++)  
    {  
        printf("\nEnter %d student marks--> \n ",i+1);
        
		printf("Enter eng marks: ");
        scanf("%d", &eng[i]);
  
        printf("Enter guj marks: ");
        scanf("%d", &guj[i]); 
 
        printf("Enter sp marks: ");
        scanf("%d", &sp[i]);  
        
        total[i] = eng[i] + guj[i] + sp[i];
        per[i] = ( total[i] * 100 )/ 300;

	
        
    }
    
    printf("\n");
    printf("No.\t eng \t guj\t sp \t total \t per \t grade \n");
    
    for(int i=0; i<5; i++)  
    {  
		printf("\n%d\t%d\t%d\t%d\t%d\t%d \t",i+1, eng[i], guj[i], sp[i], total[i], per[i]);
		
		if(per[i] <= 35 )
		{
			printf("student if fail");
		}

		else if(per[i] >=90)
		{
			printf("grade A");
		}

		else if(per[i] >=80 && per[i] <=90)
		{
			printf("grade b");
		}
		
		else if(per[i] >=70 && per[i] <=80)
		{
			printf("grade c");
		}
		
		else if(per[i] >=60 && per[i] <=70)
		{
			printf("grade d");
		}
		
		else
		{
			printf("grade e");
		}
		
    }

   return 0;  
}

	 									  