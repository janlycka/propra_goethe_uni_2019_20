#include <iostream>
#include <fstream>
#include <string>
#include <random>

class static;
using namespace std;

void showtextfile();
static int **task_C(int y,int x);
void show_rand();
int*** CBild encryption(int** Bild, int** Key);

int main(){
//
//    showtextfile();

**task_C(100,200);

 return 0;   
}

//  Excercise 2 task 1


//class NBild{
//    
//    private:
//    // Atributes
//    
//    
//    public:
//    //Methods
//    
//    //this funtion  import the text file to the Class
//    
//        void import_textfile();
//        
//        void export_textfile();
//    
//    //
//    
//    };
//
//class CBild{
//    bool[2][2] bildblock;
//    
//    
//    //methode
//    
//   void set_A(bool[][] bildblock){
//        bildblock =[0,1][1,0]
//    }
//    
//    
//    
//    };

//void show_rand(int **arr, size_t rows, size_t cols){
//      for (int i=0;i<rows;i++){
//        for (int j=0;j<cols;j++){
//          cout<<arr[i][j];
//        }
//        cout<<endl;
//    }
//    
//}

void showtextfile(){
    string line;
  ifstream myfile ("beispielbild_1.txt");
  if (myfile.is_open())
  {
    while ( getline (myfile,line,'\n'))
    {
      cout << line << '\n';
    }
    myfile.close();
  }

  else cout << "Unable to open file"; 
    
    }
    


static int** task_C(int y,int x){
    
    int** ranBild = new int*[y];//={};
    for(int a=0; a<y; a++){
        ranBild[a] = new int[x];
    }
    
    for (int i=0;i<y;i++){
        for (int j=0; j<x;j++){
          ranBild[i][j]=rand()%2;
 //       cout << ranBild[i][j] << " ";
        }
    }
    return ranBild;
    }
    
    
    
int***CBild encryption(int** Bild, int** Key){
    
    int****Cbild EBild=new int[y];
    for(int a=0; a<y; a++){
        CBild[a] = new int[x];
    }
    
    for (int i=0;i<y;i++){
        for (int j=0; j<x;j++){
          
            if (Bild[i][j]==Key[i][j] && Bild** = 0){
                EBild[i][j]= ClassB; 
            }
            else if (Bild[i][j]==Key[i][j] && Bild** = 1){
               EBild[i][j]= ClassA; 
            } 
            else if (Bild[i][j]!=Key[i][j] && Bild** = 1){
               EBild[i][j]=  ClassA; 
            }
            else if (Bild[i][j]!=Key[i][j] && Bild** = 0){
                EBild[i][j]=  ClassB; 
        }
        }
    }
    
    return Cbild;
}


int** decryption(int*** ecrypt, int** key){
    
    
    
    
    
    
    
    
}
    
/*! This function counts the number of the lines
 * 
 */
//int countvertical(){
// string line;
//  ifstream myfile ("beispielbild_1.txt");
//  if (myfile.is_open())
//  {
//    while ( getline (myfile,line) )
//    {
//      cout << line << '\n';
//    }
//    myfile.close();
//  }
//
//  else cout << "Unable to open file"; 
//    
//    }

/*! This function counst how many  characters or pixels have a line
 *
 */
//int counthorizontal(){
//    
//    
//    
//    
//}