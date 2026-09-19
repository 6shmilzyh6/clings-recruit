/生产不重复的arr数组，并完成以下任务：
//1：求和
//2：取平均值
//3：找到比平均值大的数并打印出来
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int arr[10]={0};
int sum=0;
int avg=0;
int len=sizeof(arr)/sizeof(arr[0]);
int contains (int arr[],int len,int num){
    for (int i=0;i<len;i++){
        if (arr[i]==num){
            return 1;
        }return 0;
    }
}
int main (void){
    srand (time (NULL));
    for (int i=0;i<len;){
int flag=contains (arr,len,num);
if (!flag){
    num=rand()%100+1;
    arr[i]=num;
}   i++;
for (int i=0;i<len;i++){
    printf ("%d",arr[i]);
    sum+=arr[i];
}
avg=sum/len;
printf("平均数是%d\n",avg);
for (int i=0;i<len;i++){
    if (arr[i]>avg){
        printf ("比平均数大的有%d\n",arr[i]);
    }
}

}
    return 0;
}
