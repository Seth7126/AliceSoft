// 函数: sub_6eaac4
// 地址: 0x6eaac4
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

if (*arg2 == *arg1)
    void var_10
    std::range_error::range_error(&var_10, "Lock already taken")
    sub_70021b(&var_10, 0x7dd0f4)
    noreturn

int32_t* temp0 = arg1[7]
arg1[7] = arg2

if (temp0 != 0)
    sub_6ea9c8(arg2, temp0)
    temp0[1] = arg2
    Concurrency::details::LockQueueNode::Block(arg2, arg1[2])
    
    if (arg2[4] != 2)
        sub_6ea9c8(arg2, arg1)
else
    arg1[6] = arg2
    sub_6ea9c8(arg2, arg1)
    arg2[2] &= 0xfffffffe
    Concurrency::details::LockQueueNode::TryCompensateTimer(arg2)

if (arg3 != 0)
    arg1[2] = arg2[2]
    arg1[1] = arg2[1]
    *arg1 = *arg2
    arg1[6] = arg2

int32_t result
result.b = arg2[4] != 2
return result
