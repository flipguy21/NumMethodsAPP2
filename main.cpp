
#include<iostream>
#include<math.h>

using namespace std;
double d = 0;
double det(int n, double mat[10][10])
{
    int c, iminor, i, j, jminor;
    double minor[10][10];  
    if (n == 2) 
    {
        return( (mat[0][0] * mat[1][1]) - (mat[1][0] * mat[0][1]));
    }
    else
    {  
        for(c = 0; c < n; c++)
        {  
            iminor = 0;  
            for(i = 1; i < n; i++)
            {  
                jminor = 0;
                for(j = 0; j < n; j++)
                {    
                    if (j == c)
                    {
                        continue;
                    }
                    minor[iminor][jminor] = mat[i][j];
                    
                    
                    cout <<endl << "iminor: " << iminor << "\tjminor: " << jminor << "\ti: " << i << "\tj: " << j << endl;
                    
                    jminor++;
                }
                iminor++;
                
                
            }
        d += (pow(-1 ,c) * mat[0][c] * det(n - 1 ,minor));
        }

    }
    return d;
}
int main()
{
    int n;
    cout<<"enter the order of matrix" ;
    cin>>n;
    double mat[10][10];
    int i, j;
    cout<<"enter the elements"<<endl;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            cin>>mat[i][j];
        }
    }
    
    cout <<"You entered matrix: \n";
    for (int k = 0; k < n; k++) {
        for (int l = 0; l < n; l++) {
           
            cout << mat[k][l] << "\t";
            if (l==(n-1)) {
                
                cout << "\n";

            }


        }


    }

    cout<<"\ndeterminant: "<<det(n,mat);
    
    
    return 0;
}

