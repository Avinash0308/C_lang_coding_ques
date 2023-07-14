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
void sort_by_area(triangle* tr, int n) {
	/**
	* Sort an array a of the length n
	*/
    float s , area , mains[n];
    for(int i = 0 ; i<n ; i++){
     s = (float)( tr[i].a + tr[i].b + tr[i].c)/2.0;
     area = s*(s - tr[i].a)*(s - tr[i].b)*(s - tr[i].c);
     mains[i] = pow(area , 0.5);
    }
    int r = 100000;
    for(int p = 0 ; p<n ; p++){
        for( int o = p ; o < n; o++){
            if( mains[o] < r ){
                r = mains[o];
    int q[3] = { tr[p].a , tr[p].b, tr[p].c};
    tr[p].a = tr[o].a;
    tr[p].b = tr[o].b;
    tr[p].c = tr[o].c;
    tr[o].a = q[0];
    tr[o].b = q[1];
    tr[o].c = q[2];
            }
            
        }
       r =100000; 
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