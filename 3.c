#include <stdio.h>
#include <stdlib.h>

struct tip{
	char name[20];
	float ennea;
	char mbti[5];
	int tri;
};

int main(){
	struct tip *dizi;
	int i=0, a;
	printf("How many people?");
	scanf("%d",&a);
	dizi=(struct tip *)malloc(a*sizeof(struct tip));
	for(i; i<a; i++){
		printf("Enter name:\n");
		scanf("%s",&dizi[i].name);
		printf("Enter mbti:\n");
		scanf("%s",&dizi[i].mbti);
		printf("Enter ennea (enter as main type dot wing)\n");
		scanf("%f",&dizi[i].ennea);
		printf("Enter tritype:\n");
		scanf("%d",&dizi[i].tri);
	}
	for(i=0; i<a;i++){
		printf("%s 's Type\n",dizi[i].name);
		printf("MBTI: %s\nEnneagram:%.f\nTritype:%d\n",dizi[i].mbti, dizi[i].ennea, dizi[i].tri);
	}
	free(dizi);
	return 0;
}
