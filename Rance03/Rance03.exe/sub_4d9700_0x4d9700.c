// 函数: sub_4d9700
// 地址: 0x4d9700
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x1f07c1f)
    sub_69a551("vector<T> too long")
    noreturn

uint32_t edi = arg2 * 0x84
int32_t eax_1 = sub_69adc6(edi)

if (eax_1 == 0)
    sub_69a4fc()
    noreturn

*arg1 = eax_1
arg1[1] = eax_1
arg1[2] = eax_1 + edi
int32_t eax_2
eax_2.b = 1
return eax_2
