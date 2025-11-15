// 函数: sub_606840
// 地址: 0x606840
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax
int32_t ecx
eax, ecx = sub_55c330(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_606ea0(eax, arg1[1], *arg1, eax)
int32_t edi = arg1[1]
void* i = *arg1
int32_t ecx_6 = (edi - i) s/ 0x1c
char var_8
var_8.d = ecx_6

if (i != 0)
    for (; i != edi; i += 0x1c)
        sub_606fa0(i)
    
    void* esi = *arg1
    sub_403160(esi, (arg1[2] - esi) s/ 0x1c, 0x1c)
    ecx_6 = var_8.d

arg1[2] = &eax[arg2 * 7]
void* result = &eax[ecx_6 * 7]
arg1[1] = result
*arg1 = eax
return result
