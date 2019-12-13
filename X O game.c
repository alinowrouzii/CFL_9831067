#include <stdio.h>
char a[10]={'  ','  ','  ','  ','  ','  ','  ','  ','  ','  ',} ;
int first_func(){
    printf("\t|1\t|2\t|3\n");
    printf("\t- - - - - - - - -\n") ;
    printf("\t|4\t|5\t|6\n");
    printf("\t- - - - - - - - -\n") ;
    printf("\t|7\t|8\t|9\n");
}
int func(){
    printf("\t|%c\t|%c\t|%c\n",a[1],a[2],a[3]);
    printf("\t- - - - - - - - -\n") ;
    printf("\t|%c\t|%c\t|%c\n",a[4],a[5],a[6]);
    printf("\t- - - - - - - - -\n") ;
    printf("\t|%c\t|%c\t|%c\n",a[7],a[8] , a[9]);

}
int main(){
    int n , counter[10] ={0} , counter_x[10] = {0} , counter_o[10] = {0} ;

    first_func() ;
    int k = 0 ;
    while( k<9 ){
        printf("\tPLAYER_X : Please enter number between 1 to 9\n") ;
        scanf("%d",&n) ;
        while(n>9){
            printf("\tPLAYER_X : Please enter number between 1 to 9\n") ;
            scanf("%d",&n) ;
        }

        if(counter[n]==0){
            a[n] = 'X' ;
            counter[n] ++ ;
            counter_x[n] ++ ;
        }
        func() ;
        if((counter_x[1]>0 && counter_x[2]>0 && counter_x[3]>0)|| (counter_x[4]>0 && counter_x[5]>0 && counter_x[6]>0) ||(counter_x[7]>0 && counter_x[8]>0 && counter_x[9]>0) ||(counter_x[1]>0 && counter_x[4]>0 && counter_x[7]>0) ||(counter_x[2]>0 && counter_x[5]>0 && counter_x[8]>0) ||(counter_x[3]>0 && counter_x[6]>0 && counter_x[9]>0) ||(counter_x[1]>0 && counter_x[5]>0 && counter_x[9]>0) ||(counter_x[3]>0 && counter_x[5]>0 && counter_x[7]>0) ){
            printf("\n\tPLAYER_X won!\n");
            return 0 ;
        }
        k++ ;

        if(k<9){
        printf("\tPLAYER_O : Please enter number between 1 to 9\n") ;
        scanf("%d",&n) ;
        while(n>9){
            printf("\tPLAYER_O : Please enter number between 1 to 9\n") ;
            scanf("%d",&n) ;
        }
        if(counter[n]==0){
            a[n] = 'O' ;
            counter[n] ++ ;
            counter_o[n] ++ ;
        }
        func() ;
        if((counter_o[1]>0 && counter_o[2]>0 && counter_o[3]>0)|| (counter_o[4]>0 && counter_o[5]>0 && counter_o[6]>0) ||(counter_o[7]>0 && counter_o[8]>0 && counter_o[9]>0) ||(counter_o[1]>0 && counter_o[4]>0 && counter_o[7]>0) ||(counter_o[2]>0 && counter_o[5]>0 && counter_o[8]>0) ||(counter_o[3]>0 && counter_o[6]>0 && counter_o[9]>0) ||(counter_o[1]>0 && counter_o[5]>0 && counter_o[9]>0) ||(counter_o[3]>0 && counter_o[5]>0 && counter_o[7]>0) ){
            printf("\n\tPLAYER_O won!\n");
            return 0 ;
        }
        k++ ;

        }
    }
    printf("\tthe game equalized!") ;
    return 0 ;
}
