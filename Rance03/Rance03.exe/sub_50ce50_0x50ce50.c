// 函数: sub_50ce50
// 地址: 0x50ce50
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edi = 0
int32_t edx_2 = (*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2
int32_t var_4 = edx_2

if (edx_2 s<= 0)
    return 

int32_t ebx
int32_t var_14_1 = ebx

do
    int32_t ebx_3
    
    if (edi s< 0 || edi s>= (*(arg1 + 0x2cc) - *(arg1 + 0x2c8)) s>> 2)
        ebx_3 = 0
    else
        void* ebx_2 = *(*(*(arg1 + 0x2c8) + (edi << 2)) + 4)
        
        if (ebx_2 != 0)
            ebx_3 = *(ebx_2 + 8)
        else
            ebx_3 = 0xffffffff
    
    int32_t eax = arg2[1]
    int32_t var_8 = ebx_3
    int32_t ecx
    
    if (&var_8 u< eax)
        ecx = *arg2
        edx_2 = var_4
    
    if (&var_8 u>= eax || ecx u> &var_8)
        if (eax == arg2[2])
            sub_415950(arg2, 1)
            edx_2 = var_4
        
        eax = arg2[1]
        
        if (eax != 0)
            *eax = ebx_3
    else
        if (eax == arg2[2])
            sub_415950(arg2, 1)
            edx_2 = var_4
        
        int32_t* ecx_2 = arg2[1]
        
        if (ecx_2 != 0)
            *ecx_2 = *(*arg2 + ((&var_8 - ecx) s>> 2 << 2))
    
    arg2[1] += 4
    edi += 1
while (edi s< edx_2)
