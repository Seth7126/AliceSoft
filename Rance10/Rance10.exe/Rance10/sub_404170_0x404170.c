// 函数: sub_404170
// 地址: 0x404170
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_4_1 = arg1
sub_6ca100(arg2, (*(arg1 + 0x14) - *(arg1 + 0x10)) s>> 2)
int32_t* esi = *(arg1 + 0x10)
int32_t eax_3 = *(arg1 + 0x14)
int32_t edi = 0
uint32_t ebp_4 = (eax_3 - esi + 3) u>> 2

if (esi u> eax_3)
    ebp_4 = 0

if (ebp_4 != 0)
    do
        sub_6ca100(arg2, *esi)
        edi += 1
        esi = &esi[1]
    while (edi != ebp_4)

sub_6ca100(arg2, (*(arg1 + 0x20) - *(arg1 + 0x1c)) s>> 2)
void* result = *(arg1 + 0x20)
int32_t* esi_1 = *(arg1 + 0x1c)
int32_t edi_2 = 0
uint32_t ebp_8 = (result - esi_1 + 3) u>> 2

if (esi_1 u> result)
    ebp_8 = 0

if (ebp_8 != 0)
    do
        sub_6ca100(arg2, *esi_1)
        edi_2 += 1
        esi_1 = &esi_1[1]
    while (edi_2 != ebp_8)

result.b = 1
return result
