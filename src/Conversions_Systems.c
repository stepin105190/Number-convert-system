int Binary_to_Decimal(long long n)
{
int decimal=0,i=0,rem;
while(n!=0)
{
rem=n%10;
n/=10;
decimal+=rem*pow(2,i);
++i;
}
return decimal;
}

long  Decimal_to_Binary(int n)
{
long binary=0;
int i=1;
while(n!=0)
{
int rem=n%2;
n/=2;
binary+=rem*i;
i*=10;
}
return binary;
}

int Decimal_to_Octal(int decimal)
{
int i=1,octal=0;
while(decimal!=0)
{
int rem=decimal%8;
decimal/=8;
octal+=rem*i;
i*=10;
}
return octal;
}

int Octal_to_Decimal(int octal)
{
int decimal=0,i=0;
while(octal!=0)
{
int rem=octal%10;
octal/=10;
int res=rem*pow(8,i);
decimal+=res;
i++;
}
return decimal;
}
