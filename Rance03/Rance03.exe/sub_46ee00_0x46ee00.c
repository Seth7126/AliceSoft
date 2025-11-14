// 函数: sub_46ee00
// 地址: 0x46ee00
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

struct thread::CCriticalObject<class std::map<int32_t, class kiwi::CMultiChannelSet*> >::VTable** 
    var_4 = arg1
*arg1 = &thread::CCriticalObject<class std::map<int32_t, class kiwi::CMultiChannelSet*> >::`vftable'
int32_t* ecx = arg1[4]
arg1[3] = &thread::CCriticalSection::`vftable'

if (ecx != 0)
    (**ecx)(1)

int32_t** eax_2 = arg1[1]
sub_4200d0(&arg1[1], &var_4, *eax_2, eax_2)
j__free(arg1[1])

if ((arg2 & 1) != 0)
    j__free(arg1)

return arg1
