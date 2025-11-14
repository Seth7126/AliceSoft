// 函数: sub_5f4140
// 地址: 0x5f4140
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

bool cond:0 = arg1[1].b == 0
*arg1 = &thread::CCriticalLock::`vftable'

if (not(cond:0))
    arg1[1].b = 0
    LeaveCriticalSection(*(arg1[2] + 4) + 4)
