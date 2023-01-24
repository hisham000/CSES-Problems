#include <iostream>
using std::cin;
using std::cout;
 
using namespace std;
 
long long IncA()
{
    long long n;
    cin >> n;
    long long x;
    long long prev;
    long long count=0;
    for (int i = 0; i < n; i++)
    {  
        if (i==0){
             cin >> x; 
        }
        if (i==1){
            prev =x;
            cin >> x;
            if (prev-x > 0)
            {
                count = count + (prev - x);
                prev=x+(prev - x);
 
            }
            else{
                prev=x;
            }
        
    }
        
        if (i>1){
            cin>>x;
            if (prev-x > 0)
            {
                count = count + (prev - x);
                prev=x+(prev - x);
 
            }
            else{
                prev=x;
            }
        }
    }
    return count;
}
int main()
{
    cout << IncA();
    return 0;
}