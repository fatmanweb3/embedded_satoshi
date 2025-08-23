#include <stdio.h>

// int main(void)
// {
//      int x = 10;
//      int *p = &x;
//      int **pp = &p;

//      printf(" %d %d %d\n", x, *p, **pp);

//      *p = 28;
//      printf(" %d %d %d\n", x, *p, **pp);

//      **pp = 30;
//      printf(" %d %d %d\n", x, *p, **pp);

//      return 0;
// }

// int main (void)
// {
//      int x = 10;
//      int *p = &x;  // pointer to int
//      printf(" x = %d, *p = %d, &x = %p, p = %p\n", x, *p, (void*)&x, (void*)p);

//      *p = 20;         // modify via a pointer
//      printf("x = %d, *p = %d \n", x , *p);


//      return 0;
// }

// int main(void) {
//     int x = 5;
//     int *p = &x;
//     int **pp = &p;

//     printf("x=%d, *p=%d, **pp=%d\n", x, *p, **pp);

//     **pp = 42;  // modifies x
//     printf("x=%d, *p=%d, **pp=%d\n", x, *p, **pp);

//     return 0;
// }

// int main(void)
// {
//      int arr[5] = {10,20,30,40,50};
//      int *p = arr;   /// same as &arr[0]


//      printf("arr[0] = %d, *p = %d\n", arr[0], *p);
//      printf("arr[2] = %d, *(p+2) = %d\n", arr[2], *(p+2));

//      *(p+3) = 999; // modify the 4th element
//      printf("arr[3] = %d\n", arr[3]);

//      return 0;
// }


// function poitners


// void hello(void)
// {
//      printf(" hi this is om nama sivaya \n");
// }

// void bye(void)
// {
//      printf(" hi varata mame durre by sivaya nama\n");
// }


// int main(void)
// {

//      void(*fptr)(void); // pointer to function


//      fptr = hello;

//      fptr(); // calls hello()


//      fptr = bye;

//      fptr(); // calls the bye function

//      return 0 ;

// }


// void pointers & typescaling


// int main(void)
// {
//      int x = 10;

//      float y = 5.5;

//      void *vp;

//      vp = &x;

//      printf(" int via void* = %d \n", *(int*)vp);

//      vp = &y;

//      printf(" float via void* = %.2f \n", *(float*)vp);
// }

// -pointers to struct 

// struct Point
// {
//      int x,y;
// };

// int main(void)
// {
//      struct Point p1 = {10, 20};
//      struct Point *ptr = &p1;
     

//      printf(" x = %d, y = %d\n", ptr->x, ptr->y);

//      ptr->x = 99;

//      printf(" x = %d, y = %d\n", ptr->x, ptr->y);

//      return 0 ;
     
// }

