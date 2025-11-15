// 函数: ?AddContext@SchedulerBase@details@Concurrency@@QAEXPAVInternalContextBase@23@@Z
// 地址: 0x6f00f9
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg1
int32_t* eax = sub_6e810c(8)
int32_t* var_8_1 = eax

if (eax == 0)
    eax = nullptr
else
    eax[1] = arg2

return Concurrency::details::LockFreePushStack<class Concurrency::details::SchedulerBase::ContextNode>::Push(
    arg1 + 0xb4, eax)
