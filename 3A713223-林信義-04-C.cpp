#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year,month,day,daytotol1,daytotol2;
	int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	
	printf("請輸入日期:");
	scanf("%d,%d,%d",&year,&month,&day);
	
	if(month<=12){	
	    if(year%400==0 || year%100!=0 && year%4==0){
            if(month==2 && day>=30){
        	    printf("此日期不存在。\n");
		    }
		    else{
			    for(int i=0;i<=month-2;i++){
		            daytotol1+=month2[i];
		        } 
		        daytotol2=daytotol1+day; 
		        printf("這一天是這一年的第%d天\n",daytotol2);
		    }
	    }
	    else{
	        if(month==2 && day>=29){
	        	printf("此日期不存在。\n");
	    	}	
	    	else{
	    		for(int i=0;i<=month-2;i++){
		            daytotol1+=month1[i];
	    	    } 
	    	    daytotol2=daytotol1+day; 
	    	    printf("這一天是這一年的第%d天\n",daytotol2);
		    }
	    }
	}
	else{
		printf("此日期不存在。\n");
	}
	
	system("PAUSE");
	return 0;
}
