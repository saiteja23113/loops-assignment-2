/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>

using namespace std;



1.
infinite loop
2.
Hello
Hello
Hello
3.
in for loop
in for loop
in for loop
4.
9 1
8 2
7 3
6 4
5 5
4 6
5.
#include <iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;
    int sum=0;
    int k;
    while(n>0){
        k=n%10;
        if (k%2==0) sum+=k;
        n/=10;
    }
    cout<<sum;

    return 0;
}

6
int main()
{
    int n;
    cin>>n;
    int r=0;
    int k;
    int x=n;
    while(n>0){
        k=n%10;
        r=r*10;
        r=r+k;
        n/=10;
    }
    cout<<r+x;
}
7
int main()
{
    int n;
    cin>>n;
    int s=1;
    for(int i=1;i<=n;i++){
        s*=i;
        cout<<s<<endl;
    }
    
}

8
int main()
{
    int a=1;
    int b=1;
    int sum;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<a<<" ";
        sum=a+b;
        a=b;
        b=sum;
        
    }
    
}

9
int main()
{
    for(int i=0;i<500;i++){
        int x=i;
        int s=0;
        while(x>0){
        int k=x%10;
        s+=k*k*k;
        x=x/10;
        }
        if (s==i) cout<<s<<endl;
    }
    
    
    
}
 
