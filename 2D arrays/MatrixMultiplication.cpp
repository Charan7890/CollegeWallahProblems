// Matrix multiplication.
#include <iostream>

using namespace std;

int
main ()
{
  int m1, n1;

  cin >> m1 >> n1;

  int a[m1][n1];

  int m2, n2;

  cin >> m2 >> n2;

  int b[m2][n2];
  cout << "Enter first array elements:" << endl;
  for (int i = 0; i < m1; i++)
    {
      for (int j = 0; j < n1; j++)
	{
	  cin >> a[i][j];
	}
    }
  cout << "Enter second array elements:" << endl;
  for (int i = 0; i < m2; i++)
    {
      for (int j = 0; j < n2; j++)
	{
	  cin >> b[i][j];
	}
    }

  if (n1 != m2)
    {
      cout << "Multiplication is not possible." << endl;
    }
  else
    {
      // to store result in this matrix.
      int ans[m1][n2];

      for (int i = 0; i < m1; i++)
	{
	  for (int j = 0; j < n2; j++)
	    {
	      ans[i][j] = 0;
	      for (int k = 0; k < n1; k++)
		{
		  ans[i][j] += a[i][k] * b[k][j];
		}
	    }
	}
    cout<<"The multiplication of two matrices is :"<<endl;
      for (int i = 0; i < m1; i++)
	{
	  for (int j = 0; j < n2; j++)
	    {
	      cout << ans[i][j] << " ";
	    }
	  cout << "\n";
	}
    }

  return 0;
}

