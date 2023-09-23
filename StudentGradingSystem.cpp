#include <iostream>
#include <algorithm>
using namespace std;
int main(){
    int avg = 0;
    int sum = 0;
    int array[5];
    string arr_name[5];
    for (int i = 0; i< 5; i++){
        cout<< "Enter the name of student " << i+1 << " : "<<endl;
        cin>> arr_name[i];
        cout<< "Enter the grade of "<< arr_name[i] << " : " << endl ;
        cin>> array[i];
        sum = sum + array[i];
        avg = sum/5;
    }
    for(int i =0; i<5; i++){
        cout<< "Grade of Student "<< arr_name[i] << " : " << array[i] << endl;
    }
    cout<< "Highest marks scored : " << *max_element(array , array + 5) << endl;
    cout<< "Lowest marks scored : " << *min_element(array, array + 5) << endl;
    cout<< "Average of the marks obtained by students : " << avg;
}