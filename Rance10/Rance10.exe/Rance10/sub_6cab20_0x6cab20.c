// 函数: sub_6cab20
// 地址: 0x6cab20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm0_1 = arg1[3] f* 255f
int32_t var_20
int32_t* esi = &var_20
int32_t var_18 = 0xff
int32_t eax = int.d(xmm0_1)
var_20 = 0xff
int32_t* edi = &var_18
int32_t var_10 = 0xff
int32_t var_8 = 0xff
float xmm0_3 = *arg1 * 255f
int32_t var_1c = eax

if (eax s<= 0xff)
    esi = &var_1c

int32_t eax_1 = int.d(xmm0_3)
int32_t esi_1 = *esi
float xmm0_5 = arg1[1] f* 255f
int32_t var_14 = eax_1

if (eax_1 s<= 0xff)
    edi = &var_14

int32_t* edx = &var_10
int32_t eax_2 = int.d(xmm0_5)
float xmm0_6 = arg1[2]
int32_t* ecx = &var_8
int32_t var_c = eax_2

if (eax_2 s<= 0xff)
    edx = &var_c

int32_t eax_3 = int.d(xmm0_6 * 255f)
int32_t edx_1 = *edx
int32_t var_4 = eax_3
int32_t eax_4 = *edi

if (eax_3 s<= 0xff)
    ecx = &var_4

if (esi_1 s< 0)
    esi_1 = 0

int32_t ecx_1 = *ecx

if (eax_4 s< 0)
    eax_4 = 0

if (edx_1 s< 0)
    edx_1 = 0

if (ecx_1 s< 0)
    ecx_1 = 0

return ((esi_1 << 8 | eax_4) << 8 | edx_1) << 8 | ecx_1
