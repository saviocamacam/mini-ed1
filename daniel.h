
void avg(int *v, int n){
  int soma = 0, i = 0;
  while(i<n) soma += v[i++];
  return soma/n;
}
