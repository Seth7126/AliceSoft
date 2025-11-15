// 函数: __Init_thread_header
// 地址: 0x6e8615
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Init_thread_lock()

while (true)
    if (*arg1 == 0)
        *arg1 = 0xffffffff
        break
    
    if (*arg1 != 0xffffffff)
        TEB* fsbase
        *(*(fsbase->ThreadLocalStoragePointer + (data_7fc268 << 2)) + 4) = data_7e1068
        break
    
    __Init_thread_wait(0x64)

return __Init_thread_unlock() __tailcall
