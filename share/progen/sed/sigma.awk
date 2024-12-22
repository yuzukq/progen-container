function variance(array,size,average)
{
    for (i in array) {
        dif = array[i] - average;
        sum += dif * dif;
    }

    vari = sum / size;
    return vari;
}

{
    eng[NR] =$2;
    print $2;
}

END {

    if (NR == 0) {
        exit;
    }

    for (i in eng) {
        sum_eng += eng[i];
    }

    ave_eng = sum_eng / NR;
    var_eng = variance(eng,NR,ave_eng);
    sdv_eng = sqrt(var_eng);

    print "英語平均点:", ave_eng, "分散:", var_eng, "標準偏差:", sdv_eng;
}
