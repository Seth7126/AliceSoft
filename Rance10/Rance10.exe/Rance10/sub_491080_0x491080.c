// 函数: sub_491080
// 地址: 0x491080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (void* i = arg1; i != arg2; i += 0x40)
    void* edi_1 = *data_7fd570
    int32_t* eax_2 = sub_491940(edi_1, *(edi_1 + 4), i)
    int32_t edx_1 = data_7fd574
    
    if (0x38e38e2 - edx_1 u< 1)
        sub_6d0927("list<T> too long")
        noreturn
    
    data_7fd574 = edx_1 + 1
    *(edi_1 + 4) = eax_2
    *eax_2[1] = eax_2
    int32_t* eax_5 = *data_7fd570
    void* var_8
    sub_491130(&data_7fd56c, &var_8, &eax_5[2], eax_5)
