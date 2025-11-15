// 函数: ?GetRealizedChore@SchedulerBase@details@Concurrency@@QAEPAVRealizedChore@23@P6AXPAX@Z0@Z
// 地址: 0x6f125f
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
SLIST_ENTRY* eax_1 = InterlockedPopEntrySList(arg1 + 0x1f8)
int32_t edx_1 = neg.d(eax_1)
void* result = sbb.d(edx_1, edx_1, eax_1 != 0) & &eax_1[-3]

if (result != 0)
    *(result + 4) = arg2
    *(result + 8) = arg3
else
    result = sub_6e810c(0x10)
    void* result_1 = result
    
    if (result == 0)
        return nullptr
    
    *(result + 4) = arg2
    *result = &Concurrency::details::RealizedChore::`vftable'{for `Concurrency::details::_Chore'}
    *(result + 8) = arg3

*(result + 0xc) = 0
return result
