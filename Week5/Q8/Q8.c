
  // int **(*ptr)(int x)();

/*
{ptr} is a pointer to a function that takes an integer (x) as an argument 
         and returns a pointer to a pointer to an integer. 
         The function does not take any other arguments.
*/


   // void **(*N[3])())();
/*
{N} is an array of 3 pointers to functions. 
       Each function takes no arguments and 
	   returns a pointer to a pointer to (void). 
	   The final set of parentheses suggests that the result of
	   calling one of these functions is itself a function that takes no arguments,
	   but the exact interpretation can vary based on context.
*/