// 函数: sub_4194f0
// 地址: 0x4194f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax
int32_t ecx
eax, ecx = sub_4195a0(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_419760(eax, arg1[1], *arg1, eax)
int32_t ebx = arg1[1]
void* i = *arg1
char var_8
var_8.d = (ebx - i) s/ 0x34

if (i != 0)
    for (; i != ebx; i += 0x34)
        sub_418e90(i)
    
    void* esi = *arg1
    int32_t eax_5
    int32_t edx_3
    edx_3:eax_5 = muls.dp.d(0x4ec4ec4f, arg1[2] - esi)
    int32_t edx_4 = edx_3 s>> 4
    sub_403160(esi, (edx_4 u>> 0x1f) + edx_4, 0x34)

arg1[2] = arg2 * 0x34 + eax
void* result = &eax[var_8.d * 0xd]
arg1[1] = result
*arg1 = eax
return result
