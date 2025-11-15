// 函数: ?initialize_lc_time@@YA_NQAU__crt_lc_time_data@@QAU__crt_locale_data@@@Z
// 地址: 0x71c5a5
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_14 = 0
int16_t* esi = *(arg2 + 0xb4)
int32_t edi
int32_t var_24 = edi
int16_t* var_c = esi
void* var_18 = arg2
void* ecx = arg1
int32_t ebx = 0
*(ecx + 0x160) = sub_7116eb(esi)
void* eax_2 = 0x31
PSTR var_8 = 0x31
int32_t var_10 = 7

while (true)
    uint32_t temp1_1 = modu.dp.d(0:(eax_2 - 0x30), 7)
    int32_t ebx_3 = ebx | sub_71950d(&var_18, 1, esi, var_8, ecx + (temp1_1 << 2))
        | sub_71950d(&var_18, 1, var_c, &var_8[0xfffffff9], arg1 + (temp1_1 << 2) + 0x1c)
        | sub_71950d(&var_18, 2, var_c, var_8, arg1 + (temp1_1 << 2) + 0xb4)
    ebx = ebx_3 | sub_71950d(&var_18, 2, var_c, &var_8[0xfffffff9], arg1 + (temp1_1 << 2) + 0xd0)
    eax_2 = &var_8[1]
    int32_t temp3_1 = var_10
    var_10 -= 1
    var_8 = eax_2
    
    if (temp3_1 == 1)
        break
    
    ecx = arg1
    esi = var_c

void* esi_3 = 0x38
void* eax_20 = arg1 + 0x68
void* var_c_1 = 0x38
void* var_8_1 = eax_20
int32_t i_1 = 0xc
int32_t i

do
    PSTR esi_5 = var_c_1
    int32_t ebx_6 = ebx | sub_71950d(&var_18, 1, var_c, esi_3 + 0xc, eax_20 - 0x30)
        | sub_71950d(&var_18, 1, var_c, var_c_1, var_8_1)
        | sub_71950d(&var_18, 2, var_c, esi_3 + 0xc, var_8_1 + 0x84)
    ebx = ebx_6 | sub_71950d(&var_18, 2, var_c, esi_5, var_8_1 + 0xb4)
    eax_20 = var_8_1 + 4
    esi_3 = &esi_5[1]
    i = i_1
    i_1 -= 1
    var_8_1 = eax_20
    var_c_1 = esi_3
while (i != 1)
int32_t ebx_9 = ebx | sub_71950d(&var_18, 1, var_c, 0x28, arg1 + 0x98)
    | sub_71950d(&var_18, 1, var_c, 0x29, arg1 + 0x9c)
    | sub_71950d(&var_18, 2, var_c, 0x28, arg1 + 0x14c)
int32_t ebx_12 = ebx_9 | sub_71950d(&var_18, 2, var_c, 0x29, arg1 + 0x150)
    | sub_71950d(&var_18, 1, var_c, 0x1f, arg1 + 0xa0)
    | sub_71950d(&var_18, 1, var_c, 0x20, arg1 + 0xa4)
int32_t ebx_15 = ebx_12 | sub_71950d(&var_18, 1, var_c, 0x1003, arg1 + 0xa8)
    | sub_71950d(&var_18, 0, var_c, 0x1009, arg1 + 0xac)
    | sub_71950d(&var_18, 2, var_c, 0x1f, arg1 + 0x154)
int32_t ebx_16 = ebx_15 | sub_71950d(&var_18, 2, var_c, 0x20, arg1 + 0x158)
int32_t eax_53 = sub_71950d(&var_18, 2, var_c, 0x1003, arg1 + 0x15c) | ebx_16
int32_t eax_54 = neg.d(eax_53)
return sbb.d(eax_54, eax_54, eax_53 != 0) + 1
