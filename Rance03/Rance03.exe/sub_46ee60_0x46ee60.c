// 函数: sub_46ee60
// 地址: 0x46ee60
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct kiwi::CLowLevelChannelList::VTable** var_4 = arg1
*arg1 = &kiwi::CLowLevelChannelList::`vftable'
arg1[2] = &thread::CCriticalObject<class std::map<int32_t, class kiwi::CSoundChannel*> >::`vftable'
int32_t* ecx = arg1[6]
arg1[5] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

int32_t** eax_2 = arg1[3]
sub_4200d0(&arg1[3], &var_4, *eax_2, eax_2)
j__free(arg1[3])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
