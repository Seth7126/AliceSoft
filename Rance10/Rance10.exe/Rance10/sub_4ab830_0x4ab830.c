// 函数: sub_4ab830
// 地址: 0x4ab830
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

for (int32_t* i = *(arg1 + 4); i != *(arg1 + 8); i = &i[4])
    for (int32_t* j = *i; j != i[1]; j = &j[3])
        int32_t eax_1 = j[1]
        int32_t* ebx_1 = *j
        
        if (eax_1 != ebx_1)
            while (*ebx_1 != arg2)
                ebx_1 = &ebx_1[1]
                
                if (ebx_1 == eax_1)
                    break
            
            if (eax_1 != ebx_1)
                return sub_4b02e0(i, arg2)

return 0
