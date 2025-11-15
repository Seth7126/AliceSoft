// 函数: sub_596930
// 地址: 0x596930
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* ebp = arg1
void* edi = ebp + 0x10
void* var_44 = ebp

if ((**(ebp + 0x10))() == (arg2[1] - *arg2) s>> 6
        && (**edi)() == (*(ebp + 0x244) - *(ebp + 0x240)) s>> 6)
    int32_t esi_6 = 0
    int32_t eax_6 = (**edi)()
    
    if (eax_6 s<= 0)
        return eax_6
    
    int32_t ebx = 0
    int32_t eax_15
    
    do
        int128_t* eax_9 = *arg2 + ebx
        float var_40[0x4][0x4]
        float (* eax_10)[0x4] = sub_6cb020(eax_9, *(ebp + 0x240) + ebx, &var_40, eax_9)
        
        if (esi_6 s>= 0 && esi_6 s< (**edi)())
            float (* eax_13)[0x4] = *(edi + 4) + ebx
            *eax_13 = *eax_10
            eax_13[1] = eax_10[1]
            eax_13[2] = eax_10[2]
            eax_13[3] = eax_10[3]
        
        esi_6 += 1
        ebx += 0x40
        eax_15 = (**edi)()
        ebp = var_44
    while (esi_6 s< eax_15)
    
    return eax_15

return sub_58ceb0(edi)
