// 函数: sub_6389d0
// 地址: 0x6389d0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

void* edi = *(arg1 + 0x68)
void* eax = *(arg1 + 4)

if (edi != 0 && eax != 0)
    void* edx_1 = *(eax + 0x1c)
    
    if (edx_1 != 0)
        char eax_2 = (*(edx_1 + 0xe48)).b
        int32_t edx_2 = *(edx_1 + 4)
        *(arg1 + 0x18) = 0xffffffff
        *(arg1 + 0x38) = 0xffffffff
        *(arg1 + 0x3c) = 0xffffffff
        int32_t edx_3 = edx_2 s>> (eax_2 + 1)
        *(arg1 + 0x30) = edx_3
        *(arg1 + 0x14) = edx_3 s>> eax_2
        *(arg1 + 0x40) = 0xffffffff
        *(arg1 + 0x44) = 0xffffffff
        *(arg1 + 0x20) = 0
        *(edi + 0x80) = 0xffffffff
        *(edi + 0x84) = 0xffffffff
        return 0

return 0xffffffff
