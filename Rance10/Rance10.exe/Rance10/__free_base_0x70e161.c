// 函数: __free_base
// 地址: 0x70e161
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 != 0 && HeapFree(data_7fcae4, HEAP_NONE, arg1) == 0)
    BOOL* eax_1 = __errno()
    *eax_1 = ___acrt_errno_from_os_error(GetLastError())
