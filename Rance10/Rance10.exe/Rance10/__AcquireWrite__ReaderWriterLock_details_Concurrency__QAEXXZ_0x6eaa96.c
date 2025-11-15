// 函数: ?_AcquireWrite@_ReaderWriterLock@details@Concurrency@@QAEXXZ
// 地址: 0x6eaa96
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

arg1[1] += 1
int32_t i = 0

if (0 == *arg1)
    *arg1 = 0xffffffff
else
    i = *arg1

while (i != 0)
    sub_6eac2d(arg1, 0, 0xffffffff)
    i = 0
    
    if (0 == *arg1)
        *arg1 = 0xffffffff
    else
        i = *arg1

return i
