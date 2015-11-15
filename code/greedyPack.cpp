#include <stdio.h>

struct product {
	char name[10];
	int weight;
	int price;
};

int main() {
	struct product productsList[2];
	
	productsList[0] = {'marlon', 135, 10000000};
	
	printf("物品名字: %c, 物品重量: %d, 物品价格: %d", productsList[0].name, productsList[0].weight, productsList[0].price);
	
	return 0;
}