// 函数: sub_582e90
// 地址: 0x582e90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

if (arg1 + 4 != arg2)
    sub_401ff0(arg1 + 4, arg2, 0, 0xffffffff)

char eax
int32_t ecx_2
eax, ecx_2 = sub_40c250(arg2, "collision")
int32_t var_c = 7
*(arg1 + 0x69) = eax
void* eax_1
int32_t ecx_4
eax_1, ecx_4 = sub_4294e0(arg2, "(water)", ecx_2)
int32_t var_c_1 = 0xc
eax_1.b = eax_1 != 0xffffffff
*(arg1 + 0x70) = eax_1.b
void* eax_2
int32_t ecx_6
eax_2, ecx_6 = sub_4294e0(arg2, "(nolighting)", ecx_4)
int32_t var_c_2 = 0xe
eax_2.b = eax_2 == 0xffffffff
*(arg1 + 0x71) = eax_2.b
void* eax_3
int32_t ecx_8
eax_3, ecx_8 = sub_4294e0(arg2, "(nomakeshadow)", ecx_6)
int32_t var_c_3 = 7
eax_3.b = eax_3 != 0xffffffff
*(arg1 + 0x72) = eax_3.b
void* eax_4
int32_t ecx_10
eax_4, ecx_10 = sub_4294e0(arg2, "(alpha)", ecx_8)
int32_t var_c_4 = 5
eax_4.b = eax_4 != 0xffffffff
*(arg1 + 0x73) = eax_4.b
void* result
result.b = sub_4294e0(arg2, "(env)", ecx_10) != 0xffffffff
*(arg1 + 0x74) = result.b
return result
