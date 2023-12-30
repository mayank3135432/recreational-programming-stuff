--every function has only one input and one output
{-
To simulate multivariable functions ,we can use either
1) Vectors
2) Currying
Haskell supports Currying
f :: a -> b -> c -> d is equivalent to f :: a -> (b -> (c-> d))
add x y =x+y
add x = (\y -> x+y)
add = (\x -> (\y -> x+y))

The benifits of currying is that it lets partial application to functions
-}
add :: Int -> Int -> Int
add = (\x -> (\y -> x+y))

add 1 --returns function that takes input and adds 1 to it
foo = add 1
foo 3 --returns 4

apply :: (a -> b) -> [a] -> [b]
--apply is a function that applies a function to an array
apply f [] = []
apply f a:arr = (f a) + apply f arr
--The apply functions already exists in the standard library with ttthe naame map
  