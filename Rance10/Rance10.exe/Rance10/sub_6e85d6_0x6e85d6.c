// 函数: sub_6e85d6
// 地址: 0x6e85d6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

__Init_thread_lock()
int32_t ecx_1 = data_7e1068 + 1
data_7e1068 = ecx_1
*arg1 = ecx_1
TEB* fsbase
*(*(fsbase->ThreadLocalStoragePointer + (data_7fc268 << 2)) + 4) = data_7e1068
__Init_thread_unlock()
return __Init_thread_notify() __tailcall
