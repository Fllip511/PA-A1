#include <stdio.h>
#include <string.h>

int main()
{
  char op, entrada[1000], aux[10000], saida[1000];
  char numeros[10] = {'A', 'B', 'C', 'D', 'E', 'F', 'G', 'H', 'I', 'J'};
  int len, i, j, k, cont;
  scanf("%c", &op);
  scanf("%s", entrada);

  len = strlen(entrada);
  entrada[len] = '\0';
  if (op == 'C')
  {
    for (i = 0, j = 0; i < len; i++, j++)
    {
      if (entrada[i] == 'Z')
      {
        aux[j] = 'Z', aux[j + 1] = 'Z', j++;
      }
      else if (entrada[i] >= 48 && entrada[i] <= 57)
      {
        aux[j] = 'Z', aux[j + 1] = numeros[(int)entrada[i] - 48], j++;
      }
      else
        aux[j] = entrada[i];
    }
    len = strlen(aux);
    entrada[len] = '\0';

    for (i = 0, k = 0; i < len; i++, k++)
    {
      cont = 0;
      j = i;
      while (aux[i] == aux[j])
      {
        j++, cont++;
      }
      i = j - 1;
      if (cont > 1)
        saida[k] = cont + '0', saida[k + 1] = aux[i], k++;
      else
        saida[k] = aux[i];
    }
    printf("%s", saida);
  }
  else if (op == 'D')
  {
    len = strlen(entrada);

    if (entrada[0] == 'Z' && len == 1)
      saida[0] = '\0';
    else
    {
      j = 0;
      for (i = 0; i < len; i++)
      {
        if (entrada[i] >= 48 && entrada[i] <= 57)
        {
          if (entrada[i + 1] == 'Z')
          {
            k = (int)entrada[i] - 48;
            while (k > 0)
            {
              saida[j] = entrada[i + 1];
              j++;
              k -= 2;
            }
          }
          else
          {
            k = (int)entrada[i] - 48;
            while (k > 0)
            {
              saida[j] = entrada[i + 1];
              j++;
              k--;
            }
            i++;
          }
        }
        else
        {
          saida[j] = entrada[i];
        }
      }
    }
    printf("%s", saida);
  }

  return 0;
}