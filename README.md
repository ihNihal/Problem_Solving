# Problem_Solving

1 - IQ test
Bob is preparing to pass IQ test. The most frequent task in this test is to find out which one of the given n numbers differs from the others. Bob observed that one number usually differs from the others in evenness. Help Bob — to check his answers, he needs a program that among the given n numbers finds one that is different in evenness.

Input
The first line contains integer n (3 ≤ n ≤ 100) — amount of numbers in the task. The second line contains n space-separated natural numbers, not exceeding 100. It is guaranteed, that exactly one of these numbers differs from the others in evenness.

Output
Output index of number that differs from the others in evenness. Numbers are numbered from 1 in the input order.
Examples
Input
5
2 4 7 8 10
Output
3
Input
4
1 2 1 1
Output
2

2 - Second Largest
Three numbers A, B and C are the inputs. Write a program to find second largest among them.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three integers A, B and C.

Output
For each test case, display the second largest among A, B and C, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 1000000
Example
Input
3 
120 11 400
10213 312 10
10 3 450

Output
120
312
10


3- Soft Drinking
This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?

Input
The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.

Output
Print a single integer — the number of toasts each friend can make.

Examples
Input
3 4 5 10 8 100 3 1
Output
2
Input
5 100 10 1 19 90 4 3
Output
3
Input
10 1000 1000 25 23 1 50 1
Output
0
Note
A comment to the first sample:
Overall the friends have 4 * 5 = 20 milliliters of the drink, it is enough to make 20 / 3 = 6 toasts. The limes are enough for 10 * 8 = 80 toasts and the salt is enough for 100 / 1 = 100 toasts. However, there are 3 friends in the group, so the answer is min(6, 80, 100) / 3 = 2.


4.Relational Operator
Some operators checks about the relationship between two values and these operators are called relational operators. Given two numerical values your job is just to find out the relationship between them
that is (i) First one is greater than the second (ii) First one is less than the second or (iii) First and
second one is equal.
Input
First line of the input file is an integer t (t < 15) which denotes how many sets of inputs are there.
Each of the next t lines contain two integers a and b (|a|, |b| < 1000000001).
Output
For each line of input produce one line of output. This line contains any one of the relational operators
‘>’, ‘<’ or ‘=’, which indicates the relation that is appropriate for the given two numbers.
Sample Input
3
10 20
20 10
10 10
Sample Output
<
>
=

5.Sum of Digits
You're given an integer N. Write a program to calculate the sum of all the digits of N.

Input
The first line contains an integer T, the total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, calculate the sum of digits of N, and display it in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
12345
31203
2123
Output
15
9
8

6.10:6:2
The national flag of Bangladesh is bottle green in color and rectangular in size with the length (L) to
width ratio of 10:6. It bears a red circle on the background of green. It maintains the length (L) to
radius ratio of 5:1 (If the length is 10 then width should be 6 and radius should be 2). The color
in the background represents the greenery of Bangladesh while the red circle symbolizes the rising sun
and the sacrifice of lives in our freedom fight.
Input
First line of input will contain the number of test cases, T ≤ 100. Then there follows T lines, each
containing a positive integer L ≤ 1000, representing length of the flag.
Output
For each test case output is a line with two space separated real numbers containing exactly two digits
after decimal point. Two numbers represent the area of red and green portion respectively.
Note: Pi is considered to be arccos(−1).
Sample Input
1
10
Sample Output
12.57 47.43

7. Add Two Numbers
Problem Statement
Every problem starts with a Problem Statement. It tells you in detail about the task to be solved. Usually, although not necessarily, it is accompanied with a story. As a competitive programmer, it is your job to break the problem statement and figure out exactly what it is asking.
Shivam is the youngest programmer in the world, he is just 12 years old. Shivam is learning programming and today he is writing his first program.

The task is very simple: given two integers A and B, write a program to add these two numbers and output it.

Input
This section tells you the format in which your program should receive the input.
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains two Integers A and B.

Output
This section tells us the format in which your program should give the output
For each test case, add A and B and display the sum in a new line.

