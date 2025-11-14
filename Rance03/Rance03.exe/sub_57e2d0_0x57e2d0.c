// 函数: sub_57e2d0
// 地址: 0x57e2d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* var_4 = arg1
void* ebx = nullptr
var_4 = nullptr
int32_t result = (*(arg1 + 0x44) - *(arg1 + 0x40)) s/ 0x3c

if (result s> 0)
    do
        if (*(*(arg1 + 0x40) + ebx * 0x3c + 0x18) == 0xffffffff)
            int32_t eax_4 = arg2[1]
            int32_t ecx_3
            
            if (&var_4 u< eax_4)
                ecx_3 = *arg2
            
            if (&var_4 u>= eax_4 || ecx_3 u> &var_4)
                if (eax_4 == arg2[2])
                    sub_415950(arg2, 1)
                
                void** eax_7 = arg2[1]
                
                if (eax_7 != 0)
                    *eax_7 = ebx
            else
                if (eax_4 == arg2[2])
                    sub_415950(arg2, 1)
                
                int32_t* ecx_5 = arg2[1]
                
                if (ecx_5 != 0)
                    *ecx_5 = *(*arg2 + ((&var_4 - ecx_3) s>> 2 << 2))
            
            arg2[1] += 4
        
        int32_t ecx_8 = *(arg1 + 0x44) - *(arg1 + 0x40)
        ebx += 1
        var_4 = ebx
        result = ecx_8 s/ 0x3c
    while (ebx s< result)

return result
