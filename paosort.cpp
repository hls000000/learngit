#include<stdio.h>

int main()
{
	int array[3]{10,20,30};
    	for (int i=0;i<3;i++){
    		for(int j=0;j<3;j++){
    			if (array[j]<array[j+1]){
				
    			int mid=array[j];
    			array[j]=array[j+1];
    			array[j+1]=mid;}
    			
    			
			}
		}
		for (int a=0;a<3;a++){
			
			printf("%d",array[a]);
    }
	return 0; 
}
