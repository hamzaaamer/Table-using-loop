#include <iostream>
using namespace std;
int main()
{
        int value1,value2;
        
        cout<<" Enter the number of the table ";
        
        cin>>value1;
        
        cout<<endl;
        
        for(value2 = 1; value2<=12; value2++){
        cout<<" "<< value1 <<" x "<< value2 <<" = "<< value1*value2<<endl;
        }

        return 0;
}
