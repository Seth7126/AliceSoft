// 函数: sub_55b120
// 地址: 0x55b120
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t edx = *(arg1 + 0x20)

if (edx != 0xffffffff)
    int32_t ecx = *(arg1 + 0x24)
    
    if (ecx != 0xffffffff)
        *arg2 = edx
        *arg3 = ecx
        int32_t* eax_1
        eax_1.b = 1
        return eax_1

*arg2 = 0xffffffff
*arg3 = 0xffffffff
int32_t* eax_3
eax_3.b = 0
return eax_3
