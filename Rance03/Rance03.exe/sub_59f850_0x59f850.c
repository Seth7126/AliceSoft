// 函数: sub_59f850
// 地址: 0x59f850
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_30 = 0xff
int32_t* ebx = &var_30
int32_t var_10 = 0
float xmm0_1 = arg1[3] f* 255f
int32_t var_28 = 0xff
int32_t eax = int.d(xmm0_1)
int32_t var_20
int32_t* edi = &var_20
int32_t var_c = 0
var_20 = 0xff
int32_t var_8 = 0
int32_t var_18 = 0xff
int32_t var_4 = 0
float xmm0_2 = *arg1
int32_t var_2c = eax

if (eax s<= 0xff)
    ebx = &var_2c

int32_t* ecx = &var_28
int32_t eax_1 = int.d(xmm0_2 * 255f)
float xmm0_4 = arg1[1]
int32_t var_24 = eax_1

if (eax_1 s<= 0xff)
    ecx = &var_24

int32_t eax_2 = int.d(xmm0_4 * 255f)
float xmm0_6 = arg1[2]
int32_t var_1c = eax_2

if (eax_2 s<= 0xff)
    edi = &var_1c

int32_t* esi = &var_18
int32_t eax_3 = int.d(xmm0_6 * 255f)
int32_t var_14 = eax_3
int32_t* eax_4 = &var_10

if (eax_3 s<= 0xff)
    esi = &var_14

if (*ebx s>= 0)
    eax_4 = ebx

int32_t* eax_5 = &var_c

if (*ecx s>= 0)
    eax_5 = ecx

int32_t* ecx_1 = &var_8

if (*edi s>= 0)
    ecx_1 = edi

int32_t* ecx_2 = &var_4

if (*esi s>= 0)
    ecx_2 = esi

return ((*eax_4 << 8 | *eax_5) << 8 | *ecx_1) << 8 | *ecx_2
