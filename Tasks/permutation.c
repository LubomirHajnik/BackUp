#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
// 	* Complete this method
// 	* Return 0 when there is no next permutation and 1 otherwise
// 	* Modify array s to its next permutation
*/



/* int factorial(const int n){
    int number=1;
    
    if (number==1) {
        for (int i=1; i<=n ; i++) {
            number = number*i;
        }
        return number;
    }
    else {
    number--;
    }
    
    return number;
}


int add(const int sum){
    int output=0;
    output=output+sum;
    return output;
} */


// /* /* void change_order(int n, char **s) {
//     static int start_position=0;
//     for (int i = 0; i < n; i++)
//     {
//         int sorting_
//         while (s[0])
//         {
//             /* code */
//         }
        
        
//     }

//     position++;
    
    

// } */
// */



int next_permutation(int n, char **s)
{
    static int helper=1;
    
    if (helper<n){
        helper++;
        change_order(n, s);
        return 1;
    }
    
    return 0;
}


int main()
{
	char **s;
	int n;
	scanf("%d", &n);
	s = calloc(n, sizeof(char*));
	for (int i = 0; i < n; i++)
	{
		s[i] = calloc(11, sizeof(char));
		scanf("%s", s[i]);
	}
	do
	{
		for (int i = 0; i < n; i++)
			printf("%s%c", s[i], i == n - 1 ? '\n' : ' ');
	} while (next_permutation(n, s));
	for (int i = 0; i < n; i++)
		free(s[i]);
	free(s);
	return 0;
}