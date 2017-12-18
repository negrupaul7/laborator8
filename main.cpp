
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
void initial(int a[], int n)
{
 int i;
 for(i=0; i < n; i++)
    a[i]=rand() % 200 + 1; // valori de la 1 la 200
}

void ordonCresc(int a[], int n)
{
 int i, p, flag, aux;
 p=0;
 do
   {
    flag=0;
    for(i=0; i<n-1-p; i++)
       {
        if(a[i]>a[i+1])
          {
           aux=a[i];
           a[i]=a[i+1];
           a[i+1]=aux;
           flag=1;  // marchez ca s-a facut o inversare
           }
        }
     p++;
     }
 while(flag!=0);  // cand flag ramane 0 sirul este ordonat 

void ordonDesc(int a[], int n)
{
 int i, j, aux;
 for(i=1; i<n; i++) // i este marcajul
    {
     for(j=1; j>0; j--)
        {
         if(a[j-1]<a[j])
           {
            aux=a[j-1];
            a[j-1]=a[j];
            a[j]=aux;
            }
         }
      }
}

void invers(int a[], int n)
{
 int i, j, aux;
 for(i=0, j=n-1; i<j; i++, j--)
    {
     aux=a[i];
     a[i]=a[j];
     a[j]=aux;
     }
}

void inter[int a[], intb[], intrez[], int na, int nb)
{
 int i, j;
 i=0;
 j=0;
 do
   {
    if(i<na && j<nb)
      if(a[i]<=b[j];
        {
         rez[i+j]=a[i];
         i++;
         }
       else
           {
            rez[i+j]=a[i];
            j++;
            }
       else
           if(i<na)
             {
              rez[i+j]=a[i];
              i++;
              }
       else
           {
            rez[i+j]=b[j];
            j++;
            }
    }
 while(i+j<na+nb);
}
