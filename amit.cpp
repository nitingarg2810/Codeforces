#include<stdio.h>
#include<math.h>

int main()
{
  int mtf;
  int i;
  int bn = 884348, sid = 4000;
  //char dep[] = {"Quality management"}
  for(i=0;i<80;i++)
  {
//    printf("INSERT INTO bankacc\n");
    //float urt = rand()%10  + 1;
//    float bankacc = ((float)(rand()%100)/(float)(100)) * 1;
//    float srt = ((float)(rand()%100)/(float)(100)) * 2;
//    int tds = ((float)(rand()%100)/(float)(100)) * 2;
	int tt = rand()%5;
    int nrf = rand()%1000+10000;
    
//    printf("VALUES (%d,%d,%d);\n",sid,tt,nrf);
   printf("%d\n",nrf);
//    sid++;
  }
return 0;
}

