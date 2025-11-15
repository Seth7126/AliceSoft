// 函数: sub_606910
// 地址: 0x606910
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t* eax
int32_t ecx
eax, ecx = sub_5713a0(arg2)
int32_t var_18_1 = ecx
int32_t var_1c = 0
int32_t var_20 = ecx
int32_t* result = sub_606ed0(eax, arg1[1], *arg1, eax)
int32_t edx_1 = arg1[1]
void* ecx_2 = *arg1

if (ecx_2 != 0)
    int32_t var_18_2 = 0
    void* var_1c_1 = ecx_2
    sub_606dc0(ecx_2, edx_1)
    void* ecx_3 = *arg1
    result = sub_403160(ecx_3, (arg1[2] - ecx_3) s>> 5, 0x20)

arg1[2] = &eax[arg2 * 8]
arg1[1] = ((edx_1 - ecx_2) & 0xffffffe0) + eax
*arg1 = eax
return result
