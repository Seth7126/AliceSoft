// 函数: sub_473340
// 地址: 0x473340
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = &thread::CCriticalObject<class std::list<class kiwi::CSoundChannel*> >::`vftable'
int32_t* ecx = arg1[4]
arg1[3] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

sub_441ce0(&arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
