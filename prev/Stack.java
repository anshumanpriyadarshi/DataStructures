import java.util.Scanner;

public class Stack {
    int top;
    int[] stk;

    public Stack(int size){
        this.top = -1;
        this.stk = new int[size];
    }

    public void push(int ele){
        if(this.top>=50){
            System.out.println("Stack is full");

        }
        else
            this.stk[++top] = ele;
        System.out.println("Element Pushed" + ele);
    }

    public int pop(){
        if(this.top<0){
            System.out.println("Stack is empty");
            return -999;
        }
        else {
            System.out.println("Element Popped" + this.top);
            return this.stk[this.top--];
        }
    }

    public void print(){
        if(top<0){
            System.out.println("Stack is empty");
        }
        else{
            int locator = this.top;
            while(locator>=0){
                System.out.println(this.stk[locator]);
                locator--;
            }
        }
    }

}

class MainStack{
    public void func(){
        Stack stack = new Stack(50);
        Scanner scn = new Scanner(System.in);
        boolean condition = true;
        int choice;
        while(condition){
            System.out.println("Enter Choice");
            System.out.println("1) PUSH\n2) POP\n3) DISPLAY\n4) EXIT");
            choice = scn.nextInt();
            switch (choice){
                case 1: {
                    System.out.println("Enter element to psuh");
                    int ele = scn.nextInt();
                    stack.push(ele);
                    break;
                }
                case 2: {
                    int ele = stack.pop();
                    break;
                }
                case 3: {
                    System.out.println("Stack is :");
                    stack.print();
                    break;
                }
                case 4:{
                    System.out.println("Goodbye!!");
                    condition = false;
                    break;
                }
            }
        }
    }

}

