# Homework 10 - Solutions

1. 3.16
   
	Original:
	```{C}
	void cond (long a, long *p) {

   	if (p && a > *p)
  	     *p = a;

	}
	```
	a. `goto` Version:

	```{C}
	void cond (long a, long *p) {

 	  if (!(p && a > *p)) 
  	     goto done;
  	  *p = a;

		done:
		return;
	}
	```
	b. The assembly has two conditional branches because it cannot check two conditions in one statement, however if either one fails, it will continue to the return and ignore the `movq` instruction.

2. 3.23

	a. `x` is stored in `$rdi`, `y` is stored in `$rcx`, and `n` is stored in `$rdx`

	b. The compiler has removed the need for `*p` by adding 1 to the sum of `x` and `y` in the `leaq` instruction in `.L2`.