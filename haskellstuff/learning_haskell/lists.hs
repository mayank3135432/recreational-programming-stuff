import Data.List

{- LISTS ARE HOMOGENUS -}

asc :: Int -> Int -> [Int]
asc n m--creates list from n to m inclusive
    | n>m =[]
    | n==m =n:[]
    | n<m =n:asc (n+1) m

sumint :: [Int] -> Int;  --sum of all elements in list
sumint [] = 0
sumint (x:sA) = x + sumint sA

{-
Functions on Lists : head, tail, init, null, and, or, ...
    head [1,2,4,2] is 1;
    tail [1,2,4,2] is [2,4,2]
    lenght [2,6,-2,1] is 4
    init [1,2,4,2] gives back [1,2,4]
    null :: [a] -> Bool;
    null [] is True
    null [3,2,6,1,4] is False

    and :: [Bool] -> Bool
    or :: [Bool] -> Bool

-}


{-
List Comprehension
-}
arr=[2,4,1]
brr=[2*x | x <- arr]

dictuple = [(x,y) | x <- [1,2,3],y <- ['a','b']] --returns [(1,'a'),(1,'b'),(2,'a'),(2,'b'),(3,'a'),(3,'b')]


{-
LIST PATTERNS 
    x:xs or []
-}
summa :: [Int] -> Int;
summa[] = 0
summa (x:xs) = (x + summa xs)

evens :: [Int] -> [Int]
evens [] = []
evens (x:xs) --returns list with only even numbers from input list
    |   mod x 2 == 0  = (x:evens xs)
    |   otherwise  = evens xs

{-
TUPLES
    (1,2) :: (Int,Int)
-}

apply :: (Int -> Int) -> [Int] -> [Int]
apply func [] = []
apply func (x:xs) = func(x):(apply func xs)

--fact n = if n==0 then 1 else n*fact(n-1);


filfunc :: [Int] -> [Int]
filfunc [] = []
filfunc [a] = [a]
filfunc (a0:a1:as) = a0:filfunc as
{- 
main :: IO()
main=do
    --print(dictuple)
    --print(apply (\x -> x*x) [3,2,1,5])
    print(filfunc [0,1,2,3,4,5,6,7,8,0]) -}