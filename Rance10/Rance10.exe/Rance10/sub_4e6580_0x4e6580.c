// 函数: sub_4e6580
// 地址: 0x4e6580
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

sub_4e2c00(arg1 + 0xe4)
sub_4c2800(arg1 + 0x78)
*(arg1 + 0x40) = &partsengine::CEventSubject::`vftable'
*(arg1 + 0x48) = *(arg1 + 0x44)
void* ecx_2 = *(arg1 + 0x44)

if (ecx_2 != 0)
    sub_403160(ecx_2, (*(arg1 + 0x4c) - ecx_2) s>> 2, 4)
    *(arg1 + 0x44) = 0
    *(arg1 + 0x48) = 0
    *(arg1 + 0x4c) = 0

*(arg1 + 0xc) = &partsengine::CEventSubject::`vftable'
int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
void* ecx_3 = *(arg1 + 0x10)

if (ecx_3 != 0)
    result = sub_403160(ecx_3, (*(arg1 + 0x18) - ecx_3) s>> 2, 4)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0

return result
