// 函数: sub_40ec10
// 地址: 0x40ec10
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

char* eax

if (arg2 != 0)
    char* edx = (*(*arg2 + 0x18))()
    
    if (edx != 0)
        if (*edx == 0)
            sub_402110(arg1, edx, nullptr)
            int32_t* eax_2
            eax_2.b = 1
            return eax_2
        
        char* ecx_2 = edx
        
        do
            eax.b = *ecx_2
            ecx_2 = &ecx_2[1]
        while (eax.b != 0)
        
        sub_402110(arg1, edx, ecx_2 - &ecx_2[1])
        int32_t* eax_3
        eax_3.b = 1
        return eax_3

eax.b = 0
return eax
