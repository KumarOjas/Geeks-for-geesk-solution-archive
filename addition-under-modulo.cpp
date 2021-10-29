int sumUnderModulo(long long a,long long b)
{
 int M=100000007;
  int result=(a%M)  +(b%M);
  return result%M;
}
