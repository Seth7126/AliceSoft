// 函数: sub_578720
// 地址: 0x578720
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t i = 0

if (((*(arg1 + 0x28) - *(arg1 + 0x24)) & 0xffffffc0) s> 0)
    int32_t* ecx_2 = *(arg1 + 0x24) + 0x18
    
    do
        if (*ecx_2 == arg2)
            return i
        
        i += 1
        ecx_2 = &ecx_2[0x10]
    while (i s< (*(arg1 + 0x28) - *(arg1 + 0x24)) s>> 6)

return 0xffffffff
