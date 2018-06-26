x, y, sum = gets.to_i, gets.to_i, 0

if x > y
    x, y = y, x
end

for i in x..y do
    i % 13 != 0 ? sum += i : 0
end

puts sum