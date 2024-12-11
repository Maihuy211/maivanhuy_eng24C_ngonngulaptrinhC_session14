# include <stdio.h>
# include <string.h>
int main(){
	char str[]="mai van huy";
	char x;
	printf("Nhap mot ki tu: ");
	scanf("%c",&x);
	int cout;
	int i;
	for(i=0;i<strlen(str);i++){
		if(str[i]==x){
			cout++;
		}
	}
	printf("ki tu %c xuat hien %d lan trong chuoi",x,cout);
}

