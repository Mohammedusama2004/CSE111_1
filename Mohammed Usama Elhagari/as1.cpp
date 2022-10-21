#include <iostream>
using namespace std;
int a[40], i, pos, elm, t, wa, x, an;
int m; // stote postion in find method
int insert(int i, int pos, int elm, int t)
{
  cout << "Enter element to Insert : ";
  cin >> elm;
  cout << "Enter Your Postion from 0 to " << t - 1 << ":";
  cin >> pos;

  for (i = t - 1; i >= pos; i--)
  {

    a[i + 1] = a[i];
  }
  a[pos] = elm;
  t++;

  cout << "new array\n";
  for (i = 0; i < t; i++)
  {
    cout << a[i] << "\n";
  }
  return 0;
}
int find(int i, int pos, int elm, int t)
{
  cout << "1-postion\t2-number : ";
  cin >> x;

  switch (x)
  {
  case 1:
    cout << "enter your position from 0 to " << t - 1 << " : ";
    cin >> pos;
    cout << "Your number is " << a[pos];
    break;
  case 2:
    cout << "Enter Your number : ";
    cin >> elm;
    for (i = 0; i < t; i++)
    {
      if (a[i] == elm)
      {
        x = 1;
        m = i;
      }
    }
    break;
    return m;
  }
  if (x == 1)
  {
    cout << "Found and the postion of this number is " << m << "\n";
  }
  else
  {
    cout << "NOTFOUND\n";
  }
  return 0;
}
int Delete(int i, int pos, int elm, int t)
{
  cout << "Enter your number that you need delete : ";
  cin >> elm;
  for (i = 0; i < t; i++)
  {
    if (a[i] == elm)
    {
      m = i;
      for (i = m; i < t; i++)
      {
        a[i] = a[i + 1];
        t--;
      }
      cout << "New array :"
           << "\n";
      for (i = 0; i < t; i++)
      {
        cout << a[i] << "\n";
      }
    }
    else if (i == t - 1)
    {
      cout << "the value is not found\n";
    }
  }

  return 0;
}
int main()
{
  cout << " ============ Mohammed Usama Elhagari ========== " << endl;
  cout << " ======== Assignment 1 ====== CE =====CSE111======== " << endl;
  cout << "Enter the size for array from 1 to 40:";
  cin >> t;
  cout << "Enter: " << t << " elemants \n";
  for (i = 0; i < t; i++)
  {
    cin >> a[i];
  }
  do
  {
    cout << "What do you Want?\n1-Insert\n2-find \n3-Delete : ";
    cin >> wa;
    if (wa == 1)
    {
      insert(i, pos, elm, t);
    }
    else if (wa == 2)
    {
      find(i, pos, elm, t);
    }
    else if (wa == 3)
    {
      Delete(i, pos, elm, t);
    }
    cout << "0-exit\n1-edit : ";
    cin >> an;
  } while (an == 1);
  cout << "Thanks";

  return 0;
}