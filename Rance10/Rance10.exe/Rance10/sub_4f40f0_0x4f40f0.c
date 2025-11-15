// 函数: sub_4f40f0
// 地址: 0x4f40f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4f1640(arg1 + 4)
int32_t* ecx_1 = *(arg1 + 0x58)

if (ecx_1 != 0)
    (**ecx_1)(1)

*(arg1 + 0x58) = 0
int32_t* esi = *(arg1 + 0x5c)
int32_t edi = 0
uint32_t ebx_3 = (*(arg1 + 0x60) - esi + 3) u>> 2

if (esi u> *(arg1 + 0x60))
    ebx_3 = 0

if (ebx_3 != 0)
    do
        int32_t* ecx_2 = *esi
        
        if (ecx_2 != 0)
            (**ecx_2)(1)
        
        edi += 1
        esi = &esi[1]
    while (edi != ebx_3)

int32_t result = *(arg1 + 0x5c)
*(arg1 + 0x60) = result
*(arg1 + 0x68) = 0
return result