Take special care for the output format; everything your program prints is considered “output”, so if you output some debugging statements like “Please enter T” or print something like: “The answer is: ”, this will be considered as part of your answer, and because it does not satisfy the output format, it will be marked wrong, even if your answer is otherwise correct!
Constraints
This section tell you the maximum and minimum possible values the variables in the problem statement can take. You do not need to check these constraints in your program. You can safely assume that the input given to your program will be in the given range of constraints.
1 ≤ T ≤ 1000
0 ≤ A,B ≤ 10000
Example
In this section examples of input and output are given in the expected format.
Input
3
1 2
100 200
10 40

Output
3
300
50



8.0 or 1 Swap
We have a sequence 
p
 = {
p
1
,
 
p
2
,
 
.
.
.
,
 
p
N
} which is a permutation of {
1
,
 
2
,
 
.
.
.
,
 
N
}.

You can perform the following operation at most once: choose integers 
i
 and 
j
 
(
1
≤
i
<
j
≤
N
)
, and swap 
p
i
 and 
p
j
. Note that you can also choose not to perform it.

Print YES if you can sort 
p
 in ascending order in this way, and NO otherwise.

Constraints
All values in input are integers.
2
≤
N
≤
50
p
 is a permutation of {
1
,
 
2
,
 
.
.
.
,
 
N
}.
Input
Input is given from Standard Input in the following format:

N

p
1
 
p
2
 
.
.
.
 
p
N

Output
Print YES if you can sort 
p
 in ascending order in the way stated in the problem statement, and NO otherwise.

Sample Input 1
5
5 2 3 4 1
Sample Output 1
YES
You can sort 
p
 in ascending order by swapping 
p
1
 and 
p
5
.

Sample Input 2
5
2 4 3 5 1
Sample Output 2
NO
In this case, swapping any two elements does not sort 
p
 in ascending order.

Sample Input 3
7
1 2 3 4 5 6 7
Sample Output 3
YES
p is already sorted in ascending order, so no operation is needed.


9.The Smallest Pair
You are given a sequence a1, a2, ..., aN. Find the smallest possible value of ai + aj, where 1 ≤ i < j ≤ N.

Input
The first line of the input contains an integer T denoting the number of test cases. The description of T test cases follows. 

The first line of each description consists of a single integer N.

The second line of each description contains N space separated integers - a1, a2, …, aN respectively.

Output
For each test case, output a single line containing a single integer - the smallest possible sum for the corresponding test case.

Constraints
T = 105, N = 2 : 13 points.
T = 105, 2 ≤ N ≤ 10 : 16 points.
T = 1000, 2 ≤ N ≤ 100 : 31 points.
T = 10, 2 ≤ N ≤ 105 : 40 points.
1 ≤ ai ≤ 106
Example
Input:
1
4
5 1 3 4

Output:
4
Explanation
Here we pick a2 and a3. Their sum equals to 1 + 3 = 4.


10. The Department of Redundancy Department
Write a program that will remove all duplicates from a sequence of integers and print the list of unique
integers occuring in the input sequence, along with the number of occurences of each.
Input
The input file will contain a sequence of integers (positive, negative, and/or zero). The input file may
be arbitrarily long.
Output
The output for this program will be a sequence of ordered pairs, separated by newlines. The first
element of the pair must be an integer from the input file. The second element must be the number
of times that that particular integer appeared in the input file. The elements in each pair are to be
separated by space characters. The integers are to appear in the order in which they were contained
in the input file.
Sample Input
3 1 2 2 1 3 5 3 3 2
Sample Output
3 4
1 2
2 3
5 1


11.Simple Array Sum
Given an array of integers, find the sum of its elements.

For example, if the array , , so return .

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

ar: an array of integers
Input Format

The first line contains an integer, , denoting the size of the array.
The second line contains  space-separated integers representing the array's elements.

Constraints


Output Format

Print the sum of the array's elements as a single integer.

Sample Input

6
1 2 3 4 10 11
Sample Output
31



