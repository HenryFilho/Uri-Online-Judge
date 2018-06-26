n = 0
while true
    if n < 2
        entrada = gets.to_f
        if entrada >= 0 and entrada <= 10
            n += 1
            n == 1 ? nota1 = entrada : nota2 = entrada
        else
            puts "nota invalida"
        end
    elsif n == 2
        media = ((nota1 + nota2) / 2)
        puts "media = %.2f" % media
        n += 1
    else
        puts "novo calculo (1-sim 2-nao)"
        entrada = gets.to_i
        if entrada == 1
            n = 0
        elsif entrada == 2
            break
        end
    end
    
end