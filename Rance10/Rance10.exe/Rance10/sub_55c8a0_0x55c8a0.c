// 函数: sub_55c8a0
// 地址: 0x55c8a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi = 0
int32_t eax = *(arg1 + 0xa0)
int32_t* esi = *(arg1 + 0x9c)
uint32_t ebx_3 = (eax - esi + 3) u>> 2

if (esi u> eax)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx = *esi
        
        if (ecx != 0)
            (**ecx)(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = *(arg1 + 0x9c)
*(arg1 + 0xa0) = result
return result