12.Maps-STL
Maps are a part of the C++ STL.Maps are associative containers that store elements formed by a combination of a key value and a mapped value, following a specific order.The mainly used member functions of maps are:

Map Template:

std::map <key_type, data_type>
Declaration:

map<string,int>m; //Creates a map m where key_type is of type string and data_type is of type int.
Size:

int length=m.size(); //Gives the size of the map.
Insert:

m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.
Erasing an element:

m.erase(val); //Erases the pair from the map where the key_type is val.
Finding an element:

map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
Accessing the value stored in the key:

To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.
To know more about maps click Here.

You are appointed as the assistant to a teacher in a school and she is correcting the answer sheets of the students.Each student can have multiple answer sheets.So the teacher has  queries:

 :Add the marks  to the student whose name is .

: Erase the marks of the students whose name is .

: Print the marks of the students whose name is . (If  didn't get any marks print .)

Input Format

The first line of the input contains  where  is the number of queries. The next  lines contain  query each.The first integer,  of each query is the type of the query.If query is of type , it consists of one string and an integer  and  where  is the name of the student and  is the marks of the student.If query is of type  or ,it consists of a single string  where  is the name of the student.



Output Format

For queries of type  print the marks of the given student.

Sample Input

7
1 Jesse 20
1 Jess 12
1 Jess 18
3 Jess
3 Jesse
2 Jess
3 Jess
Sample Output

30
20
0


13. Reverse The Number
Given an Integer N, write a program to reverse it.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the reverse of the given number N, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
4
12345
31203
2123
2300
Output
54321
30213
3212
32


14.Small Factorial
Write a program to find the factorial value of any number entered by the user.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains an integer N.

Output
For each test case, display the factorial of the given number N in a new line.

Constraints
1 ≤ T ≤ 1000
0 ≤ N ≤ 20
Example
Input
3 
3 
4
5

Output
6
24
120

15. GCD and LCM
Two integers A and B are the inputs. Write a program to find GCD and LCM of A and B.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer A and B.

Output
Display the GCD and LCM of A and B separated by space respectively. The answer for each test case must be displayed in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B ≤ 1000000
Example
Input
3 
120 140
10213 312
10 30

Output

20 840
1 3186456
10 30


16. First and Last Digit
If Give an integer N . Write a program to obtain the sum of the first and last digits of this number.

Input
The first line contains an integer T, the total number of test cases. Then follow T lines, each line contains an integer N.

Output
For each test case, display the sum of first and last digits of N in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ N ≤ 1000000
Example
Input
3 
1234
124894
242323

Output
5
5
5


17. Id and Ship
Write a program that takes in a letterclass ID of a ship and display the equivalent string class description of the given ID. Use the table below.

Class ID	Ship Class
B or b	BattleShip
C or c	Cruiser
D or d	Destroyer
F or f	Frigate
Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains a character.

Output
For each test case, display the Ship Class depending on ID, in a new line.

Constraints
1 ≤ T ≤ 1000
Example
Input

3 
B
c
D

Output
BattleShip
Cruiser
Destroyer

18. Valid Triangles
Write a program to check whether a triangle is valid or not, when the three angles of the triangle are the inputs. A triangle is valid if the sum of all the three angles is equal to 180 degrees.

Input
The first line contains an integer T, the total number of testcases. Then T lines follow, each line contains three angles A, B and C, of the triangle separated by space.

Output
For each test case, display 'YES' if the triangle is valid, and 'NO', if it is not, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ A,B,C ≤ 180
Example
Input

3 
40 40 100
45 45 90
180 1 1
Output

YES
YES
NO



19. Enormous Input Test
The purpose of this problem is to verify whether the method you are using to read input data is sufficiently fast to handle problems branded with the enormous Input/Output warning. You are expected to be able to process at least 2.5MB of input data per second at runtime.

Input
The input begins with two positive integers n k (n, k<=107). The next n lines of input contain one positive integer ti, not greater than 109, each.

Output
Write a single integer to output, denoting how many integers ti are divisible by k.

Example
Input:
7 3
1
51
966369
7
9
999996
11

Output:
4

20. Total Expenses
While purchasing certain items, a discount of 10% is offered if the quantity purchased is more than 1000.
If the quantity and price per item are input, write a program to calculate the total expenses.

Input
The first line contains an integer T, total number of test cases. Then follow T lines, each line contains integers quantity and price.

Output
For each test case, output the total expenses while purchasing items, in a new line.

Constraints
1 ≤ T ≤ 1000
1 ≤ quantity,price ≤ 100000
Example
Input

3 
100 120
10 20
1200 20

Output

12000.000000
200.000000
21600.000000



21. What is the Median?
Median plays an important role in the world of statistics. By definition, it is a value which divides
an array into two equal parts. In this problem you are to determine the current median of some long
integers. Suppose, we have five numbers {1,3,6,2,7}. In this case, 3 is the median as it has exactly two
numbers on its each side. {1,2} and {6,7}. If there are even number of values like {1,3,6,2,7,8}, only
one value cannot split this array into equal two parts, so we consider the average of the middle values
{3,6}. Thus, the median will be (3+6)/2 = 4.5. In this problem, you have to print only the integer
part, not the fractional. As a result, according to this problem, the median will be 4 !
Input
The input file consists of series of integers X (0 ≤ X < 2
31) and total number of integers N is less than
10000. The numbers may have leading or trailing spaces.
Output
For each input print the current value of the median.
Sample Input
1
3
4
60
70
50
2
Sample Output
1
2
3
3
4
27
4



22.Circle in Square
A circle is placed perfectly into a square. The term perfectly placed means that each side of the square is touched by the circle, but the circle doesn't have any overlapping part with the square. See the picture below.



Now you are given the radius of the circle. You have to find the area of the shaded region (blue part). Assume that pi = 2 * acos (0.0) (acos means cos inverse).

Input
Input starts with an integer T (≤ 1000), denoting the number of test cases.

Each case contains a floating point number r (0 < r ≤ 1000) denoting the radius of the circle. And you can assume that r contains at most four digits after the decimal point.

Output
For each case, print the case number and the shaded area rounded to two places after the decimal point.

Sample Input
3
20
30.091
87.0921
Sample Output
Case 1: 343.36
Case 2: 777.26
Case 3: 6511.05
Note
This problem doesn't have a special judge. So, precision problems could occur. Better to add a small value to your result to avoid this. For example, add 10-9 to your result.



23.Is this the easiest problem?
A triangle is a geometric shape with three positive sides. However, any given three sides won’t necessarily form a triangle. The three sides must form a closed region. Triangles are categorized depending
on the values of the sides of a valid triangle. In this problem you are required to determine the type of
a triangle.
Input
The first line of input will contain a positive integer T < 20, where T denotes the number of test cases.
Each of the next T lines will contain three 32 bit signed integer.
Output
For each case of input there will be one line of output. It will be formatted as:
Case x: triangle type.
Where x denotes the case number being processed and triangle type is the type of the triangle.
triangle type will be one of the following, depending on the values of the three sides:
• Invalid - The three sides can not form a triangle
• Equilateral - All three sides of valid triangle are equal
• Isosceles - Exactly two of the sides of a valid triangle are equal.
• Scalene - No pair of sides are equal in a valid triangle.
Sample Input
4
1 2 5
1 1 1
4 4 2
3 4 5
Sample Output
Case 1: Invalid
Case 2: Equilateral
Case 3: Isosceles
Case 4: Scalene




24.Gregorian Calendar
According to Gregorian Calendar, it was Monday on the date 01/01/2001. If any year is input,
Write a program to display what is the day on the 1st January of this year.

Input
The first line contains an integer T, total number of testcases. Then follow T lines, each line contains an integer year.

Output
For each test case, display the day on the 1st January of that year in lowercase letters, in a new line.

Constraints
1 ≤ T ≤ 1000
1900≤ year ≤5000
Example
Input
3 
1994
1991
2014

Output
saturday
tuesday
wednesday
