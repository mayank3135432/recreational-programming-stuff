import Data.List
{- M1=10
M2=10
C1=8
C2=10
C3=8
E1=6
G1=6
R1=8 -}
sumint :: [Int] -> Int;  --sum of all elements in list
sumint [] = 0
sumint (x:sA) = x + sumint sA

arr=[10,10,8,10,8,6,6,8]
cred=[3,3,4,3,3,3,3,1]

