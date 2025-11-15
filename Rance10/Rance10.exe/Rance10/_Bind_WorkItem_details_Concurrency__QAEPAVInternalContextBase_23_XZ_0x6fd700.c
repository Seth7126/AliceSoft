// 函数: ?Bind@WorkItem@details@Concurrency@@QAEPAVInternalContextBase@23@XZ
// 地址: 0x6fd700
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* esi = arg1

if ((*esi & 0x18) != 0 && Concurrency::details::WorkItem::ResolveToken(arg1) == 0)
    return 0

int32_t eax_4 = *esi - 1
char var_8_1

if (eax_4 == 1)
    var_8_1 = 0
label_6fd72f:
    void* eax_8 = Concurrency::details::ScheduleGroupSegmentBase::GetInternalContext(*(esi + 4), 
        *(esi + 8), var_8_1)
    *(esi + 8) = eax_8
    
    if (eax_8 != 0)
        *(eax_8 + 0xb3) |= 1
        *esi = 1
else if (eax_4 == 3)
    var_8_1 = 1
    goto label_6fd72f
return *(esi + 8)
