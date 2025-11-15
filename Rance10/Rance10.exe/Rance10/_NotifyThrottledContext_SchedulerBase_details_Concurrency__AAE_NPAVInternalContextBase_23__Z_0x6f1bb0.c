// 函数: ?NotifyThrottledContext@SchedulerBase@details@Concurrency@@AAE_NPAVInternalContextBase@23@@Z
// 地址: 0x6f1bb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_1c = 0xc
int32_t var_10 = 0
int32_t var_20 = 0
void* result

if (sub_6f0c3d(arg1, &var_10, 0, 0, 0) == 0)
    InterlockedPushEntrySList(arg1 + 0x200, arg2 + 8)
    result.b = 0
else
    if (var_10 == 2 || var_10 == 8)
        InterlockedPushEntrySList(arg1 + 0x200, arg2 + 8)
        int32_t* var_c
        sub_6f7a7d(var_c, var_10, 0, nullptr)
    else
        Concurrency::details::VirtualProcessor::ClaimTicket::ExerciseWith(&var_10, arg2)
    
    result.b = 1

return result
