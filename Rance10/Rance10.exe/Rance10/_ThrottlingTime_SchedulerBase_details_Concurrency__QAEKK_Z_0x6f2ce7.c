// 函数: ?ThrottlingTime@SchedulerBase@details@Concurrency@@QAEKK@Z
// 地址: 0x6f2ce7
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t eax = *(arg1 + 0x190)
int32_t ecx = *(arg1 + 0x1cc)

if (eax u< ecx)
    return 0

int32_t eax_2 = eax - ecx
int32_t eax_4

if (eax_2 u< 0x64)
    eax_4 = divu.dp.d(0:eax_2, 0xa) + 5
else if (eax_2 u< 0x12c)
    eax_4 = (eax_2 u>> 3) + 0xf
else if (eax_2 u< 0x258)
    eax_4 = divu.dp.d(0:eax_2, 5) + 0x3c
else if (eax_2 u< 0x5dc)
    eax_4 = (eax_2 u>> 2) + 0xb4
else if (eax_2 u< 0x9c4)
    eax_4 = divu.dp.d(0:eax_2, 3) + 0x22b
else if (eax_2 u>= 0xfa0)
    eax_4 = (eax_2 u>> 1) + 0x2008
else
    eax_4 = divu.dp.d(0:eax_2, 3) + 0x9c4

return eax_4 * arg2
