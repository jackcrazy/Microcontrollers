#include<reg52.h>
void Delay(unsigned int t){//��ʱ����
	while(t--);
	 return ;
}
void  main(){
	 unsigned int q;
	 while(1){
		 P1=0xfe;
	  for(q=0;q<8;q++)
			{
			Delay(10000);
			P1<<=1;//����һλ
			P1=P1|0x01;
	   }
			P1=0x7F;
		 for(q=0;q<8;q++)
			{
			Delay(10000);
			P1>>=1;//����һλ
			P1=P1|0x80;//���λ���1
	   }
  }
}
