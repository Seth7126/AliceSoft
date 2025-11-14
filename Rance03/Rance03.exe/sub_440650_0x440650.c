// 函数: sub_440650
// 地址: 0x440650
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0

if (arg2[4] s> 0)
    do
        int32_t* eax_1
        
        if (arg2[5] u< 0x10)
            eax_1 = arg2
        else
            eax_1 = *arg2
        
        int32_t edi_1 = sx.d(*(eax_1 + i))
        int32_t eax_2 = arg1[1]
        int32_t var_8 = edi_1
        int32_t ecx_1
        
        if (&var_8 u< eax_2)
            ecx_1 = *arg1
        
        if (&var_8 u>= eax_2 || ecx_1 u> &var_8)
            if (eax_2 == arg1[2])
                sub_415950(arg1, 1)
            
            int32_t* eax_5 = arg1[1]
            
            if (eax_5 != 0)
                *eax_5 = edi_1
        else
            if (eax_2 == arg1[2])
                sub_415950(arg1, 1)
            
            int32_t* ecx_3 = arg1[1]
            
            if (ecx_3 != 0)
                *ecx_3 = *(*arg1 + ((&var_8 - ecx_1) s>> 2 << 2))
        
        arg1[1] += 4
        i += 1
    while (i s< arg2[4])

int32_t eax_6 = arg1[1]
int32_t var_4 = 0
int32_t ecx_5

if (&var_4 u< eax_6)
    ecx_5 = *arg1

if (&var_4 u>= eax_6 || ecx_5 u> &var_4)
    if (eax_6 == arg1[2])
        sub_415950(arg1, 1)
    
    eax_6 = arg1[1]
    
    if (eax_6 != 0)
        *eax_6 = 0
else
    if (eax_6 == arg1[2])
        eax_6 = sub_415950(arg1, 1)
    
    int32_t* ecx_7 = arg1[1]
    
    if (ecx_7 != 0)
        int32_t eax_8 = *(*arg1 + ((&var_4 - ecx_5) s>> 2 << 2))
        *ecx_7 = eax_8
        arg1[1] += 4
        return eax_8

arg1[1] += 4
return eax_6
