// 函数: sub_5b4580
// 地址: 0x5b4580
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

*arg1 = 0
arg1[1] = 0
arg1[2] = 0

if (arg2 == 0)
    int32_t eax
    eax.b = 0
    return eax

if (arg2 u> 0x4924924)
    sub_69a551("vector<T> too long")
    noreturn

int32_t edi_2 = arg2 * 0x38
int32_t eax_1 = sub_69adc6(edi_2)

if (eax_1 == 0)
    sub_69a4fc()
    noreturn

*arg1 = eax_1
arg1[1] = eax_1
arg1[2] = eax_1 + edi_2
int32_t eax_2
eax_2.b = 1
return eax_2
