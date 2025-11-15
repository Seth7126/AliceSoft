// 函数: sub_56d1b0
// 地址: 0x56d1b0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t* eax
int32_t ecx
eax, ecx = sub_56d370(arg2)
int32_t var_1c_1 = ecx
int32_t var_20 = 0.d
int32_t var_24 = ecx
sub_56d510(eax, arg1[1], *arg1, eax)
void* esi = *arg1
void* ecx_3 = arg1[1] - esi

if (esi != 0)
    int32_t var_1c_2 = arg2
    void* var_20_1 = ecx_3
    sub_56d420(esi, arg1[1])
    void* esi_1 = *arg1
    int32_t eax_2
    int32_t edx_4
    edx_4:eax_2 = muls.dp.d(0x38e38e39, arg1[2] - esi_1)
    int32_t edx_5 = edx_4 s>> 3
    sub_403160(esi_1, (edx_5 u>> 0x1f) + edx_5, 0x24)

arg1[2] = &eax[arg2 * 9]
void* result = &eax[ecx_3 s/ 0x24 * 9]
arg1[1] = result
*arg1 = eax
return result
