#include <stdio.h>
#include <string.h>
void ChuyenInHoa(char s[]){
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i<=122]){
			s[i] = s[i]-32;
		}
	}
}


int main(){
	char s[50];
	printf("Nhap chuoi:");
	scanf("%s",s);
	for(int i=0;i<strlen(s);i++){
		if(s[i]>=97 && s[i]<=122){
			s[i] = s[i]-32;
		}
	}
}



//bai2
int main(){
   char s[] = "XinChao";     
   int i = 0;
   int a = 0;            
   int b = 0;        
      
  while(s[i] != '\0') {
  if(s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] == 'u' )
  a++;
  else
  b++;
  i++;
}
   
   printf("chuoi %s co chua : %d nguyen am va %d phu am.", s,a,b);

   return 0;
}




