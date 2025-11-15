// 函数: ?try_lock@critical_section@Concurrency@@QAE_NXZ
// 地址: 0x6eac96
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_1c
Concurrency::details::LockQueueNode::LockQueueNode(&var_1c, 0xffffffff)
int32_t* result = nullptr

if (0 == arg1[7])
    arg1[7] = &var_1c
else
    result = arg1[7]

if (result != 0)
    result.b = 0
else
    arg1[6] = &var_1c
    sub_6ea9c8(&var_1c, arg1)
    int32_t var_14
    int32_t var_14_1 = var_14 & 0xfffffffe
    Concurrency::critical_section::_Switch_to_active(arg1, &var_1c)
    result.b = 1

return result
