// 函数: sub_606990
// 地址: 0x606990
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void** var_4 = arg1
int32_t* eax
int32_t ecx
eax, ecx = sub_4ac4a0(arg2)
int32_t var_18_1 = ecx
int32_t var_1c = 0
int32_t var_20 = ecx
int32_t* result = sub_606f30(eax, arg1[1], *arg1, eax)
int32_t edx_1 = arg1[1]
void* ecx_2 = *arg1

if (ecx_2 != 0)
    int32_t var_18_2 = 0
    void* var_1c_1 = ecx_2
    sub_570210(ecx_2, edx_1)
    void* ecx_3 = *arg1
    result = sub_403160(ecx_3, (arg1[2] - ecx_3) s>> 4, 0x10)

arg1[2] = &eax[arg2 * 4]
arg1[1] = ((edx_1 - ecx_2) & 0xfffffff0) + eax
*arg1 = eax
return result
