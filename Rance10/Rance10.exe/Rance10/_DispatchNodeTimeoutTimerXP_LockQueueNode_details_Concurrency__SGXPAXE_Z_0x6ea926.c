// 函数: ?DispatchNodeTimeoutTimerXP@LockQueueNode@details@Concurrency@@SGXPAXE@Z
// 地址: 0x6ea926
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

Concurrency::details::platform::__DeleteTimerQueueTimer(
    Concurrency::details::GetSharedTimerQueue(), arg1[3], nullptr)
int32_t eax_1 = 0

if (0 == arg1[4])
    arg1[4] = 2
else
    eax_1 = arg1[4]

if (eax_1 != 0)
    return Concurrency::details::LockQueueNode::DerefTimerNode(arg1)

int32_t esi_1 = *(**arg1 + 0xc)
j_sub_4033e0()
return esi_1()
