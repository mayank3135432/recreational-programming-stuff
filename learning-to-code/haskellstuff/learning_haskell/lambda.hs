--sF :: (a -> a) -> (a -> a)
--sF f = (\x -> ((f x)/2))


foo x = x*x


main :: IO()
main=do
    print((\x -> x*x) 3)