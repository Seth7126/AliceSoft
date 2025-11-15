// 函数: sub_4f2000
// 地址: 0x4f2000
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* edi = *(arg1 + 4)

if (*(edi + 0x244) != 0)
    return 

int32_t esi_1 = *(*(edi + 0x70) + 0xbc)

if (esi_1 s<= 0)
    return 

int32_t var_10_1 = esi_1
void* eax = sub_4f15e0(*(arg1 + 8))

if (eax == 0)
    return 

int32_t edx_1 = *(eax + 8)
void* const esi_3

if (esi_1 s< edx_1 || *(eax + 4) + edx_1 s<= esi_1)
    esi_3 = nullptr
else
    esi_3 = *(*(eax + 0xc) + ((esi_1 - edx_1) << 2))

if (esi_3 == 0)
    return 

eax = sub_4ee010(edi)

if (eax == 0)
    return 

sub_504260(esi_3 + 0x84, *(*(arg1 + 4) + 0x40))
sub_504200(eax + 0x84, *(*(arg1 + 4) + 0x40))
*(*(arg1 + 0xc) + 0xbc) = *(eax + 0x40)
