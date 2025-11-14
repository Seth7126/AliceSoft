// 函数: sub_553640
// 地址: 0x553640
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (sub_5537a0(arg1, arg2) != 0)
    bool eax = sub_5539d0(arg1, arg2)
    
    if (eax != 0)
        if (*(arg1 + 0x134) != 0)
            void* eax_1 = *(arg1 + 0x14)
            int32_t eax_2
            int32_t edx_1
            edx_1:eax_2 = muls.dp.d(0x2aaaaaab, *(eax_1 + 0x68) - *(eax_1 + 0x64))
            int32_t edx_2 = edx_1 s>> 2
            eax = sub_52ef10(arg1 + 0x138, (edx_2 u>> 0x1f) + edx_2, arg2)
        
        if (*(arg1 + 0x134) == 0 || eax != 0)
            *(arg1 + 0x10) = 1
            return true

return false
