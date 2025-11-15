// 函数: ___vcrt_initialize
// 地址: 0x7024ba
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

___vcrt_initialize_pure_virtual_call_handler()
___vcrt_initialize_winapi_thunks()

if (___vcrt_initialize_locks() != 0)
    if (___vcrt_initialize_ptd() != 0)
        return 1
    
    ___vcrt_uninitialize_locks()

return 0
