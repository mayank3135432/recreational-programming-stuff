--summa as = foldr (+) 0 as
--andy as = foldr (&&) True as
count :: Int -> [Int] -> Int
count e = foldr (\x acc -> if x==e then acc+1 else acc) 0

allare :: Int -> [Int] -> Bool
allare e = foldr (\x acc -> (x==e)&&acc) True

-- reverses given list
rev :: [a] -> [a]
rev = foldl (\acc x -> x:acc) []

func :: t -> [[t]] -> [[t]]
--func x [[]] = [[x]]
func x as = [x] : map ((:) x) as

prefixes :: [a] -> [[a]]
prefixes = foldr func [[]]

foo :: [[a]] -> [[a]]
foo [[]] = [[]]
foo (x:as) = as

--map ((\x -> 2*x).snd) arr
--lfunc :: [(Float, Float)] -> Int -> Float -> Float
--lfunc as j x = foldr (*) 1 (map (\(xm,ym) ->( if ((fst (as!! j)) == xm) then 1 else (x-xm)/((fst (as!! j)) - xm)) ) as)
lfunc :: [(Float, Float)] -> Float -> Float -> Float
lfunc as joo x = foldr (*) 1 (map (\(xm,ym) ->( if joo == xm then 1 else (x-xm)/(joo - xm))) as)
