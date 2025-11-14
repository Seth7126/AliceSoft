// 函数: sub_10008ce5
// 地址: 0x10008ce5
// 来自: E:\torrent\AliceSoft\ランス01\DLL\DrawMovie3.dll

int32_t ebp
int32_t var_4 = ebp
int32_t* ebp_1 = &var_4
bool p = unimplemented  {xor eax, eax}
bool a = undefined
int32_t ebx
int32_t var_20 = ebx
int32_t var_8 = 0
int32_t var_10 = 0
int32_t var_c = 0
int32_t var_24 = ebx
bool d
int32_t var_28 = (d ? 1 : 0) << 0xa | (0 s< 0 ? 1 : 0) << 7 | (arg1 == arg1 ? 1 : 0) << 6
    | (a ? 1 : 0) << 4 | (p ? 1 : 0) << 2
int32_t eax_1 = var_28 ^ 0x200000
int32_t var_28_2 = (test_bit(eax_1, 0xb) ? 1 : 0) << 0xb | (test_bit(eax_1, 0xa) ? 1 : 0) << 0xa
    | (test_bit(eax_1, 7) ? 1 : 0) << 7 | (test_bit(eax_1, 6) ? 1 : 0) << 6
    | (test_bit(eax_1, 4) ? 1 : 0) << 4 | (test_bit(eax_1, 2) ? 1 : 0) << 2
    | (test_bit(eax_1, 0) ? 1 : 0)

if (var_28_2 != var_28)
    int32_t var_28_3 = var_28
    int32_t eax_2
    int32_t ecx_1
    int32_t edx_2
    int32_t ebx_1
    eax_2, ebx_1, ecx_1, edx_2 = __cpuid(0, var_28)
    int32_t var_10_1 = eax_2
    int32_t var_1c_1 = ebx_1
    int32_t var_18_1 = edx_2
    int32_t var_14_1 = ecx_1
    int32_t eax_3
    int32_t ecx_2
    int32_t edx_3
    int32_t ebx_2
    eax_3, ebx_2, ecx_2, edx_3 = __cpuid(1, ecx_1)
    var_8 = edx_3
    int32_t var_c_1 = eax_3

int32_t result

if ((var_8 & 0x4000000) == 0)
    result = 0
else
    int32_t eax_4
    int32_t esi
    eax_4, ebp_1 = sub_10008c95(esi, arg2)
    
    result = eax_4 == 0 ? 0 : 1

*ebp_1
return result
