// 函数: sub_4abd50
// 地址: 0x4abd50
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)

if (&esi[4] u> *(arg2 + 8))
    return 0

uint32_t eax_3 = zx.d(*esi)
uint32_t edx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8
*(arg2 + 4) = &esi[4]
uint32_t ecx_1 = sub_4ac230(arg1 + 4, edx_6 | eax_3)
int32_t* esi_1 = *(arg1 + 4)
int32_t edi_2 = *(arg1 + 8)

if (esi_1 == edi_2)
    return 1

while (true)
    void* var_10_2 = arg2
    char eax
    eax, ecx_1 = sub_4b0550(esi_1, ecx_1)
    
    if (eax == 0)
        return 0
    
    esi_1 = &esi_1[4]
    
    if (esi_1 == edi_2)
        return 1
