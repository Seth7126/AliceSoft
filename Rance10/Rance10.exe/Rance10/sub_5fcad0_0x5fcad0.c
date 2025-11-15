// 函数: sub_5fcad0
// 地址: 0x5fcad0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax
int32_t ecx
eax, ecx = sub_4ac8a0(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_4d7dc0(eax, arg1[1], *arg1, eax)
int32_t edi = arg1[1]
void* i = *arg1
int32_t ecx_6 = (edi - i) s/ 0xc
char var_8
var_8.d = ecx_6

if (i != 0)
    for (; i != edi; i += 0xc)
        sub_5fc940(i)
    
    void* esi = *arg1
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x2aaaaaab, arg1[2] - esi)
    int32_t edx_4 = edx_3 s>> 1
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0xc)
    ecx_6 = var_8.d

arg1[2] = &eax[arg2 * 3]
void* result = &eax[ecx_6 * 3]
arg1[1] = result
*arg1 = eax
return result
