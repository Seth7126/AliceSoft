// 函数: sub_60b420
// 地址: 0x60b420
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = *(arg2 + 4)

if (&esi[4] u> *(arg2 + 8))
    return 0

uint32_t eax_3 = zx.d(*esi)
uint32_t edx_6 = ((zx.d(esi[3]) << 8 | zx.d(esi[2])) << 8 | zx.d(esi[1])) << 8
*(arg2 + 4) = &esi[4]
sub_416ab0(arg1 + 0x88, edx_6 | eax_3)
int32_t* esi_1 = *(arg1 + 0x88)
int32_t edi_2 = *(arg1 + 0x8c)

if (esi_1 == edi_2)
    return 1

while (true)
    if (sub_61ed80(arg2, esi_1) == 0)
        return 0
    
    esi_1 = &esi_1[6]
    
    if (esi_1 == edi_2)
        return 1
