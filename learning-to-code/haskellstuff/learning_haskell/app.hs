hello="hello"

doubleit :: Double -> Double
doubleit x=x*2

sq :: Double -> Double
sq x=x*x;

in_range :: Int -> Int -> Int -> Bool
in_range min max x = (x>=min)&&(x<=max)

fact :: Int -> Int;
fact n = if n==0 then 1 else n*fact(n-1);



fac :: Int -> Int;
fac n = aux n 1 --Using accumulators
    where
        aux n acc
            | n<=1 =acc --return accumulated acc 
            | otherwise = aux (n-1) (n*acc) --tail recursive

--arr = asc 1 10


{- LISTS ARE HOMOGENUS -}

asc :: Int -> Int -> [Int]
asc n m--creates list from n to m inclusive
    | n>m =[]
    | n==m =n:[]
    | n<m =n:asc (n+1) m

sumint :: [Int] -> Int;  --sum of all elements in list
sumint [] = 0
sumint (x:sA) = x + sumint sA




sumof :: Num a => [a] -> a
sumof [] = 0
sumof (x:sA) = x + sumof sA

abso :: Double -> Double;
abso x
    | x==0 = 0
    | x>0 = x
    | x<0 = -x
append :: [Int] -> Int -> [Int]
append [] a = [a]
append (x:sA) a = x:(append sA a)

diff :: (Double -> Double) -> (Double -> Double)

diff f = g
    where g x = (f(x+0.0000001)-f(x))/0.0000001


{- rev :: [Int] -> [Int]
rev [] = []
rev (a:arr) = (rev arr):a -}


main :: IO()
main=do
    --print(in_range 3 9 6);
    let arr=[3,1,6,2]
    print(diff sq 3)