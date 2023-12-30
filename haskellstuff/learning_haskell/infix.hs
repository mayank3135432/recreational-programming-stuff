f :: Int -> Int -> Int
f x y = x+y

fib :: Int -> Int
fib 0 = 0
fib 1 = 1
fib n = fib(n-1) + fib(n-2)

--arr :: [Int]
--arr[n] = n
as = [0..]