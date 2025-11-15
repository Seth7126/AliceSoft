// 函数: sub_51a080
// 地址: 0x51a080
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_6ca100(arg2, (*(arg1 + 8) - *(arg1 + 4)) s>> 2)
void* result = *(arg1 + 8)
int32_t* esi = *(arg1 + 4)
int32_t edi_1 = 0
uint32_t ebx_3 = (result - esi + 3) u>> 2

if (esi u> result)
    ebx_3 = 0

if (ebx_3 != 0)
    do
        sub_6ca100(arg2, *esi)
        edi_1 += 1
        esi = &esi[1]
    while (edi_1 != ebx_3)

result.b = 1
return result
