#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void initial(int [], int);
void ordonCresc(int [], int);
void ordonDesc(int [], int);
void invers(int [], int);
void inter(int [], int[], int [], int, int);

int main()
{
 int a[100], b[100], c[200];
 int n;
 n = 7;
 srand(time(0));
 initial(a, n);
 initial(b, n);
 ordonCresc(a, n);
 ordonDesc(b, n);
 invers(b, n);
 inter(a, b, c, n, n);
 // afisez sirul c
 for(int i=0; i<2*n-1; i++)
    cout << c[i] << " , ";
    cout << c[2*n-1];
 return 0;
 }
