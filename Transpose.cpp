#include <iostream>

using namespace std;

int main()
{
    int n,m;

    cin>>n>>m;

    int arr[n][m];
    int transpose[m][n];

    for (int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            cin>>arr[i][j];

    cout<<endl;

    for (int i=0; i<n; i++)
        for(int j=0; j<m; j++)
            transpose[j][i]=arr[i][j];

    cout<<endl;

    for (int i=0; i<m; i++){
        for(int j=0; j<n; j++)
        {
            cout<<transpose[i][j]<<" ";
        }
    cout<<endl;
    }


}
