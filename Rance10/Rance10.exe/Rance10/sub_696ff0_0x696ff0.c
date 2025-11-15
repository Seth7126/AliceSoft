// 函数: sub_696ff0
// 地址: 0x696ff0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax_2

if (arg4 u> 5 || arg5 u> 5)
    eax_2 = 5
label_69701d:
    int32_t eax_3
    int32_t* edi_1
    
    switch (eax_2)
        case 0, 1, 2, 3
            edi_1 = arg2
            int32_t esi_1 = *edi_1
            eax_3 = esi_1
            
            if (eax_3 == *arg1)
                *arg1 = arg3
            else
                eax_3 = *arg1
            
            if (eax_3 == esi_1)
                return 1
        case 4, 5
            edi_1 = arg2
            int32_t esi_2 = *edi_1
            eax_3 = esi_2
            
            if (eax_3 == *arg1)
                *arg1 = arg3
            else
                eax_3 = *arg1
            
            if (eax_3 == esi_2)
                return 1
    
    *edi_1 = eax_3
else
    eax_2 = *(((arg5 + arg4 * 6) << 2) + &data_799d68)
    
    if (eax_2 u<= 5)
        goto label_69701d
return 0
