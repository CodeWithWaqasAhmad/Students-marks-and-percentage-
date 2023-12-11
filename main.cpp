#include <iostream>

using namespace std;

int main()
{
    float sub1,sub2,sub3,sub4,sub5,total,percantage;

    cout<<"\nEnter the marks of subject one "<<endl;
    cin>>sub1;
    cout<<"\nEnter the marks of subject second "<<endl;
    cin>>sub2;
    cout<<"\nEnter the marks of subject third "<<endl;
    cin>>sub3;
    cout<<"\nEnter the marks of subject forth "<<endl;
    cin>>sub4;
    cout<<"\nEnter the marks of subject fifth "<<endl;
    cin>>sub5;

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percantage = {total/500 *100};
    cout<<"\nthe total marks of student is equal to "<<total;
    cout<<"\nthe percantage is equal to "<<percantage;

    return 0;
}
