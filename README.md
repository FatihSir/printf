# Printf Summary 
The printf summary is a collection of notes that will be used to design the flow chart in this project

- The printf functins prints to the standard output in the console.

## Format String
The format string contains both the **text** and the spercifiers "**%**" followed by the the data type to print *(%d for intergers and %s for string)*.

E.g

```c
	int money = 300
	printf("I have %d rands", money)
```

In the example above '"I have %d rands"' is the **Format string**, and **%d** is the format spercifier for a integer. In this example the format spercifier tells 'printf' that the first argument that will be passed is a integer.

The format string is then proccessed by printf and all the spercifers are replaced with the actual values from the arguments given. so to summirse this in bullet form 

1. Obtian the Format string and the Argumets passed
1. Proccess the Spercifiers in the format string 
1. Get rid of all the Spercifiers and Replace them with the actaul values
1. print to the console

## Argument Handling

**Variadic Functions** are used in 'printf' in-order to handle the indefinate number of argument that being passed into printf.Variadic functions are declared with the **stdarg.h** header, further explainations of Variadic functions can be found here [Variadic functions Page](https://github.com/Masquerayd/alx-low_level_programming/tree/master/0x10-variadic_functions).


