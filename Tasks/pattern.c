#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>


int main() 
{

    int n;
    scanf("%d", &n);

    int size = (n*2)-1;         //size of row/column
    int full_size = size*size;  //full size of pattern
    
    int output = n;             //output number
    int counter= 0;      //counter number in pattern
    int row=0;          //counter number of row
    int check=0;        //chceck middle of row
    bool check_number_one=false; //check middle of pattern size

    int remember_row; //for better counting lower part of pattern
    
    while(counter<full_size){
        for (int i=0; i < size; i++){
            
                if (row==0 || row==size-1) {
                    output=n;
                    for (int i = 0; i < size; i++)
                    {
                        printf("%d ", output);
                        counter++;
                    }                    
                }   
                
                else {

                    if(!check_number_one){
                        for (int i = 0; i < size; i++){
                        
                            printf("%d ", output);
                            if (output==1){
                                check_number_one=true;
                                remember_row=row;
                            }
                        
                            if (output > n-row && check==0){
                                output--;
                            }

                            if (i == size-row-1 || check ==1){
                                output++;
                                check=1;
                            }
                    
                            counter++;
                        }
                        check=0; 
                    }

                    else {
                        for (int i = 0; i < size; i++){
                        
                            printf("%d ", output);
                        
                            if (output > n-remember_row && check==0){
                                output--;
                            }

                            if (i == size-remember_row-1 || check ==1){
                                output++;
                                check=1;
                                
                            }
                    
                            counter++;
                        }
                        
                        check=0;
                        
                    }
                    


                }
                    
                     


           
        printf("\n");
        row++;
        remember_row--;
        output=n;
        }
    }
      
      
    return 0;
}
