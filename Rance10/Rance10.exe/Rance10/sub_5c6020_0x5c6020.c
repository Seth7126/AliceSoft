// 函数: sub_5c6020
// 地址: 0x5c6020
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

struct thread::CCriticalSection::VTable** var_4 = arg1
int32_t* esi = arg1[6]

if (esi != 0)
    sub_564e60(esi)
    int32_t var_10_1 = 0x48
    operator new(esi)

int32_t* eax = arg1[4]
int32_t* var_10_2 = eax
sub_5c7060(&arg1[4], &var_4, *eax)
int32_t result = sub_403160(arg1[4], 1, 0x1c)
arg1[2] = &thread::CCriticalSection::`vftable'
int32_t* ecx_2 = arg1[3]

if (ecx_2 != 0)
    result = (**ecx_2)(1)

*arg1 = &thread::CCriticalSection::`vftable'
int32_t* ecx_3 = arg1[1]

if (ecx_3 == 0)
    return result

return (**ecx_3)(1)
