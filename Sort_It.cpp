#include<bits/stdc++.h>
using namespace std;
struct student{
    string nm;
    int cls;
    char s;
    int id;
    int math_marks;
    int eng_marks;
};
bool cmp(student a,student b){
    if((a.math_marks+a.eng_marks)!=(b.math_marks+b.eng_marks)){
        return (a.math_marks+a.eng_marks)>(b.math_marks+b.eng_marks);
    }
    else{
        return a.id<b.id;
    }
}
int main(){
    int n;
    cin>>n;
    student s[n];
    for(int i=0;i<n;i++){
        cin>>s[i].nm>>s[i].cls>>s[i].s>>s[i].id>>s[i].math_marks>>s[i].eng_marks;
    }
    sort(s,s+n,cmp);
    for(int i=0;i<n;i++){
        cout<<s[i].nm<<" "<<s[i].cls<<" "<<s[i].s<<" "<<s[i].id<<" "<<s[i].math_marks<<" "<<s[i].eng_marks<<"\n";
    }
}
