// 函数: sub_6ea8e0
// 地址: 0x6ea8e0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = 0

if (0 == arg2[4])
    arg2[4] = 2
else
    eax = arg2[4]

if (eax != 0)
    Concurrency::details::LockQueueNode::DerefTimerNode(arg2)
else
    int32_t esi_1 = *(**arg2 + 0xc)
    j_sub_4033e0()
    esi_1()

return Concurrency::details::UnRegisterAsyncTimerAndUnloadLibrary(arg1, arg3)
