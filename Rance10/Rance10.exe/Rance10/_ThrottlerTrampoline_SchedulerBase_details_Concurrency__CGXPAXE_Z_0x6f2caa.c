// 函数: ?ThrottlerTrampoline@SchedulerBase@details@Concurrency@@CGXPAXE@Z
// 地址: 0x6f2caa
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t ecx
int32_t var_8 = ecx
int32_t var_c = ecx
int32_t eax = Concurrency::details::SchedulerBase::ThrottlingTime(arg1, 1)
int32_t eax_2 = j____crtGetTickCount64() - arg1[0x74]

if (eax_2 u>= eax)
    return sub_6f2b75(arg1)

return sub_6f0419(arg1, eax - eax_2)
