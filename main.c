#include <stdio.h>
#include <stdlib.h>
int main() {
	int i,number,mask,value,inverse[31];    //����,��J��,���k��ƭ�,�l�ƭ�,���A�˭� 
	printf("32�줸10�i����2�i���ഫ��,�п�J�@ 10�i����: ");
	scanf("%d",&number);
	  for(i=0;i<=31;i++){
		mask=number/2;       //���o���k���ƭ� 
		value=number%2;      //���ᰣ�k��l�ƭ� 
		number=mask;         //�N���k�����ƭȩԦ^mask�~��U�@�찣�k 
		inverse[i]=value;    //�N���G�s�i�}�C 
	}
	printf("\n");
	printf("�ഫ���G: ");
	  for(i=31;i>=0;i--)     //�N�B�⵲�G�Y���A�˨��o���T�ƭ� 
	    printf("%d",inverse[i]);
	return 0;
}
