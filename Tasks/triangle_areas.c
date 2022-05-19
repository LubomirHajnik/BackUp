#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct triangle
{
	int a;
	int b;
	int c;
};

typedef struct triangle triangle;

float p_calculating(float a, float b, float c){
    return (a+b+c)/2.0;
}

float areas_calculating(float a, float b, float c) {
    
    float p = p_calculating(a, b, c);
    
    return sqrt(p * (p - a) * (p - b) * (p - c));
}


void sort_by_area(triangle* tr, int n) {
    

    triangle help_triangle;
    for(int i=0; i<n; i++) {
        int x=i;
            while (x>0) {
                float first = areas_calculating(tr[x].a, tr[x].b, tr[x].c);
                float second = areas_calculating(tr[x-1].a, tr[x-1].b, tr[x-1].c);
  
                    if(first < second){
                        help_triangle=tr[x];
                        tr[x]=tr[x-1];
                        tr[x-1]=help_triangle;
                    }
                    x--;
                }        
    }
}
int main()
{
	int n;
	scanf("%d", &n);
	triangle *tr = malloc(n * sizeof(triangle));
	for (int i = 0; i < n; i++) {
		scanf("%d%d%d", &tr[i].a, &tr[i].b, &tr[i].c);
	}
	sort_by_area(tr, n);
	for (int i = 0; i < n; i++) {
		printf("%d %d %d\n", tr[i].a, tr[i].b, tr[i].c);
	}
	return 0;
}