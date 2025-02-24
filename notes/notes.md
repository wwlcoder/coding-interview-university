<!-- *********************************************************************** -->
<!--                                                                         -->
<!--                                                      :::      ::::::::  -->
<!-- Asymptnotic Notation.md                            :+:      :+:    :+:  -->
<!--                                                  +:+ +:+         +:+    -->
<!-- By: sshao-ju <@42-bkk.com>                     +#+  +:+       +#+       -->
<!--                                              +#+#+#+#+#+   +#+          -->
<!-- Created: 2025/02/22 05:08:58 by sshao-ju          #+#    #+#            -->
<!-- Updated: 2025/02/22 05:26:15 by sshao-ju         ###   ########.fr      -->
<!--                                                                         -->
<!-- *********************************************************************** -->

Big-O Notation (Worst Case Complexity); f(n) = O(g(n)) if there are positive constants c and n0 such that 0 <= f(n) <= c*g(n) for all n >= n0
Big-O is used to pick up dominating/fastest growing term
(Average Case Complexity)
(Best Case Complexity); f(n) = Ω(g(n)) if there are positive constants c and n0 such that 0 <= c*g(n) <= f(n) for all n >= n0
Each of these complexities gives a function of size vs time

n is the size of program inputs
n^2: nested loop for i = (1, n) and then j = (1, n). The more you nest, the bigger the power
log n: for arrays that is divided into small portions 


Table of Important Big-O Sets (Smallest to Largest)
Function Name | Common Name

Efficient algorithms
O(1) | Constant
O(log n ) | Logarithmic
O(log^2 n) | Log Squared
O(sqrt n) | root-n
O(n) | Linear
O(n log n) | n log n

Inefficient algorithms
O(n^2) | Quadratic
O(n^3) | Cubic
O(n^4) | Quadratic
O(2^n) | Exponential
O(e^n) | Exponential (way more exponential)
O(n!) | Factorial

Useless algorithms
O(n^7) 

1) look at what % of program time a function takes for a number of inputs
2) look at how the time taken grows with the size of the input

KnapSack Problem:
- Left to right: wrong ({1,2} and target 2). This example kills this algorithm
- Small to big: wrong ({1,2} and target 2). This example kills this algorithm
- Big to small: wrong ({2,3,4} and target 5). This example kills this algorithm

You are going be design wrong algorithms most of time. Need to recognize what is wrong fast and move on

RAM Model of computation
1) Each simple operation takes 1 step (+, -, =, if, call)
2) Loops and subroutines calls are not simple operations. They depend on size of data and contents of
a subroutine. Sort is not a single step operation
3) Each memory access takes 1 step
! We measure the run time of an algorithm by counting the number of steps
! RAM model gives a gross model of how long an algorithm will take to run

Algorithm Analysis
1) Estimate run time of an algorithm before even writing the actual code
2) Check size of input data in problem statement. Will algorithm solve the largest test cases in time?
3) Run time determines if the algorithm is worth implementing
4) 


