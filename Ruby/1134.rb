alcool, gasolina, diesel, entrada = 0, 0, 0, 0

while entrada != 4
    entrada = gets.to_i

    if entrada == 1
        alcool += 1
    elsif entrada == 2
        gasolina += 1
    elsif entrada == 3
        diesel += 1
    end
end

puts "MUITO OBRIGADO"
puts "Alcool: %d" % alcool
puts "Gasolina: %d" % gasolina
puts "Diesel: %d" % diesel