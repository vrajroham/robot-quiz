# robot-quiz
A robot is programmed to move forward F meters and backwards again, say B meters, in a straight line. The Robot covers 1 meter in T units of time. On Robot's path there is a ditch at a distance FD from initial position in forward direction as well as a ditch at a distance BD from initial position in backward direction. This forward and backward movement is performed repeatedly by the Robot.
Your task is to calculate amount of time taken, before the Robot falls in either ditch, if at all it falls in a ditch.

#Input Format:

First line contains total number of test cases, denoted by N
Next N lines, contain a tuple containing 5 values delimited by space
F B T FD BD, where

    F denotes forward displacement in meters
    B denotes backward displacement in meters
    T denotes time taken to cover 1 meter
    FD denotes distance from Robot's starting position and the ditch in forward direction
    BD denotes distance from Robot's starting position and the ditch in backward direction


Output Format:

For each test case print time taken by the Robot to fall in the ditch and also state which ditch he falls into. Print F for forward and B for backward. Both the outputs must be delimited by whitespace

OR

Print No Ditch if the Robot does not fall in either ditch
-----------------------------------------------------------------------------------------
Constraints:

First move will always be in forward direction

    1 <= N <= 100
    forward displacement > 0
    backward displacement > 0
    time > 0
    distance of ditch in forward direction (FD) > 0
    distance of ditch in backward direction (BD) > 0
    All input values must be positive integers only
---------------------------------------
#Input
3<br>
9 4 3 13 10 <br>
9 7 1 11 13<br>
4 4 3 8 12<br>

#Output	
63 F<br>
25 F<br>
No Ditch<br>
-------------------------------------
#Input
5<br>
8 4 7 11 22<br>
4 5 4 25 6<br>
4 9 3 6 29<br>
7 10 6 24 12<br>
10 10 1 9 7<br>
	
#Output	
133 F<br>
216 B<br>
231 B<br>
408 B<br>
9 F<br>
--------------------------------------------
