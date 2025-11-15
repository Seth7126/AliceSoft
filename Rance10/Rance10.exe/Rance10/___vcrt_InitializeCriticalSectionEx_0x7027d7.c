// 函数: ___vcrt_InitializeCriticalSectionEx
// 地址: 0x7027d7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = try_get_function(4, "FlsAlloc", 0x7538ec, 0x7538f4)

if (eax == 0)
    return TlsAlloc() __tailcall

j_sub_4033e0()
return eax(arg1)
