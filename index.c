#include<stdio.h>
void main(){
    
    // for(int i=1;i<=6;i++){
    //     int k=2,x=4;
    //     for(int j=1;j<=5;j++){
    //         if(i==3 || i==4){
    //             k=1;x=5;
    //         }
    //         if(j>=k &&j<=x){
    //             printf("*");
    //         }else{
    //             printf(" ");
    //         }
    //     }
    //     printf("\n");
    // }//_______________________________________________
 
    // for(int i=1;i<=5;i++){
        
    //     for(int j=1;j<=15;j++ ){
           
              

    //         if(i==j || j==16-i ||i+j==10 && i>=2 ||j-i==6 && i>=2 ){
    //             printf("*");
              
    //         }
    //         else{

    //             printf(" ");
    //         }
               
    //     }
    //     printf("\n");
       
    
        
    // }
   
// 
   //________________________________

//    int arr1[]={1,2,4,4,5,2,3,5,1,2,7,16};

//    int size=12;
//    for(int i=0;i<size;i++){
//     for(int j=0;j<size;j++){
//         if(arr1[i]==arr1[j] && i<j){
//             for(int k=i+1;k<size;k++){
                
//                  arr1[i]=arr1[k];
                 

//             }
//             size--;
//             i--;
           
//         }
//     }
//    }
//    for(int i=0;i<size;i++){
//     printf("%d ",arr1[i]);
//    }

//______________________________________


// int x=1, i, k=0;
// for(int i=1;i<=9;i++){
//     (i>5)?k--:k++;
//       int s=k;
     
//     for(int j=1;j<=9;j++){
      
//         if(j<=k){
//        if(j<i){
         
//         printf("%d ",s);
//         s--;
       
//        }else{
       
//         printf("%d ",s);
//          s++;
//        }
//     // printf("*");
    
//         }
//         else{
//             printf(" ");
        
//         }
//         }
//     printf("\n");
//     if(i<5){
//         k+=2;
//     }else{
//         k-=2;
//     }
// }

//___________________________________________________________

// int k=0;
// for(int i=1;i<=9;i++){
//     (i<=5)?k++:k--;
//     for(int j=1;j<=9;j++){
//         if(j==k || j==10-k){
//             printf("%d",k);
//         }else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

//_________________________________

// int arr1[]={1,2,3,5,7,8,23,45,12,34,56,49},x='#',y='+';

// for(int i=0;i<12;i++){
//   if(arr1[i]%5==0){
//     arr1[i]=x;
//   }
//   else if(arr1[i]%7==0){
//     arr1[i]=y;
//   }
// }
// for(int i=0;i<12;i++){
//     if(arr1[i]==x || arr1[i]==y){
//         printf("%c ",arr1[i]);
//     }else{
//         printf("%d ",arr1[i]);
//     }
// }




//  int arr1[]={1,2,0,5,8,3,0,6,0,0},size=10;
//    for(int i=0;i<size;i++){
//       if(arr1[i]==0){
//           int k=arr1[i];
//           arr1[i]=arr1[i+1];
//           arr1[i+1]=k;
//       }
//    }
// for(int i=0;i<size;i++){
//     printf("%d ",arr1[i]);
// }
//__________________________________
// int x=0;
// for(int i=1;i<=8;i++){
//     if(i>=4){
//         x--;
//     }else{
//         x++;
//     }
//     for(int j=1;<=8;j++){
//          if(j<=5-i || j>=4+i){
//             printf("%d",x);
//          }
//          else{
//             x--;
//             printf("%d",x);
//          }
//     }
// }
// printf("\n");

//_____________________________________

//pattern 



// for(int i=1;i<=4;i++){
//     for(int k=1;k<=i;k++){
//         for(int j=0;j<2;j++){
//             printf("*");
//         }
//         printf("\n");
//     }
//     if(i !=4){
//         for(int x=1;x<=5*i;x++){
//         printf("*");
//     }
//     printf("\n");
//     }
    
// }
//________________________________
// int k=2;
// for(int i=1;i<=7;i++){
//     (i<=4)?k++:k--;

// for(int j=1;j<=k;j++){
    
//     printf("%d",k);
// }
// printf("\n");
// }
//_________________________________
// int k=-1,y=0;
// for(int i=1;i<=8;i++){
//     (i<=4)?y++:y--;
//     if(i<=4){
//         k+=2;
//     }else{
//         k-=2;
//     }
    
//     for(int j=1;j<=k;j++){
//         if(j%2==0){
//             printf("*");
//         }else{
//             printf("%d",y);
//         }
//     }
//     printf("\n");
// }

//_________________________________
// int k=-1,b=1;
// for(int i=1;i<=4;i++){
//     if(i<=4){
//         k+=2;
//     }
//     for(int j=1;j<=k;j++){
//         if(j%2==0){
//             printf("*");
            
//         }else{
//             printf("%d",b);
//             b++;
//         }
//     }
//     printf("\n");
// }

//______________________________
// int x,k=0;
// for(int i=1;i<=4;i++){
//     int x=i+k;
//     for(int j=1;j<=i;j++){
//         printf("%d ",x);
//         x--;
//         k++;
//     }
//     printf("\n");
// }

//______________________

// for(int i=1;i<=5;i++){
//     for(int j=1;j<=5;j++){
//         if(i%2==0){
//             if(j%2!=0){
//                 printf("%d ",0);
//             }else{
//                 printf("%d ",1);
//             }
//         }else{
//             if(j%2==0){
//                 printf("%d ",0);
//             }else{
//                 printf("%d ",1);
//             }
//         }
//     }
//     printf("\n");
// }
//_____________________________

// int arr1[10]={1,1,3,4,5,1,7,8,9,10},size=10;

// for(int i=0;i<size;i++){
//     if(arr1[i]%2 !=0){
       
//             for(int j=i+1;j<size;j++){
//                 arr1[j]=arr1[j+1];
//                 arr1[j]=arr1[j+1];
//                 arr1[j]=arr1[j+1];
           
//         }
//         size-=2;
//     }
// }
// for(int i=0;i<size;i++){
//     printf("%d ",arr1[i]);
// }

//______________________________

// int k=0;
// for(int i=1;i<=9;i++){
//     (i<=5)?k++:k--;
//     for(int j=1;j<=5;j++){
//         if(j>=k && j<=5 ){
//             printf("* ");
//         }else{
//             printf(" ");
//         }
//     }
//     printf("\n");
// }

//_____________________________

// int arr1[]={3,3,4,5,67,8,9,11,12,14},size=10;
// for(int i=0;i<size;i++){
//     if(arr1[i]%2 ==1){
   
       
//          for(int j=i+1;j<size;j++){
//         arr1[j]=arr1[j+1];
//     }
//      size--;
    
    
   
   
// }
// }


// for(int i=0;i<size;i++){
//     printf("%d ",arr1[i]);
// }
//____________________________________
// int arr1[]={3,3,4,5,67,8,9,11,12,14},size=10;

//  for(int i=0;i<size;i++){
//     if(arr1[i]%2==1){
//         for(int j=i;j<size;j++){
//             arr1[j+1]=arr1[j+3];
//             arr1[j+2]=arr1[j+3];
//         }
//         size-=2;
//     }
    
//  }
//  for(int i=0;i<size;i++){
//     printf("%d ",arr1[i]);
//  }


    }
 


