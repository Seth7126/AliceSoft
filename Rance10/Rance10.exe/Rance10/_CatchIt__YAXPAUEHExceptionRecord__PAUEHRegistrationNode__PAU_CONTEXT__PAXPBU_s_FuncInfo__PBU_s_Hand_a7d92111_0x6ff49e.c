// 函数: ?CatchIt@@YAXPAUEHExceptionRecord@@PAUEHRegistrationNode@@PAU_CONTEXT@@PAXPBU_s_FuncInfo@@PBU_s_HandlerType@@PBU_s_CatchableType@@PBU_s_TryBlockMapEntry@@H1E@Z
// 地址: 0x6ff49e
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (arg7 != 0)
    sub_6ffae6(arg1, arg2, arg6, arg7)

void** var_10_2

var_10_2 = arg10 != 0 ? arg10 : arg2

sub_700470(var_10_2, arg1)
int32_t var_10_3 = *arg8
___FrameUnwindToState(arg2, arg4, arg5)
arg2[2] = arg8[1] + 1
int32_t* result = CallCatchBlock(arg1, arg2, arg3, arg5, arg6[3], arg9, 0x100)

if (result == 0)
    return result

return _JumpToContinuation(result, arg2)
