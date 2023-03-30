          global    main
          extern    printf
main:
	  mov   edi, x
	  xor   eax, eax
	  call  printf
	  mov 	eax, 0
	  ret
x: db `Hello, Holberton\n`,0
