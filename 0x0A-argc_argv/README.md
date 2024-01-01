# 0x0A. C - argc, argv

C Programming - Command line arguments.

## Tasks

- ***[0-whatsmyname.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/0-whatsmyname.c)***

  A program that prints its name.

  *Demo*
  ```
  $ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-whatsmyname.c -o mynameis
  $ ./mynameis 
  ./mynameis
  ```
  
- ***[1-args.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/1-args.c)***

  A program that prints the number of arguments passed into it.

  *Demo:*
  ```
  $ gcc 1-args.c -o nargs
  $ ./nargs
  0
  $ ./nargs hello, world
  2
  ```

- ***[2-args.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/2-args.c)***

  A program that prints all arguments it receives.

  *Demo*
  ```
  $ gcc 2-args.c -o args
  $ ./args You can do anything, but not everything.
  ./args
  You
  can
  do
  anything,
  but
  not
  everything.
  ```

- ***[3-mul.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/3-mul.c)***

  A program that multiplies two numbers.

  *Demo*
  ```
  $ gcc 3-mul.c -o mul
  $ ./mul 2 3
  6
  $ ./mul 2 -3
  -6
  $ ./mul 245 3245342
  795108790
  $ ./mul
  Error
  ```

- ***[4-add.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/4-add.c)***

  A program that adds positive numbers.

  *Demo*
  ```
  $ gcc 4-add.c -o add
  $ ./add 1 1
  2
  $ ./add 1 10 100 1000
  1111
  $ ./add 1 2 3 e 4 5
  Error
  ```

- ***[100-change.c](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/100-change.c)***

  A program that prints the minimum number of coins to make change for an amount of money.
  - An unlimited number of coins of values 25, 10, 5, 2, and 1 cent can be used.

  *Demo*
  ```
  $ gcc 100-change.c -o change
  $ ./change 10
  1
  $ ./change 100
  4
  $ ./change 101
  5
  $ ./change 13
  3
  ```

- ***[main.h](https://github.com/10thcode/alx-low_level_programming/blob/main/0x0A-argc_argv/main.h)***

  Main header file containing all the function prototypes.
