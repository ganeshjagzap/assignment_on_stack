#include<iostream>
#include<string.h>
#define max 50
using namespace std;
class stack{
    char arr[max];
    int top;
public:
stack(){
    top=-1;
}
int isfull(){
    if (top>=max){
        return 0;
    }
    else{
        return 1;
    }
}
int isempty(){
    if(top==-1){
        return 0;
    }
    else{
        return 1;
    }
}
void push(char para){
    if(isfull()==0){
        cout<<"Stack overflow";
    }
    else{
        top++;
        arr[top]=para;
        cout<<arr[top]<<" is pushed "<<endl;
    }
}
void pop(){
    if(isempty()==0){
        cout<<"Stack underflow";
    }
    else{
        char c=arr[top];
        top--;
        cout<<c<<" is popped "<<endl;
    }

}
void checkbrackets(char a[max]){
    int len=strlen(a);
    int curly=0;
    int round=0;
    int square=0;
    for(int i=0;i<len;i++){
        if(a[i]=='['||a[i]=='('||a[i]=='{'){
            push(a[i]);
            if (a[i]=='['){
                square++;
                cout<<"Square= "<<square<<endl;
            }
            else if (a[i]=='('){
                round++;
                cout<<"round= "<<round<<endl;

            }
            else if (a[i]=='{'){
                curly++;
                cout<<"curly= "<<curly<<endl;

            }
        } 
        else if(a[i]==']'||a[i]=='}'||a[i]==')'){
            
            if (a[i]==']'){
                square--;
                cout<<"Square= "<<square<<endl;

            }
            else if (a[i]==')'){
                round--;
                cout<<"round= "<<round<<endl;

            }
            else if (a[i]=='}'){
                curly--;
                cout<<"curly= "<<curly<<endl;

            }
            pop();
        }
    }
    if(round>0||curly>0||square>0){
        cout<<"unbalanced";
    }
    else if(round==0||curly==0||square==0){
        cout<<"balanced";
    }

}
};
int main(){
    char expr[max];
    stack s1;
    cout<<"Enter the expression ";
    cin>>expr;
    s1.checkbrackets(expr);
    return 0;
}