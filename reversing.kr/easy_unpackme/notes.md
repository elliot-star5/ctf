# OEP : original entry point 
# https://reverseengineering.stackexchange.com/questions/16783/what-does-va-and-oep-means-and-how-does-iat-be-fixed-manually#16785
# https://reverseengineering.stackexchange.com/questions/72/unpacking-binaries-in-a-generic-way/91#91

I don't get it why disassembled version is different from real binary x`x`x
fake entry point is at address : 0x0040a04b

Our task is reach first calling function that is been found either searching
for function `push ebp` or using PeId.

In this case We are going to use PeId.

![testing]()