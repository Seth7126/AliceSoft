// 函数: sub_5d0ee0
// 地址: 0x5d0ee0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct thread::CCriticalSection::VTable** var_4 = arg1
sub_5d0dd0(arg1)
int32_t* eax = arg1[4]
int32_t* var_10 = eax
sub_44dce0(&arg1[4], &var_4, *eax)
sub_403160(arg1[4], 1, 0x28)
int32_t** eax_1 = arg1[2]
sub_5d2130(&arg1[2], &var_4, *eax_1, eax_1)
int32_t result = sub_403160(arg1[2], 1, 0x30)
*arg1 = &thread::CCriticalSection::`vftable'
int32_t* ecx_2 = arg1[1]

if (ecx_2 == 0)
    return result

return (**ecx_2)(1)
