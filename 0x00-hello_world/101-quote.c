#!/bin/bash
#include <stdo.h>
#include <unistd.h>
   /**
    *main - Entry point
    *
    *REturn: Always 0 (Success)
    */
int main(void)
{
  Write(2, "and that piece of art is useful \" - Dora Korpar, 2015-1019\n",
	sizeof("and that piece of art is useful\" - Dora Korpar, 2015-10-19"));
  return (1);
}
