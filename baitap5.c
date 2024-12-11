# include <stdio.h>
# include <string.h>
int main(){
	char str[]="m a i v a n h u y";
    int cout;
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==' '){
			cout++;
		}
	}
	printf("so tu trong chuoi la: %d",cout+1);
}
