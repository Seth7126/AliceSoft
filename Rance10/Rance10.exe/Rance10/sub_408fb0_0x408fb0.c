// 函数: sub_408fb0
// 地址: 0x408fb0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

char* eax
int32_t ecx
eax, ecx = sub_409080(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_409d80(eax, arg1[1], *arg1, eax)
int32_t edi = arg1[1]
void* i = *arg1
int32_t ecx_6 = (edi - i) s/ 0x3c
char var_8
var_8.d = ecx_6

if (i != 0)
    for (; i != edi; i += 0x3c)
        sub_408350(i)
    
    void* esi = *arg1
    sub_403160(esi, (arg1[2] - esi) s/ 0x3c, 0x3c)
    ecx_6 = var_8.d

arg1[2] = &eax[arg2 * 0x3c]
void* result = &eax[ecx_6 * 0x3c]
arg1[1] = result
*arg1 = eax
return result
