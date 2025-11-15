// 函数: sub_4ec0c0
// 地址: 0x4ec0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x20c) =
    &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
*(arg1 + 0x1f4) =
    &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
*(arg1 + 0x1dc) =
    &partsengine::CGUIPlainCG::`vftable'{for `partsengine::IAddConstructionPartsProcess'}
sub_4e88f0(arg1 + 0xb0)
sub_4c2800(arg1 + 0x40)
*(arg1 + 0xc) = &partsengine::CEventSubject::`vftable'
int32_t result = *(arg1 + 0x10)
*(arg1 + 0x14) = result
void* ecx_2 = *(arg1 + 0x10)

if (ecx_2 != 0)
    result = sub_403160(ecx_2, (*(arg1 + 0x18) - ecx_2) s>> 2, 4)
    *(arg1 + 0x10) = 0
    *(arg1 + 0x14) = 0
    *(arg1 + 0x18) = 0

return result
