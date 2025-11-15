// 函数: sub_6f2fa1
// 地址: 0x6f2fa1
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

j_sub_6f09b1()

if (arg2 == 0)
    int32_t eax_3 = arg1[0x65]
    arg1[0x65] += 1
    
    if (((eax_3 + 1) & 0x40000000) != 0)
        WaitForSingleObjectEx(arg1[0x5f], 0xffffffff, 0)
else
    int32_t eax = arg1[0x65]
    arg1[0x65] -= 1
    
    if (((eax - 1) & 0x9fffffff) == 0x80000000)
        Concurrency::details::SchedulerBase::AttemptSchedulerSweep(arg1)

return j_sub_6f09b1()
