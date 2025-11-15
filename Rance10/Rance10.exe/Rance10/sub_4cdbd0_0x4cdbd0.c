// 函数: sub_4cdbd0
// 地址: 0x4cdbd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* ebx = arg3
int32_t edi_1 = ebx[1] - *ebx

if (edi_1 s<= 0)
    int32_t eax
    eax.b = 0
    return eax

int32_t* eax_1 = sub_6e810c(0x14)
arg3 = eax_1
__builtin_memset(eax_1, 0, 0x14)
eax_1[1] = 1
*eax_1 = &common::CIMemory::`vftable'{for `common::SuicideRefCounter<class IMemory>'}
eax_1[2] = 0
eax_1[3] = 0
eax_1[4] = 0
(*(*eax_1 + 8))(edi_1)
sub_700660((*(*eax_1 + 0x18))(*ebx, edi_1))
void** var_8
sub_4cf9f0(arg1 + 0x54, &var_8, arg2)
var_8[0xa] = eax_1
void** eax_5
eax_5.b = 1
return eax_5
