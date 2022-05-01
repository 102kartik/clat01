CALCULATOR USING C PROGRAMMING
——————————————————————————————————————————

#include <stdio.h> 
#include <math.h>
int main()
{
float FirstValue; 
float Secondvalue; 
char operator; 
float result;
//RA2111030010102
printf("Enter calculation:\n\n");
scanf("%f%c%f", &FirstValue, &operator, &Secondvalue);
switch(operator)
{
case '/': result = FirstValue/Secondvalue; break;
case '*': result = FirstValue*Secondvalue; break;
case '+': result = FirstValue+Secondvalue; break;
case '-': result = FirstValue-Secondvalue; break;
case '^': result = pow(FirstValue,Secondvalue); break;
default: goto fail;
}
printf("%.9g%c%.9g=%.6g\n\n",FirstValue,operator, Secondvalue, result); goto exit;
fail: printf("Fail.\n"); exit:
return 0;

}
