// 函数: sub_405ef0
// 地址: 0x405ef0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = arg1[1].b == 0
*arg1 = &thread::CCriticalLock::`vftable'

if (not(cond:0))
    arg1[1].b = 0
    LeaveCriticalSection(*(arg1[2] + 4) + 4)

if ((arg2 & 1) != 0)
    int32_t var_8_2 = 0xc
    operator new(arg1)

return arg1
