Monte um programa que mostre um vetor de 10 elementos na
ordem inversa a sua criação: considerando o vetor [1,2,3,4,5,6,7,8,9,10] deverá
ser mostrado 10 - 9 - 8 - 7 - 6 - 5 - 4 - 3 - 2 - 1;


<?php

$vetor = [10, 9, 6, 7, 8, 5, 4, 3, 2, 1];

$cont = count($vetor);

echo "\n";
for ($i = 0; $i < $cont; $i++) {
    echo $vetor[$i];

    if ($i < $cont - 1) {
        echo ", ";
    }
}
for ($i = 0; $i < $cont - 1; $i++) {
    for ($j = 0; $j < $cont - 1 - $i; $j++) {
        if ($vetor[$j] > $vetor[$j + 1]) {
            $caixa = $vetor[$j];
            $vetor[$j] = $vetor[$j + 1];
            $vetor[$j + 1] = $caixa;
        }
    }
}
echo "\n";
for ($i = 0; $i < $cont; $i++) {
    echo  $vetor[$i];

    if ($i < $cont - 1) {
        echo ", ";
    }
}
