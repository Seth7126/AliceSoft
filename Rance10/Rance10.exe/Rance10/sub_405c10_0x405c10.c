// 函数: sub_405c10
// 地址: 0x405c10
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10 = 0
int32_t var_4 = 0
int32_t result
int32_t ecx
int32_t edx
int32_t ebx
result, ebx, ecx, edx = __cpuid(0, 0)
int32_t var_c = ebx
int32_t var_8 = ecx
int32_t var_4_1 = edx

if (result == 0)
    result.b = 0
    return result

int32_t eax
int32_t ecx_1
int32_t edx_1
int32_t ebx_1
eax, ebx_1, ecx_1, edx_1 = __cpuid(1, 0)
int32_t var_10_2 = eax
int32_t var_c_1 = ebx_1
int32_t var_8_1 = ecx_1
return (edx_1 u>> 0x1a).b & 1
