// In C++ multidimensional arrays generally follow row major order 
// Curly brackets are optional in matrix but they are good for better representation
// First dimension can be omitted and compiler is very smart it will figure out that by himself 

// There are many ways to declare a matrix 

/*

one is directly declaring fixed size matrix
}

*/
#include<bits/stdc++.h>
using namespace std;
int main(){
    
   



int mat[2][3];
for(int i = 0;i<2;i++){
    for(int j = 0;j<3;j++){
        mat[i][j] = i+j;
    }
}

for(int i = 0;i<2;i++){
    for(int j = 0;j<3;j++){
        cout<<mat[i][j]<<" ";
    }
}


    return 0;
}


// 2nd way is just using variable that can hold  the size of row and coloumns 
    // int n = 3,m = 2;
// int matrix[n][m];


// 3rd way is by using vectors as rows And in thhis we can have dynimically sized coloums

// #include<bits/stdc++.h>
// using namespace std;
// int main(){


// int n = 3 m = 4;
// vector<int> row[n];

// for(int i = 0;i<n;i++){
//     for(int j = 0;j<m; j++){
//             row[i].push_back(10);
//     }
// }

// for(int i = 0;i<n;i++){
//     for(int j = 0;j<m;j++){
//         cout<<row[i][j]<<" ";
//     }
// }
//   return 0;
// }

// Using vectors is not cache friendly comparing to arrays , They are easy to pass in functions , Every row is of dynamic size 
// 4th way is by using vectors of vectors in which we can have dynamic sized rows
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
//    int n = 3,  m = 3;
//    vector<vector<int>> vec;
//    for(int i = 0;i<n;i++){
//     vector<int> row;
//     for(int j = 0;j<m;j++){
//         row.push_back(i+j);
//     }
//     vec.push_back(row);
//    }

    
// for(int i = 0;i<n;i++){
//     for(int j = 0;j<m;j++){
//         cout<<vec[i][j]<<" ";
//     }
// }







   

//     return 0;
// }


// #include<bits/stdc++.h>
// using namespace std;
// int main(){
    
   
// int n = 3, m = 4;
// // We can have an array of pointers of size n where each index of array popints to an array of size m

// int *arr[n];
// for(int i = 0;i<n;i++){
//     arr[i] = new int[m];
// }

 
// for(int i = 0;i<n;i++){
//     for(int j = 0;j<m;j++){
//         arr[i][j] = 10;
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;
// }




//     return 0;
// }




// Using double pointer also we can create a Multidimensional array

#include<bits/stdc++.h>
using namespace std;
int main(){
    
   int **arr;
   int n = 3,m= 4;
   arr = new int *[n];

   for(int i = 0;i<n;i++){
    arr[i] = new int[m];
   }

   for(int i = 0;i<n;i++){
    for(int j = 0;j<n;j++){
        arr[i][j] = i + j;
        cout<<arr[i][j]<<" ";
    }
   }


    return 0;
}

// Using vector isnot cahcae friendly because rows are not at continous location in memory



