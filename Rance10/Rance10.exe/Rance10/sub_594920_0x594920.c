// 函数: sub_594920
// 地址: 0x594920
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == arg2)
    return 

for (int128_t* i = &arg1[6]; i != arg2; i += 0x18)
    int128_t j_1 = *i
    int128_t* i_1 = i
    int64_t xmm2_1 = i[1].q
    int32_t j = j_1
    
    if (j s>= *arg1)
        char* i_2 = i - 0x18
        
        if (j s< *(i - 0x18))
            do
                *i_1 = *i_2
                i_1[1].q = *(i_2 + 0x10)
                i_1 = i_2
                i_2 -= 0x18
            while (j s< *i_2)
        
        *i_1 = j_1
        i_1[1].q = xmm2_1
    else
        sub_6feca0(&arg1[6], arg1, i - arg1)
        *arg1 = j_1
        *(arg1 + 0x10) = xmm2_1
