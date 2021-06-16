#include <stdio.h>
#include <string.h>

/* 1.max function */
int max(int array[], int num){
         int max = array[0];
         for(int i=0; i<num; i++){
                if(max<array[i]){
                        max = array[i];
                }
         }
        return max;
}


/* 2.min function*/

int min(int array[], int num){
         int min = array[0];
         for(int i=0; i<num; i++){
                if(min>array[i]){
                        min = array[i];
                }
         }
        return min;
}


/* 3.average function */

float average(int array[], int num){
        float sum = 0;
        for(int i=0; i<num; i++){
                sum += array[i];
        }
        return sum/num ;
}


/* 4.mode function */

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


/* 5.factors function */

int factors(int num, int ret[]){
        memset(ret, 0, 100);
        int index = 0;
        int count = 0;
        int temp = num;
        while(temp%2==0){
                ret[index] = 2;
                index++;
                temp = temp/2;
                }
                
        for(int i=3; i<=num/2; i=i+2){
                while(temp%i==0){
                        ret[index] = i;
                        index++;
                        temp = temp/i;
                } 
        }
        
        if(temp>2){
                ret[index] = temp;
                }

        for(int j=0; j<100; j++){
                if(ret[j]!=0){
                        count++;
                }else{
                        break;
                       }
        }      
   return count;              
}


