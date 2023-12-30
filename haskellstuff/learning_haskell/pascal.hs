upsum :: [Int] -> [Int]
upsum [x] = [x]
upsum [] = []
upsum (a:b:as) = (a+b):(upsum (b:as))

pascal :: Int -> [Int]
pascal 0 = [1]
pascal n = 1:upsum(pascal (n-1))

--pascal 6 --generates list [1,6,15,20,15,6,1]
--pascal 15 --generates list [1,15,105,455,1365,3003,5005,6435,6435,5005,3003,1365,455,105,15,1]
--pascal 0 --generates list [1]
