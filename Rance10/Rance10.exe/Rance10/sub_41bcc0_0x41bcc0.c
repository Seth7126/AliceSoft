// 函数: sub_41bcc0
// 地址: 0x41bcc0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax
int32_t ecx
eax, ecx = sub_41bd80(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_41beb0(eax, arg1[1], *arg1, eax)
int32_t edi = arg1[1]
void* i = *arg1
int32_t ecx_6 = (edi - i) s/ 0x48
char var_8
var_8.d = ecx_6

if (i != 0)
    for (; i != edi; i += 0x48)
        sub_41af80(i)
    
    void* esi = *arg1
    int32_t eax_2
    int32_t edx_3
    edx_3:eax_2 = muls.dp.d(0x38e38e39, arg1[2] - esi)
    int32_t edx_4 = edx_3 s>> 4
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0x48)
    ecx_6 = var_8.d

arg1[2] = &eax[arg2 * 0x48]
void* result = &eax[ecx_6 * 0x48]
arg1[1] = result
*arg1 = eax
return result
