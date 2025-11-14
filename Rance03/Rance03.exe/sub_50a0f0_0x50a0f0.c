// 函数: sub_50a0f0
// 地址: 0x50a0f0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x40)

if (edx s>= 0 && edx s< (*(arg1 + 0xc) - *(arg1 + 8)) s>> 2)
    void* eax_6 = *(*(*(arg1 + 8) + (edx << 2)) + 4)
    
    if (eax_6 != 0)
        return *(eax_6 + 8)

return 0xffffffff
