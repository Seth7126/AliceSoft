// 函数: sub_5670c0
// 地址: 0x5670c0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t* ebx = nullptr
int32_t* eax

if (arg2 != 0)
    if (arg2 u<= 0xccccccc)
        eax = sub_69adc6(arg2 * 0x14)
        ebx = eax
    
    if (arg2 u> 0xccccccc || ebx == 0)
        sub_69a4fc()
        noreturn

int32_t var_14 = arg2
sub_569c60(eax, arg1[1], *arg1, ebx)
int32_t edi = arg1[1]
void* i = *arg1
int32_t eax_3
int32_t edx_3
edx_3:eax_3 = muls.dp.d(0x66666667, edi - i)
int32_t edx_4 = edx_3 s>> 3

if (i != 0)
    for (; i != edi; i += 0x14)
        *(i + 8) = &sealengine::CEmitterSize::`vftable'
    
    j__free(*arg1)

*arg1 = ebx
arg1[2] = &ebx[arg2 * 5]
void* result = &ebx[((edx_4 u>> 0x1f) + edx_4) * 5]
arg1[1] = result
return result
