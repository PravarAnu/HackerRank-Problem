#include <stdio.h>

int main(){
	int l,n,i,w,h;
	scanf("%d",&l);              			
	scanf("%d",&n);

	for(i=0;i<=n-1;i++)
	{
		scanf("%d%d",&w,&h);
		
		if(w<l || h<l)
		{
			printf("UPLOAD ANOTHER\n");
		}
		else if((w==l && h==l)||(w==h))
		{
			printf("ACCEPTED\n");
		}
		else if((w>l && h==l)||(w==l && h>l)||(w>l && h>l))
		{
			printf("CROP IT\n");
		}
		
	}
	return 0;
}