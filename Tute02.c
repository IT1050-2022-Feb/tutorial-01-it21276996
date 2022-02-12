#iclude <stdio.h>
int main (void)
{
  int distance;
  float price, total;

  printf("enter the distance travelled in km : ");
  scanf("%d", &distance);

  if(distance > 0 && distance <= 30)
  {
    price =distance *50;
    total=price;
  }
  else
  {
    price = (distance - 30)* 40;
    total = price + (30*50);
  }
  printf("the total price for the journey is : %.2f", total);

  return 0;
}

