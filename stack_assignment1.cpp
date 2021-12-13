#include<iostream>
#include<string.h>
#include<string>
#define max 50
using namespace std;
class stack{
    public:
    int top=-1;
    char arr[max];
    string reverse;
    bool isempty(){
        if(top==-1){
            return true;
        }
        else{
            return false;
        }
    }
    bool isfull(){
        if(top>=max){
    return true;
        }
        else{
    return false;
        }
    }
    void push(char s){
        if(isfull()){
            cout<<"oops!!! ; stack is already full"<<endl;
        }
        else{
            top++;
            arr[top]=s;
          // cout<<arr[top]<<" "<<endl;
        }
    }
    char pop(){
        if(isempty()){
            cout<<"opps!!! ; stack is already empty "<<endl;
        }
        else{
            cout<<"poped element is "<<arr[top]<<endl;
            reverse=reverse+arr[top];
            
        }
        top--;
           
   }




};



int main(){
    stack st;
    char a[max];
    int i, j,len;
    cout<<"enter a string "<<endl;
    cin>>a;
    len=strlen(a);
    for(i=0; i<len; i++){
        st.push(a[i]);
    }
    for(j=0; j<len; j++){
        st.pop();
    }
    cout<<"reverse string is "<<st.reverse<<endl;
    if(a==st.reverse){
        cout<<"palindrome"<<endl;
    }
    else
    {
        cout<<"not palindrome"<<endl;
    }
	
    
    
    return 0;

}