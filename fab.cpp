#include<iostream>
#include<stdio.h>
#include<pthread.h>
#include <unistd.h>

	 int size,first=0,second=1,third,n;
	 int b[1000];
void * cal(void * arg)
{
  for(int i=0;i<n;i++)
  {
	  	b[i]=first;
	  	third=first+second;
	  	first=second;
	  	second=third;
  }
}
int main(){  printf(" \n enter number of elements :");
	  scanf("%d",&n);
      pthread_t fd;
      pthread_create(&fd,NULL,cal,NULL);
      pthread_join(fd,NULL);
        for(int i=0;i<n;i++)
  {
	  printf(" %d \n",b[i]);
	  	
  }
	
}
