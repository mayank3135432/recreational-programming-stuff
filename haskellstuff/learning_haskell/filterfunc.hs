foo :: [Int] -> [Int] --filters out even indices
foo [] = []
foo [a] = []
foo (a0:a1:as) = a1:foo as

fooadd :: [Int] -> Int --adds up odd indices
fooadd [] = 0
fooadd [a] = 0
fooadd (a0:a1:as) = a1 + fooadd as

f :: [Int] -> Int
f [] = 0
f (a:as)
    |mod a 2 ==0 =f as
    |mod a 2 ==1 =a+f as
main :: IO()
main=do
    --print(dictuple)
    --print(apply (\x -> x*x) [3,2,1,5])
    print(foo [3,2,4,6,5,7,8,0,1])
    print(fooadd [3,2,4,6,5,7,8,0,1])
    print(f [3,2,4,6,5,7,8,0,1])

