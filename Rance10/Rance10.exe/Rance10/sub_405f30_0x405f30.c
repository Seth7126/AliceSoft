// 函数: sub_405f30
// 地址: 0x405f30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

bool cond:0 = arg1[1].b == 0
*arg1 = &thread::CCriticalLock::`vftable'

if (not(cond:0))
    arg1[1].b = 0
    LeaveCriticalSection(*(arg1[2] + 4) + 4)
