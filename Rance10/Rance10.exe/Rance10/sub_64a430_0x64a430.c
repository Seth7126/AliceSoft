// 函数: sub_64a430
// 地址: 0x64a430
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*(arg1 + 0x18) != 0)
    void* edx_1 = *(arg1 + 4)
    
    if (edx_1 != 0)
        char eax_1 = sub_563b40(arg1 + 0x1c, edx_1 + 4)
        
        if (eax_1 == 0)
            return eax_1

int32_t* ecx_1 = *(arg1 + 0x14)
*(arg1 + 0x18) = 0

if (ecx_1 != 0)
    (**ecx_1)(1)
    *(arg1 + 0x14) = 0

int32_t* ecx_2 = *(arg1 + 4)

if (ecx_2 != 0)
    (**ecx_2)(1)
    *(arg1 + 4) = 0

*(arg1 + 0xc) = *(arg1 + 8)
int32_t eax_4
eax_4.b = 1
return eax_4
