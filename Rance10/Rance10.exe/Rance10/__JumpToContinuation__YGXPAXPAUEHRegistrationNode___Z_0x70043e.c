// 函数: ?_JumpToContinuation@@YGXPAXPAUEHRegistrationNode@@@Z
// 地址: 0x70043e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void* var_8 = arg2 + 0xc
TEB* fsbase
fsbase->NtTib.ExceptionList = fsbase->NtTib.ExceptionList->Next
*(arg2 - 4)
jump(arg1)
