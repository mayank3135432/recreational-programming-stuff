fact :: Int -> Int
fact n
    | n<=1 =1
    | otherwise =n*fact(n-1)

main :: IO()
main=do
    print(fact(-1))

    