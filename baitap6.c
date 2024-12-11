# include<stdio.h>
# include<string.h>
int main(){
	char str[100];
	printf("nhap chuoi:");
	fgets(str,100,stdin);
	int cout=0;
	int i;
	for(i=0;i<strlen(str);i++){
		if((str[i]>='A'&&str[i]<='Z')||(str[i]>='a'&&str[i]<='z')){
			cout++;
		}
	}
	printf("so ki tu la chu cai trong chuoi la: %d",cout);
	return 0;
}

