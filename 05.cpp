#include <stdio.h>

#include <stdlib.h>

int main(void)

{

   int h1,m1,s1,h2,m2,s2,finalh,finalm,finals,time;

    printf("��J�_�l�ɶ��G");

    scanf("%d%d%d", &h1, &m1, &s1);// ��Jh1 m1 s1 

    printf("��J�����ɶ��G");

    scanf("%d%d%d", &h2, &m2, &s2); // h2 m2 s2 


    finalh  = h1-h2;

    finalm  = m1-m2;

    finals  = s1-s2;

	finalh = abs(finalh);//finalh������� 

    finalm = abs(finalm);//finalm������� 

    finals = abs(finals);//finals������� 

    time =finalh * 3600 +  finalm  * 60 + finals;

    printf("\n�۹j��Ƭ�: %d\n", time);

    system("pause");

    return 0;

}
