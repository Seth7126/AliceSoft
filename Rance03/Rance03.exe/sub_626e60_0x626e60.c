// 函数: sub_626e60
// 地址: 0x626e60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

uint32_t eax = 0xf3ffc07f
int32_t i = 0
int16_t* edx = arg1 + 0x94

do
    if ((eax.b & 1) != 0 && *edx != 0)
        return 0
    
    i += 1
    eax u>>= 1
    edx = &edx[2]
while (i s<= 0x1f)

if (*(arg1 + 0xb8) == 0 && *(arg1 + 0xbc) == 0 && *(arg1 + 0xc8) == 0)
    int32_t ecx = 0x20
    void* eax_1 = arg1 + 0x114
    
    while (true)
        if (*eax_1 != 0)
            return 1
        
        ecx += 1
        eax_1 += 4
        
        if (ecx s>= 0x100)
            return 0

return 1
