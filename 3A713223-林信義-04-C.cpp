#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	
	int year,month,day,daytotol1,daytotol2;
	int month1[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int month2[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	
	printf("�п�J���:");
	scanf("%d,%d,%d",&year,&month,&day);
	
	if(month<=12){	
	    if(year%400==0 || year%100!=0 && year%4==0){
            if(month==2 && day>=30){
        	    printf("��������s�b�C\n");
		    }
		    else{
			    for(int i=0;i<=month-2;i++){
		            daytotol1+=month2[i];
		        } 
		        daytotol2=daytotol1+day; 
		        printf("�o�@�ѬO�o�@�~����%d��\n",daytotol2);
		    }
	    }
	    else{
	        if(month==2 && day>=29){
	        	printf("��������s�b�C\n");
	    	}	
	    	else{
	    		for(int i=0;i<=month-2;i++){
		            daytotol1+=month1[i];
	    	    } 
	    	    daytotol2=daytotol1+day; 
	    	    printf("�o�@�ѬO�o�@�~����%d��\n",daytotol2);
		    }
	    }
	}
	else{
		printf("��������s�b�C\n");
	}
	
	system("PAUSE");
	return 0;
}
