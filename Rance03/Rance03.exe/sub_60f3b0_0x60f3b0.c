// 函数: sub_60f3b0
// 地址: 0x60f3b0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_24
int32_t var_4 = __security_cookie ^ &var_24

if (*(arg1 + 0x44) != 0 || *(arg1 + 0x30) == 0)
    int32_t eax_1
    eax_1.b = 0
    sub_69a5bc(var_4 ^ &var_24)
    return eax_1

int32_t* ecx_2 = *(*(arg1 + 8) + 0x38)
(*(*ecx_2 + 0x164))(ecx_2, 1, arg1 + 0x48, arg1 + 0x4c)
void* eax_5 = *(arg1 + 8)
int32_t var_20 = 1
int32_t* ecx_3 = *(eax_5 + 0x38)
(*(*ecx_3 + 0x17c))(ecx_3, &var_20, arg1 + 0x50)
void* esi = *(arg1 + 8)
int32_t ebx = *(arg1 + 0x38)
var_24 = *(arg1 + 0x30)
int32_t* ecx_4 = *(esi + 0x38)

if (ecx_4 == 0)
    int32_t eax_7
    eax_7.b = 0
    sub_69a5bc(var_4 ^ &var_24)
    return eax_7

(*(*ecx_4 + 0x84))(ecx_4, 1, &var_24, ebx)
*(esi + 0x48) = var_24
*(esi + 0x4c) = ebx
void* esi_1 = *(arg1 + 8)
float xmm0_1 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x14)))
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_c = 0
int32_t var_8 = 0x3f800000
float xmm0_3 = _mm_cvtepi32_ps(zx.o(*(arg1 + 0x18)))
int32_t* eax_10 = *(esi_1 + 0x38)
(*(*eax_10 + 0xb0))(eax_10, 1, &var_1c)
*(esi_1 + 0x10) = int.d(fconvert.t(xmm0_1))
*(esi_1 + 0x14) = int.d(fconvert.t(xmm0_3))
int32_t eax_12
eax_12.b = 1
*(arg1 + 0x44) = 1
sub_69a5bc(var_4 ^ &var_24)
return eax_12
