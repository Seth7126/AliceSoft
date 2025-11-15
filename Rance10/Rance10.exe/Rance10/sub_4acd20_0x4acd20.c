// 函数: sub_4acd20
// 地址: 0x4acd20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0xa0) = &partsengine::CGUIFormGroupModel::`vftable'
int32_t* ecx = *(arg1 + 0xa4)

if (ecx != 0)
    void* var_c_1 = arg1
    int32_t* var_10_1 = ecx
    sub_4ac590(ecx, *(arg1 + 0xa8))
    void* ecx_1 = *(arg1 + 0xa4)
    sub_403160(ecx_1, (*(arg1 + 0xac) - ecx_1) s>> 4, 0x10)
    *(arg1 + 0xa4) = 0
    *(arg1 + 0xa8) = 0
    *(arg1 + 0xac) = 0

sub_4c2800(arg1 + 0x40)
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
