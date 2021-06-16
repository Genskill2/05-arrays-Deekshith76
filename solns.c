/* Enter your solutions in this file */
#include <stdio.h>

/*Max function*/
int max(int array[], int num){
         int max = array[0];
         for(int i=0; i<num; i++){
                if(max<array[i]){
                        max = array[i];
                }
         
         }
        
        return max;
}


/*min function*/

int min(int array[], int num){
         int min = array[0];
         for(int i=0; i<num; i++){
                if(min>array[i]){
                        min = array[i];
                }
         
         }
        
        return min;
}
