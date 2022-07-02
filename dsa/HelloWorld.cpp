#include <bits/stdc++.h>
using namespace std;

// int main()
// {
//   cout << "Learning Git"
//        << "\n";
//   cout << "Change"
//        << "\n";
//   cout << "second change" << endl;
//   return 0;
// }
int main()
{
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
  {
    cin >> arr[i];
  }
  int mx = -1.9999999;
  for (int i = 0; i < n; i++)
  {
    if (arr[i] > mx)
    {
      mx = arr[i];
      cout << mx << endl;
    }
    else
    {
      cout << mx << endl;
    }
  }
}
* /
    //(PRINT OF ALL SUBARRAY IN GIVEN ARRAY)
    /*
    int main()
    {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
      for (int i = 0; i < n; i++)
      {
        for (int j = i; j < n; j++)
        {
          for (int k = i; k <= j; k++)
          {
            cout << arr[k] << " ";
          }
          cout << endl;
        }
      }
      return 0;
    }
    */
    // ******(PRINT OF ALL SUBARRAY IN REVERSE ORDER )*****
    /*
    int main()
    {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
      for (int i = n - 1; i >= 0; i--)
      {
        for (int j = i; j >= 0; j--)
        {
          for (int k = i; k >= j; k--)
          {
            cout << arr[k] << " ";
          }
          cout << endl;
        }
      }

      return 0;
    }
    */
    //(SUM OF ALL SUBARRAY)
    /*
    int main()
    {
      int n;
      cin >> n;
      int arr[n];
      for (int i = 0; i < n; i++)
      {
        cin >> arr[i];
      }
      int sum = 0;
      for (int i = 0; i < n; i++)
      {
        sum=0;
        for (int j = i; j < n; j++)
        {
          sum = sum + arr[j];
          cout << sum << endl;
        }
      }
      return 0;
    }
    */
    //******* (sprial coding it's a unique question now i don't no it's 2d lesson)***
    /*
    //****(MULTIPLICATION OF TWO MATRIX )*********
    int main()
    {
      cout<<"write of matrix order"<<endl;
      int n1, n2, n3;
      cin >> n1 >> n2 >> n3;
      int m1[n1][n2], m2[n2][n3], ans[n1][n3];
      cout << "write first matrix and matrix order of " << n1 << " aur " << n2 << endl;
      for (int i = 0; i < n1; i++)
      {
        for (int j = 0; j < n2; j++)
        {
          cin >> m1[i][j];
        }
      }
      cout << "write second matrix and matrix order of " << n2 << " aur " << n3 << endl;
      for (int i = 0; i < n2; i++)
      {
        for (int j = 0; j < n3; j++)
        {
          cin >> m2[i][j];
        }
      }
      for (int i = 0; i < n1; i++)
      {
        for (int j = 0; j < n3; j++)
        {
          ans[i][j] = 0;
        }
      }
      for (int i = 0; i < n1; i++)
      {
        for (int j = 0; j < n3; j++)
        {
          for (int k = 0; k < n2; k++)
          {
            ans[i][j] += m1[i][k] * m2[k][j];
          }
        }
      }
      cout << "multiplication of two matrix and matrix order of "<<n1<< " aur "<<n3 << endl;
      for (int i = 0; i < n1; i++)
      {
        for (int j = 0; j < n3; j++)
        {
          cout << ans[i][j] << " ";
        }
        cout << endl;
      }
      return 0;
    }
    */
    /*
    //****(trivarsing two matrix)*****************
    int main()
    {
      cout << "write  order of matrix" << endl;
      int n1, n2;
      cin >> n1 >> n2;
      int arr[n1][n2];
      cout << "write of matrix" << endl;
      for (int i = 0; i < n1; i++)
      {
        for (int j = 0; j < n2; j++)
        {
          cin >> arr[i][j];
        }
      }
      for (int i = 0; i < n1; i++)
      {
        for (int j = i; j < n2; j++)
        {
          int temp = arr[i][j];
          arr[i][j] = arr[j][i];
          arr[j][i] = temp;
        }
      }
      cout << "trivesing of matrix" << endl;
      for (int i = 0; i < n1; i++)
      {
        for (int j = 0; j < n2; j++)
        {
          cout << arr[i][j] << " ";
        }
        cout << endl;
      }

      return 0;
    }
    */
    /*
    //****(SEARCH OF MATRIX)**********
    int main()
    {
      int n, m;
      cin >> n >> m;
      int arr[n][m];
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < m; j++)
        {
          cin >> arr[i][j];
        }
      }
      cout << "matrix or 2d array is look like a this" << endl;
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
          cout << arr[i][j] << " ";
        }
        cout << endl;
      }
      int x;
      cin >> x;
      for (int i = 0; i < n; i++)
      {
        for (int j = 0; j < n; j++)
        {
          if (x == arr[i][j])
          {
            cout << "position of x=" << i << "position of y=" << j << endl;
          }
        }
      }
      return 0;
    }
    */
    //***(palidrone concept of aray)********
    /*
    int main()
    {
      int n;
      cin >> n;
      char arr[n + 1];
      cin >> arr;
      bool check = 1;
      for (int i = 0; i < n; i++)
      {
        if (arr[i] != arr[n - 1 - i])
        {
          bool check = 0;
          break;
        }
      }
      if (bool check = 1)
      {
        cout << "word is polidroni" << endl;
      }
      else
      {
        cout << "it is not palidroni" << endl;
      }

      return 0;
    }
    */
    // (LONGEST WORD IN SENTENCE AND YOUR LENGTH)
    /*
    int main()
    {
      int n;
      cin >> n;
      cin.ignore();
      char arr[n + 1];

      cin.getline(arr, n);
      cin.ignore();
      int i = 0;
      int current_len = 0, max_len = 0, str = 0, maxstr = 0;
      while (1)
      {
        if (arr[i] == ' ' || arr[i] == '\0')
        {
          if (current_len > max_len)
          {
            max_len = current_len;
            maxstr = str;
          }
          current_len = 0;
          str = i + 1;
        }
        else
        {
          current_len++;
        }

        if (arr[i] == '\0')
          break;
        i++;
      }
      cout << arr << endl;
      cout << max_len << endl;
      for (int i = 0; i < max_len; i++)
      {
        cout << arr[maxstr + i] << " ";
      }
      cout << endl;

      return 0;
    }
    */
    /*
    //********* stirng problem*******;
    int main()
    {
      string str = "sfkmdlsds.dmD,DMDSDSMDMOD,D";
      // cout << 'a' - 'A' << endl;
      for (int i = 0; i < str.size(); i++)
      {
        if (str[i] >= 'A' && str[i] <= 'Z')
        {
          str[i] += 32;

      }
      cout << str << endl;
      for (int i = 0; i < str.size(); i++)
      {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
          str[i] -= 32;
        }
      }
      cout << str << endl;
      // shotcut of convesion of each word in uppercase and lowercase;
      transform(str.begin(), str.end(), str.begin(), ::toupper);
      cout << str << endl;
      transform(str.begin(), str.end(), str.begin(), ::tolower);
      cout << str << endl;
      return 0;
    }
    */
