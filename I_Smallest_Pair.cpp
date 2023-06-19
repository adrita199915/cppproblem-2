#include#include<iostream>

using namespace std;

class Person{
    private:
        string name;
        float height;
        int age;
    public:
        Person(string n, float h, int a){
            name = n;
            height = h;
            age = a;
        }
        void display(){
            cout<<"Name: "<<name<<endl;
            cout<<"Height: "<<height<<endl;
            cout<<"Age: "<<age<<endl;
        }
};

int main(){
    Person p("John", 1.76, 20);
    p.display();
    return 0;
}
using namespace std;
int main()
{
int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++)
{
cin>>a[i];
}
sort(a.begin(),a.end());
int ans=a[0]+a[1]+n-1;
cout<<min(ans,a[n-1]+a[n-2]+n-1)<<endl;
}
return 0;
}