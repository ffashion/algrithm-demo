#include <stdio.h>
int swap(int *_,int *__){
    int tmp;
    tmp = *_;
    *_ = *__;
    *__ = tmp;
}
int main(void){
    int data[] = {6,9,1,5,5};
    
    for(int i=0;i<=4;i++){
        for(int j = i+1;j>=i&&j<=4;j++){
            if(data[i] < data[j]){
                swap(&data[i],&data[j]);
            }
            
        }
    }

    for(int i =0; i<= 4;i++){
        printf("%d",data[i]);
    }
    


}


