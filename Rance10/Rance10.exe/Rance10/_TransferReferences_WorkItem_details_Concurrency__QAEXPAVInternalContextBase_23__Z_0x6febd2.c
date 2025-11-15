// 函数: ?TransferReferences@WorkItem@details@Concurrency@@QAEXPAVInternalContextBase@23@@Z
// 地址: 0x6febd2
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* eax = sub_425af0(arg2 + 4)
void* var_14_1
char var_10_1

if (*arg1 != 2)
    void* ecx_2 = arg1[1]
    int32_t result = *(eax + 0x100)
    
    if (result == *(ecx_2 + 0x100))
        return result
    
    var_10_1 = 1
    var_14_1 = ecx_2
else
    void* edx_1 = arg1[1]
    uint32_t ecx_1 = *(eax + 0x100)
    
    if (ecx_1 == *(edx_1 + 0x100))
        return sub_6f1a0a(ecx_1)
    
    var_10_1 = 0
    var_14_1 = edx_1

return Concurrency::details::InternalContextBase::SwapScheduleGroupSegment(arg2, var_14_1, var_10_1)
