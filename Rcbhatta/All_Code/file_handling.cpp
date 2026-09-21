/*---------------------File Handling----------------------*/
/*
File handling is a process of reading and writing data to file
        C++ file handling allowed you to store output of program in a file 
        and laso resad file data on console.

        File handling operation:
            * create a file
            * open file
            * read file 
            * write file
            * delete file
            * copy file
            

*/
/*#include<iostream>
#include<fstream>
using namespace std;
main(){
        ofstream onFile ;  // onfile is a object
           // ofstream is a class where we can create file and also do write operation
        onFile.open("C:\\Users\\User\\Desktop\\MRC\\learnc++\\output\\output\\ramchandra.txt");  
        
// open is a function where we set the location of file and provide file name
        onFile<<"Hello My name is Ramchandra";   //writing operation similar like cout
        cout<<"Data has been writen in file";

        onFile.close();  //close file
        }
        */


        //----------------Read file into the console---------------
   /* #include<iostream>
    #include<fstream>
    using namespace std;
    main(){
        ifstream inFile; string str;
        inFile.open("C:\\Users\\User\\Desktop\\MRC\\learnc++\\output\\output\\ramchandra.txt");
        inFile>>str;
        // while(getline(inFile,str)){
        //     cout<<str;
        // }
      getline(inFile,str);
        cout<<str;
        inFile.close();
    }
        */



        /*--------------------------Copy File --------------------*/
    #include<iostream>
    #include<fstream>
    #include<string>
    using namespace std;
    main(){
        ifstream inFile; 
        ofstream onFile;
        char str;
        inFile.open("C:\\Users\\User\\Desktop\\MRC\\learnc++\\output\\output\\ramchandra.txt");
        // onFile.open("C:\\Users\\User\\Desktop\\MRC\\learnc++\\output\\output\\ramchandra2.txt");
    while(inFile.get(str)){
        onFile.put(str);
    }
     cout<<"copied"<<endl;
        inFile.close();
        onFile.close();
        int value = remove("C:\\Users\\User\\Desktop\\MRC\\learnc++\\output\\output\\ramchandra2.txt");
    if(value == 0){
        cout<<"file Deleted";

    }
    else {
        cout<<"File not deleted";

    }
    }


    /*-------------Delete file ---------------*/
   // remove(file path);