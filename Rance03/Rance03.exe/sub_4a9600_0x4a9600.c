// 函数: sub_4a9600
// 地址: 0x4a9600
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* esi = arg1
int32_t ecx = *esi
int32_t eax = esi[1]

if (ecx == eax)
    eax.b = 1
    return eax

int32_t eax_2 = (eax - ecx) s>> 2
arg1 = eax_2
char eax_5 = (*(*arg2 + 0x30))(&arg1, 1)

if (eax_5 == 0)
    return eax_5

sub_69d850((*(*arg2 + 0x10))(0), *esi, eax_2 << 2)
int32_t* eax_8
eax_8.b = 1
return eax_8
