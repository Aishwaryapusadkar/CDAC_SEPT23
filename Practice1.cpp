#include<iostream>
using namespace std;

class Complex{
private:
 int real;
 int imag;
public:
 //Complex *const this = &c1
 int getReal( void ){
 return this->real;
 }
 //Complex *const this = &c1
 void setReal( int real ){
 this->real = real;
 }
 //Complex *const this = &c1
 int getImag( void ){
 return this->imag;
 }
 //Complex *const this = &c1
 void setImag( int imag ){
 this->imag = imag;
 }
};
int main( void ){
 Complex c1;
 c1.setReal( 10 );
 c1.setImag( 20 );
 cout <<"Real Number : " << c1.getReal( ) << endl;
 cout <<"Imag Number : " << c1.getImag( ) << endl;
 return 0;
}

/*class complex{
private:
	int real;
	int imag;

public:
	void acceptRecord(int n1, int n2){
		cout<<"Enter the real no.";
		cin>>this->real;
		cout<<"Enter imag no.";
		cin>>this->imag;

	}

};
int main(){
	complex c1;
	c1.acceptRecord(10, 20);//c1.acceptRecord(&c1, 10, 20)
}

/*#define DEFAULT_VALUE 0
 void sum( int num1, int num2, int num3 = DEFAULT_VALUE, int num4 =
DEFAULT_VALUE, int num5 = DEFAULT_VALUE );
 int main( int argc, char *argv[ ] ){
 sum( 10, 20 );
 sum( 10, 20, 30 );
 sum( 10, 20, 30, 40 );
 sum( 10, 20, 30, 40, 50);
 return 0;
 }
 void sum( int num1, int num2, int num3, int num4, int num5 ){
 int result = num1 + num2 + num3 + num4 + num5;
 cout << "Result : " << result << endl;
 }
void print( int number ){
 cout << "int : " << number <<endl;
}
void print( float number ){
 cout << "float : " << number <<endl;
}
int main( void ){
 //print( 10 ); //int : 10
 //print( 10.5 ); //error: call to 'print' is ambiguous
 //print( 10.5f ); //float : 10.5
 print( (int)10.5 ); //int : 10
 return 0;
}*/



