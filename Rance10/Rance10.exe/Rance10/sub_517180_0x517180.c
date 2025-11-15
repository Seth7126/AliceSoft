// 函数: sub_517180
// 地址: 0x517180
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

*(arg1 + 0x218) = &partsengine::CPartsDoubleClickWorker::`vftable'
*(arg1 + 0x1e4) = &partsengine::CEventSubject::`vftable'
*(arg1 + 0x1ec) = *(arg1 + 0x1e8)
void* ecx = *(arg1 + 0x1e8)

if (ecx != 0)
    sub_403160(ecx, (*(arg1 + 0x1f0) - ecx) s>> 2, 4)
    *(arg1 + 0x1e8) = 0
    *(arg1 + 0x1ec) = 0
    *(arg1 + 0x1f0) = 0

sub_5189a0(arg1 + 0x1cc)
int32_t result = sub_403160(*(arg1 + 0x1cc), 1, 0x14)
*(arg1 + 8) = &partsengine::CKey::`vftable'
return result
