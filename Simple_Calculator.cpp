#include<iostream>
using namespace std;
class Calculator{
private:
	double a,b;
public:
	Calculator(double num1,double num2){
		a = num1;
		b = num2;
	}
	double Addition(){
		return a + b;
	}
	double Subtraction(){
		return a - b;
	}
	double Multiplication(){
		return a * b;
	}
	double Division(){
		return a / b;
	}
	double get_b(){
		return b;
	}
};

int main(){
	double num1,num2;
	int choice;
	do{
    	cout <<"1.ADDITION  2.SUBTRACTION  3.MULTIPLICATION  4.DIVISION  5.EXIT" << endl;
    	cin >> choice;
    	
    	if(choice != 5){
    		cout <<"Enter the first number:";
        	cin >> num1;
	        cout <<"Enter the second number:";
        	cin >> num2;
		}
		Calculator ch(num1,num2);
	
    	switch(choice){
    		case 1:
	    		cout <<"The Addition of two number is: " << ch.Addition() << endl;
	    		break;
	    	case 2:
	     		cout <<"The Subtraction of two number is: " << ch.Subtraction() << endl;
		    	break;
	    	case 3:
	    		cout <<"The Multiplication of two number is: " << ch.Multiplication() << endl;
	    		break;
	    	case 4:
	    		if(ch.get_b() == 0){
	    	    	cout <<"Error! Division by zero is not allowed." <<endl;
	        	}else{
		        	cout <<"The Division of two number is: " << ch.Division() << endl;
	        	}
		    	break;
		    case 5:
		    	return 0;
	    	default:
		    	cout <<"Please enter correct key" << endl;		
    	}
	}while(true);
}
