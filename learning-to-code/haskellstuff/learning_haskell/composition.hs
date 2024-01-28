import Data.List
{-
(.) :: (b -> c) -> (a -> b) -> a -> c
(f . g) == (\x -> f (g x))
-}
f :: Int -> Int ;
f n = 3*n;

g :: Int -> Int ;
g n = n^2

h = f . g

descSort = reverse . sort -- sorts the list and then reverses it
-- reverse and sort are List library functions

map2D = map . map;-- maps function to every element of 2D list (matrix)

compose :: Int -> (a -> a) -> (a -> a)
compose 0 f = (\x -> x)
compose n f = f . (compose (n-1) f)

altmap2D = compose 2 map

mx1 :: [[Int]]
mx1 = [[2,1,4],[(-1),3,2],[(-4),(-1),6]];

main :: IO()
main = do
    print(f 4) --12
    print(g 4) --16
    print(h 4) --48
    print((f.g) 4) --48
    print(reverse [2,1,4,(-2),0])
    print(sort [2,1,4,-2,0])
    print(descSort [2,1,4,(-2),0])
    print("")
    print(mx1)
    print(map2D (\x -> x^2) mx1)

