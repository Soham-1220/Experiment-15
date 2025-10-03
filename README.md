# Experiment-15

## AIM
The aim of these programs is to:

1. Understand the concept of **recursion** in C++ programming.
2. Implement recursion to solve three fundamental problems:
   - Factorial of a number
   - Sum of first N natural numbers
   - Reversal of a string
3. Analyze how recursive functions work internally using the concept of the **call stack**.
4. Compare recursive solutions with iterative ones and understand their advantages and disadvantages.
5. Strengthen logical thinking and problem-solving skills using divide-and-conquer strategies.



## THEORY

### Introduction to Recursion
Recursion is a powerful programming technique where a function calls itself to solve a problem. A recursive function generally breaks down a complex problem into smaller sub-problems of the same type. The recursion continues until it reaches a **base condition**, which stops further recursive calls.

In C++, recursion provides an elegant way to solve problems that can be defined in terms of smaller versions of themselves. Examples include factorial calculation, summation of natural numbers, Fibonacci sequence, string manipulations, and tree traversals.

### Working of Recursion :

When a recursive function is executed:

Each function call is placed on the function call stack.Execution continues until the base case is reached.Once the base case returns a value, the stack starts unwinding.Each waiting function call resumes execution and combines its result with the returned value.This stack behavior explains why recursion can be memory-intensive for very large inputs.

### Advantages of Recursion : 

Simplifies code for problems that have a natural recursive structure.Reduces the need for loops and explicit stack/queue handling.Makes code more elegant and closer to mathematical definitions.

### Disadvantages of Recursion :

Less efficient than iteration due to repeated function calls.Can lead to stack overflow if base case is not handled correctly.Sometimes more difficult to understand and debug for beginners.

### Applications of Recursion :

Mathematical computations (factorial, GCD, Fibonacci, power functions).

Divide-and-conquer algorithms (merge sort, quicksort).

Searching and traversals in data structures (binary trees, graphs).

String and array manipulations (reversal, palindrome checking).



## ALGORITHM



### Algorithm 1: Factorial of a Number using Recursion

**step 1:**  Start.

**step 2:**  Define a recursive function fact(n).

**step 3:** If n == 0, return 1 (base case).Otherwise, return n × fact(n-1).

**step 4:** In main(), accept an integer input num.

**step 5:** Call fact(num) and display the result.

**step 6:** End.




### Algorithm 2: Sum of First N Natural Numbers using Recursion

**step 1:** Start.

**step 2:** Define a recursive function add(n).

**step 3:** If n == 0, return 0 (base case).

**step 4:** Otherwise, return n + add(n-1).

**step 5:** In main(), accept integer input num.

**step 6:** Call add(num) and display the sum.

**step 7:** End.





### Algorithm 3: String Reversal using Recursion

**step 1:** Start.

**step 2:** Define a recursive function revstr(char *str).

**step 3:** If *str is not NULL, call revstr(str+1) (move to next character).

**step 4:** After the recursive call, print the current character *str.

**step 5:** In main(), accept a string input from the user.

**step 6:** Call revstr() with the string.

**step 7:** Display the reversed string.

**step 8:** End.




# Conclusion

## Understanding of Recursion
Through these programs, we explored how recursion works in C++. Each problem demonstrates a different aspect of recursion:

- **Factorial:** Mathematical definition directly mapped to recursion.  
- **Summation:** Simplifies repetitive addition using recursive calls.  
- **String Reversal:** Demonstrates recursive traversal of strings and stack unwinding.  



## Role of Base Case
In all three programs, the base case was crucial to terminate recursion:

- **Factorial:** `n == 0`  
- **Summation:** `n == 0`  
- **String Reversal:** Reaching the null character.  



## Efficiency Considerations
- Recursion simplifies implementation but consumes extra memory due to stack usage.  
- Iterative solutions (using loops) are generally more efficient in terms of performance.  
- However, recursion provides clarity and closely resembles mathematical formulations.  



## Real-World Relevance
These recursive solutions are not just academic:

- **Factorials** are used in probability, statistics, and combinatorics.  
- **Summation** is a basis for arithmetic computations.  
- **String reversal** is applied in parsing, cryptography, and text processing.  



## Learning Outcome
By implementing these programs, we learned:

- How recursive calls build up and unwind in the function call stack.  
- The importance of defining a correct base case.  
- Different types of problems (numerical, summation, and string manipulation) can be solved with recursion.  
- Trade-offs between recursive and iterative approaches.  



## Final Note
In summary, **recursion is a powerful tool for programmers.**  
It allows us to write cleaner and conceptually simple code for problems that naturally exhibit recursive behavior.  

These programs serve as a foundation for understanding advanced recursive algorithms in data structures and algorithms such as **sorting, searching, and tree/graph traversals.**
