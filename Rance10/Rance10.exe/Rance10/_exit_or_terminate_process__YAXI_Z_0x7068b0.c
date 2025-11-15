// 函数: ?exit_or_terminate_process@@YAXI@Z
// 地址: 0x7068b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

uint32_t eax
int32_t ecx
HMODULE ecx_1
int32_t edx
eax, ecx_1, edx = ___acrt_is_packaged_app(ecx)

if (eax.b != 0)
    TEB* fsbase
    eax = fsbase->ProcessEnvironmentBlock->NtGlobalFlag u>> 8
    
    if ((eax.b & 1) == 0)
        TerminateProcess(GetCurrentProcess(), arg1)
        noreturn

try_cor_exit_process(eax, edx, ecx_1, arg1)
ExitProcess(arg1)
noreturn
