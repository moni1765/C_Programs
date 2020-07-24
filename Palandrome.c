#include <stdio.h>
void main()
{
  char text[100];
  int first, middle, end, length = 0;

  scanf("%s",&text);

  while (text[length] != '\0')
    length++;

  end = length - 1;
  middle = length/2;

  for (first = 0; first < middle; first++)
  {
    if (text[first] != text[end])
    {
      printf("it is not a palindrome.\n");
      break;
    }
    end--;
  }
  if (first == middle)
    printf("it is a Palindrome.\n");

  }
