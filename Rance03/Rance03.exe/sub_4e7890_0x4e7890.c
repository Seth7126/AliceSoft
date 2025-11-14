// 函数: sub_4e7890
// 地址: 0x4e7890
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
int32_t i = 0

if (*(arg1 + 4) s<= 0)
    return 

do
    if ((*(arg1 + 0xc))[i] != 0)
        void** eax = arg2[1]
        void* ebx_2 = *(arg1 + 8) + i
        var_4 = ebx_2
        int32_t ecx
        
        if (&var_4 u< eax)
            ecx = *arg2
        
        if (&var_4 u>= eax || ecx u> &var_4)
            if (eax == arg2[2])
                sub_415950(arg2, 1)
            
            eax = arg2[1]
            
            if (eax != 0)
                *eax = ebx_2
        else
            if (eax == arg2[2])
                sub_415950(arg2, 1)
            
            void*** ecx_2 = arg2[1]
            
            if (ecx_2 != 0)
                *ecx_2 = *(*arg2 + ((&var_4 - ecx) s>> 2 << 2))
        
        arg2[1] += 4
    
    i += 1
while (i s< *(arg1 + 4))
