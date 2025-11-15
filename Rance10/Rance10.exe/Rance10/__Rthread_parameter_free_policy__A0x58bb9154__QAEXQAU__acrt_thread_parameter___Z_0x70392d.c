// 函数: ??Rthread_parameter_free_policy@?A0x58bb9154@@QAEXQAU__acrt_thread_parameter@@@Z
// 地址: 0x70392d
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg1 == 0)
    return 

if (*(arg1 + 8) != 0)
    CloseHandle(*(arg1 + 8))

if (*(arg1 + 0xc) != 0)
    FreeLibrary(*(arg1 + 0xc))

__free_base(arg1)
