// 函数: sub_47ff90
// 地址: 0x47ff90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct kiwi::CLowLevelChannelList::VTable** var_4 = arg1
*arg1 = &kiwi::CLowLevelChannelList::`vftable'
arg1[2] = &thread::CCriticalObject<class std::map<int32_t, class kiwi::CSoundChannel*> >::`vftable'
arg1[5] = &thread::CCriticalSection::`vftable'
int32_t* ecx = arg1[6]

if (ecx != 0)
    (**ecx)(1)

int32_t* eax_2 = arg1[3]
int32_t* var_c = eax_2
sub_480920(&arg1[3], &var_4, *eax_2)
return sub_403160(arg1[3], 1, 0x18)
