#include <cstdlib>
#include <iostream>
#include <ctime>

using namespace std;
int i=0,j=0,n,s;

int main(int argc, char *argv[])
{
    srand( time( NULL ) );
    cout << "Podaj rozmiar tablic t i w - " << endl;
    cin >> n;
    n--;
    int t[n][n],w[n][n],z[n][n],tr[n][n];
    // wypelniamy losowo
    i=0,j=0;
    while(j<=n)
    {
    t[i][j]=rand()%5;
    w[i][j]=rand()%5;
    z[i][j]=1;
    cout<<t[i][j];
    i++;
    if(i>n)
    {
         i=0;j++;cout << endl;
    }
    }
    i=0,j=0;cout << endl;
    while(j<=n)
    {
    cout<<w[i][j];
    i++;
    if(i>n)
            {
            i=0;j++;cout << endl;
    }
    }
// macierz * t*w
    i=0,j=0;
    cout << "Podaj stala do przemnozenia macierzy t - " << endl;
    cin >> s;
    while(j<=n)
    {
        z[i][j]=(w[i][j])*s;
      //  cout<<t[i][j];
    cout<<(z[i][j]);
    i++;
    if(i>n)
    {
            i=0;j++;cout << endl;
    }
    }
    i=0,j=0;
    cout << "Dodanie macierzy t+w " << endl;
    while(j<=n)
    {
    cout<<((t[i][j])+(w[i][j]));
    i++;
    if(i>n)
    {
            i=0;j++;cout << endl;
    }
    }
    i=0,j=0;
    cout << "Mnozenie macierzy t*w " << endl;
    while(j<=n)
    {
    cout<<((t[i][j])*(w[i][j]));
    i++;
    if(i>n)
    {
            i=0;j++;cout << endl;
    }
    }
    i=0,j=0;
    cout << "Transpozycja t " << endl;
    while(j<=n)
    {
    cout<<((t[j][i]));
    i++;
    if(i>n)
    {
            i=0;j++;cout << endl;
    }
    }
    system("PAUSE");
    return EXIT_SUCCESS;
}
