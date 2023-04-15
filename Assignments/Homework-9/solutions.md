# Homework 9 - Solutions

1. 3.42
   
  a. 

  | Variable | Offset (32-bit) | Offset(64-bit) |
  | :------: | :-------------: | :------------: |
  |    p     |        0        |       0        |
  |   s.x    |        4        |       8        |
  |   s.y    |        6        |       10       |
  |   next   |        8        |       12       |

  b. The structure requires 12 (32-bit) or 20 (64-bit) bytes in total.

  c. 
  ```
	void st_init(struct test *st) {
		st->s.y = st->s.x;
		st->p = &(st->s.y);
		st->next = st;
	}
  ```