// 函数: sub_6239b0
// 地址: 0x6239b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg4 != 0)
    char* eax
    eax.b = *arg4
    
    if (eax.b == (*"1.2.7")[0])
        if (arg3 == 0)
            return arg3 - 2
        
        bool cond:0 = *(arg3 + 0x20) != 0
        *(arg3 + 0x18) = 0
        
        if (not(cond:0))
            *(arg3 + 0x20) = sub_627020
            *(arg3 + 0x28) = 0
        
        if (*(arg3 + 0x24) == 0)
            *(arg3 + 0x24) = sub_627040
        
        void* eax_3 = (*(arg3 + 0x20))(*(arg3 + 0x28), 1, 0x1bcc)
        
        if (eax_3 == 0)
            return eax_3 - 4
        
        *(arg3 + 0x1c) = eax_3
        *(eax_3 + 0x34) = 0
        int32_t result = sub_623940(arg3)
        
        if (result != 0)
            (*(arg3 + 0x24))(*(arg3 + 0x28), eax_3)
            *(arg3 + 0x1c) = 0
        
        return result

return 0xfffffffa
