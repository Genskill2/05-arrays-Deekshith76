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


/* average function */

float average(int array[], int num){
        float sum = 0;
        for(int i=0; i<num; i++){
                sum += array[i];
        }
        return sum/num ;
}


/* mode function */
int mode(int array[], int num){
        int counts[num];
        int count = 0;
        for(int i=0; i<num; i++){
                count = 1;
                if(array[i]!=-100){
                        for(int j=i+1; j<num; j++){
                                if(array[i]==array[j]){
                                        count++;
                                        array[j]=-100;  /* Some random number. Make sure that the number is not in the given array*/
                                }
                        }
                       counts[i] = count; 
                }else{
                        counts[i] = 0;
                }
        }
        
        
        int max_count_value = max(counts, num);
        
        for(int i=0; i<num; i++){
                if(max_count_value==counts[i]){
                        return array[i];
                }
        }              
}


