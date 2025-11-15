// 函数: sub_47fe90
// 地址: 0x47fe90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct thread::CCriticalObject<class std::map<int32_t, class kiwi::CMultiChannelSet*> >::VTable** 
    var_4 = arg1
*arg1 = &thread::CCriticalObject<class std::map<int32_t, class kiwi::CMultiChannelSet*> >::`vftable'
arg1[3] = &thread::CCriticalSection::`vftable'
int32_t* ecx = arg1[4]

if (ecx != 0)
    (**ecx)(1)

int32_t** eax_2 = arg1[1]
sub_4346e0(&arg1[1], &var_4, *eax_2, eax_2)
sub_403160(arg1[1], 1, 0x18)

if ((arg2 & 1) != 0)
    int32_t __saved_esi_1 = 0x14
    operator new(arg1)

return arg1
