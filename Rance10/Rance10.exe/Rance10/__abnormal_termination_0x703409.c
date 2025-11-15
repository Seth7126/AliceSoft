// 函数: __abnormal_termination
// 地址: 0x703409
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList

if (ExceptionList->Handler == __unwind_handler
        && ExceptionList->__offset(0x8).d == *(ExceptionList->__offset(0xc).d + 0xc))
    return 1

return 0
