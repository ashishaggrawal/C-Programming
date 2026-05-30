# C Programming Practice

Solutions to 40+ programming problems in C, organized by difficulty from language basics to number theory and pattern printing. Each solution is a standalone program with the problem statement and worked examples at the top. All programs compile cleanly with `gcc -std=c11 -Wall -Wextra`.

The same problem set is also solved in Python: [Python-coding](https://github.com/ashishaggrawal/Python-coding).

## Topics Covered

- **Language fundamentals:** `printf` / `scanf` / `fgets`, format specifiers, type casting
- **Operators:** arithmetic (integer vs. floating-point division), logical and bitwise
- **Control flow:** `if` / `else if` / `else`, `switch`, `for` and `while` loops
- **Nested loops:** star, number and diamond patterns
- **Functions:** helper functions for primality testing and pattern rows
- **Number theory:** primes, GCD (Euclidean algorithm), LCM, divisors, factorials, Fibonacci
- **C-specific care:** choosing integer widths (`long long`, `unsigned long long`) to avoid overflow, safe string input, buffer limits

## Repository Structure

```
├── Basic/     Language fundamentals and operators
├── Easy/      Conditionals and single loops
├── Medium/    Nested loops, patterns and number theory
├── Hard/      Multi-step algorithmic problems
└── *.c        Standalone practice problems
```

## Problems

### Basic

| # | Problem | Concepts |
|---|---------|----------|
| 1 | [Start Coding](Basic/StartCoding.c) | First program, `printf` |
| 2 | [Learn to Comment](Basic/LearnToComment.c) | `//` and `/* */` comments |
| 3 | [Printing](Basic/Printing.c) | Format specifiers `%d`, `%s` |
| 4 | [Int Str](Basic/IntStr.c) | Printing integers and strings together |
| 5 | [Input](Basic/Input.c) | `fgets` for full lines, `scanf` for numbers |
| 6 | [Arithmetic Operators](Basic/ArithmeticOperators.c) | Integer vs. floating-point division |
| 7 | [Logical Operators](Basic/LogicalOperators.c) | `&&`, `\|\|`, `!` |
| 8 | [Bitwise Operators](Basic/BitwiseOperators.c) | `& \| ^ ~ << >>` |
| 9 | [Type Conversion](Basic/TypeConversion.c) | Casting between `int`, `float` and `char` |
| 10 | [Type Cast and Double It](Basic/TypeCastAndDoubleIt.c) | String to integer with `atoi` |
| 11 | [Swap the Numbers](Basic/SwapTheNumbers.c) | Swapping with a temporary variable |
| 12 | [Geometric Progression](Basic/GeometricProgression.c) | Generating a sequence with `long long` |
| 13 | [Multi Printing](Basic/MultiPrinting.c) | Repetition with `for` |

### Easy

| # | Problem | Concepts |
|---|---------|----------|
| 1 | [For Loop](Easy/ForLoop.c) | Counting up |
| 2 | [For Loop 2](Easy/ForLoop2.c) | Counting down |
| 3 | [While Loop](Easy/WhileLoop.c) | Reverse multiplication table |
| 4 | [Jumping through While](Easy/JumpingThroughWhile.c) | Custom loop increments |
| 5 | [Zero Converter](Easy/ZeroConverter.c) | Digit extraction with `%` and `/` |
| 6 | [The Else Statement](Easy/TheElseStatement.c) | `if` / `else if` / `else` |
| 7 | [FizzBuzz](Easy/FizzBuzz.c) | Divisibility checks, condition ordering |
| 8 | [Even Odd Game](Easy/EvenOddGame.c) | Parity check |
| 9 | [Greatest of Three](Easy/GreatestOfThree.c) | Compound conditions |
| 10 | [Leap Year](Easy/LeapYear.c) | Calendar rules with `&&` / `\|\|` |
| 11 | [Calculator](Easy/Calculator.c) | `switch` on an operator, division-by-zero handling |
| 12 | [Even Positioned Characters](EvenPositionedCharacter.c) | String indexing, `strlen` |

### Medium

| # | Problem | Concepts |
|---|---------|----------|
| 1 | [Table Difference](Medium/TableDifference.c) | Combining two sequences |
| 2 | [Square Wall](Medium/SquareWall.c) | Nested loops |
| 3 | [Right Angle Triangle](Medium/RightAngleTriangle.c) | Star pattern |
| 4 | [Right Angle Triangle 2](Medium/RightAngleTriangle2.c) | Number pattern |
| 5 | [Inverted Right Angle Triangle](Medium/InvertedRightAngleTriangle.c) | Decreasing nested loops |
| 6 | [Factorial](Medium/Factorial.c) | `unsigned long long` for results up to 20! |
| 7 | [Divisor](Medium/Divisor.c) | Divisibility |
| 8 | [Check Prime](Medium/CheckPrime.c) | Trial division up to √n, overflow-safe loop bound |
| 9 | [Next Prime Number](Medium/NextPrimeNumber.c) | Helper function `isPrime` |
| 10 | [Fibonacci Number](Medium/FibonacciNumber.c) | Iterative sequence, O(n) time and O(1) space |
| 11 | [GCD](Medium/GCD.c) | Euclidean algorithm |
| 12 | [LCM](Medium/LCM.c) | Dividing before multiplying to avoid overflow |
| 13 | [Pattern 5](Medium/Pattern5.c) | Inverted number pattern |
| 14 | [Pattern 10](Medium/Pattern10.c) | Grow-and-shrink star pattern |

### Hard

| # | Problem | Concepts |
|---|---------|----------|
| 1 | [Rightmost Non-Zero Digit](Hard/RightmostNonZeroDigit.c) | Factoring out 2s and 5s so the product never overflows |
| 2 | [Diamond Shape](Hard/DiamondShape.c) | Symmetric pattern built from a reusable row function |

## Building and Running

Requires a C compiler such as GCC or Clang.

```bash
git clone https://github.com/ashishaggrawal/C-Programming.git
cd C-Programming
gcc -std=c11 -Wall -Wextra Medium/CheckPrime.c -o CheckPrime
./CheckPrime
```

Each program reads its input from the keyboard. The expected input and output are documented in the comments at the top of every file.

## Author

**Ashish Aggrawal**: [GitHub](https://github.com/ashishaggrawal)
