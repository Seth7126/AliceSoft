// 函数: ?_TryAcquire@_HyperNonReentrantLock@details@Concurrency@@QAE_NXZ
// 地址: 0x6eb717
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

j_sub_6f09b1()
int32_t ebx
ebx.b = Concurrency::details::_NonReentrantLock::_TryAcquire(arg1)

if (ebx.b == 0)
    j_sub_6f09b1()

return ebx.b
