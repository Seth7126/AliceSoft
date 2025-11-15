// 函数: ___vcrt_initialize_ptd
// 地址: 0x702fe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

BOOL eax = ___vcrt_InitializeCriticalSectionEx(___vcrt_freefls@4)
data_7e1410 = eax

if (eax != 0xffffffff)
    if (sub_702885(eax, 0x7fc3e0) != 0)
        BOOL eax_1
        eax_1.b = 1
        return eax_1
    
    ___vcrt_uninitialize_ptd()

eax.b = 0
return eax
