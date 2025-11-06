
void main(){
int arr[5],i,j,temp;
for(i=0;i<5;i++) scanf("%d",&arr[i]);
for(i=0;i<5;i++){
for(j=0;j<4;j++){
if(arr[j]>arr[j+1]){
temp=arr[j];
arr[j]=arr[j+1];
arr[j+1]=temp;
}}}
for(i=0;i<5;i++) printf("\n%d",arr[i]);
}
