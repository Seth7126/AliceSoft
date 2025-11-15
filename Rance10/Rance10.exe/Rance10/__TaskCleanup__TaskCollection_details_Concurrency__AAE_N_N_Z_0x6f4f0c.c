// 函数: ?_TaskCleanup@_TaskCollection@details@Concurrency@@AAE_N_N@Z
// 地址: 0x6f4f0c
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ebx
ebx.b = 0
struct _EXCEPTION_REGISTRATION_RECORD** i
bool cond:0_1

if (Concurrency::details::_TaskCollection::_IsDirectAlias(arg1).b != 0)
    cond:0_1 = ebx.b == 0
else if (sub_6fff51().b != 0)
    Concurrency::details::_TaskCollection::_Abort(arg1, arg2)
    cond:0_1 = ebx.b == 0
else
    ebx.b = *(arg1 + 0x10) s> 0
    
    if (*(arg1 + 0x64) == arg1)
        for (i = *(arg1 + 0x68); i != 0; i = i[0x1a])
            if (i[4] s> 0)
                ebx.b = 1
    
    char temp1_1 = ebx.b
    cond:0_1 = temp1_1 == 0
    
    if (temp1_1 != 0)
        Concurrency::details::_TaskCollection::_Abort(arg1, arg2)
        cond:0_1 = ebx.b == 0

i.b = cond:0_1
return i
