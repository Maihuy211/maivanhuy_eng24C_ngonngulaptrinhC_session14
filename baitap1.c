# include<stdio.h>
# include<string.h>
int main(){
    char str[100];
	printf("nhap chuoi:");
	fgets(str,100,stdin);
    printf("chuoi vua nhap la: %s\n",str);
    printf("do dai cua chuoi la: %d",strlen(str));
    return 0;
}
