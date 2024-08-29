#include <iostream>
using namespace std;

class stack{
    private:
       int top;
       int arr[5];
    public:
          stack(){
            top=-1;
            for(int i=0;i<5;i++){
                arr[i]=0;
            }
          }
      void push(int value){
      if(top==4){
        cout<<"STACK OVERFLOW"<<endl;
      }   
      else
        top++;
        arr[top]=value;
      }
      int pop(){
        if(top==-1){
            cout<<"STACK UNDERFLOW"<<endl;
        }
        
        int popvalue=arr[top];
        arr[top]=0;
        top--;
        return popvalue;
        }
      void display(){
        cout<<"STACK ELEMENTS:"<<endl;
        for(int i=4;i>=0;i--){
            cout<<arr[i]<<endl;
        }
      }
};
int main(){
    stack s1;
    s1.display();
    s1.push(88);
    s1.push(98);
    s1.pop();
    s1.display();
}
