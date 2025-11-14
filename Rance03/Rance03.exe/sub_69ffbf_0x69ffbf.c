// 函数: sub_69ffbf
// 地址: 0x69ffbf
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t eax = *arg2

if (arg1 == eax)
    int32_t ecx_1 = *arg3
    
    if (ecx_1 != arg4)
        int32_t eax_3 = sub_69e7fc(ecx_1, eax, 2)
        
        if (eax_3 == 0)
            return 0
        
        *arg3 = eax_3
    else
        int32_t eax_1 = sub_69e723(eax, 2)
        *arg3 = eax_1
        
        if (eax_1 == 0)
            return 0
        
        *arg5 = 1
        sub_69d850(*arg3, arg4, *arg2)
    
    *arg2 <<= 1

return 1
