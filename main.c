#include "Compress.h"
#include "Decompress.h"

int main()
{
  char input = 0;

  printf("The program compresses/decompresses text files using Huffman Coding\n\n");

  while (input != 'C' && input != 'D')
  {
    printf("Do you want to compress (C) or decompress(D)? > ");
    scanf("%c", &input);
    fflush(stdin);
  }

  if (input == 'C')
    CompressTextFile();

  else
    DecompressHuffmanFile();

  printf("\nPress Enter to exit...");
  while(getchar() != '\n');

  return 0;
}
