// 函数: sub_5ae270
// 地址: 0x5ae270
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

float xmm1 = arg2
float var_40 = xmm1
void* ecx = *arg3
float xmm0

if (*(arg1 + 0x344) != 1)
    xmm0 = xmm1
else if (*(ecx + 0x174) != 0)
    void* eax_1 = ___std_acquire_shared_mutex_for_instance@4(ecx, *(arg1 + 0x348))
    xmm1 = var_40
    
    if (eax_1 == 0)
        xmm0 = (zx.o(0)).d
    else if (*(eax_1 + 0x1e4) == 0)
        xmm0 = *(eax_1 + 0x178)
    else
        xmm0 = (zx.o(0)).d
else
    xmm0 = xmm1

float xmm3 = *(arg1 + 0x3a0)
float xmm4 = *(arg1 + 0x39c)
int32_t xmm0_1

if (xmm4 < xmm3)
    float xmm0_3 = (xmm0 - xmm4) / (xmm3 - xmm4)
    
    if (0 f<= xmm0_3)
        xmm0_1 = __minss_xmmss_memss(xmm0_3, 0x3f800000)
    else
        xmm0_1 = (zx.o(0)).d
else
    xmm0_1 = (zx.o(0)).d

*(arg1 + 0x470) = xmm0_1
float var_2c
sub_5afb80(arg1, xmm1, &var_2c, *arg3, arg5, arg6, arg7)
int128_t* eax_2 = arg8

if (*(arg1 + 0x328) != 0)
    if (*(arg1 + 0x410) == 0 && not(xmm0 f< *(arg1 + 0x39c)))
        *(arg1 + 0x414) = *eax_2
        *(arg1 + 0x424) = eax_2[1]
        *(arg1 + 0x434) = eax_2[2]
        int128_t xmm0_8 = eax_2[3]
        *(arg1 + 0x410) = 1
        *(arg1 + 0x444) = xmm0_8
    
    if (*(arg1 + 0x410) != 0 || *(arg1 + 0x410) != 0)
        eax_2 = arg1 + 0x414

float xmm2 = var_2c
float var_28
float xmm6_1 = *(eax_2 + 0x18) * var_28
float xmm7_1 = *(eax_2 + 0x1c) * var_28
float var_24
float xmm4_5 = eax_2[1].d f* var_28 + *eax_2 * xmm2 + eax_2[2].d f* var_24 f+ eax_2[3].d
float xmm5_3 = *(eax_2 + 0x14) * var_28 + *(eax_2 + 4) * xmm2 + *(eax_2 + 0x24) * var_24
float xmm0_18 = *(eax_2 + 8) * xmm2
float var_3c = xmm4_5
float xmm5_4 = xmm5_3 f+ *(eax_2 + 0x34)
float var_38 = xmm5_4
float xmm6_4 = xmm6_1 + xmm0_18 + *(eax_2 + 0x28) * var_24 f+ *(eax_2 + 0x38)
float var_34 = xmm6_4
float xmm7_4 = xmm7_1 + *(eax_2 + 0xc) * xmm2 + *(eax_2 + 0x2c) * var_24 f+ *(eax_2 + 0x3c)
xmm7_4 - 1f
eax_2:1.b =
    (xmm7_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 1f) ? 1 : 0) << 2 | (xmm7_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm7_4 - 0f
    eax_2:1.b = (xmm7_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm7_4, 0f) ? 1 : 0) << 2
        | (xmm7_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm0_25 = 1f / xmm7_4
        var_3c = xmm4_5 * xmm0_25
        var_34 = xmm6_4 * xmm0_25
        float var_38_1 = xmm5_4 * xmm0_25

bool cond:2 = *(arg1 + 0x10c) == 7
*(arg1 + 0x404) = var_3c.q
*(arg1 + 0x40c) = var_34
*(arg1 + 0x454) = *arg5
*(arg1 + 0x45c) = *(arg5 i+ 8)
*(arg1 + 0x460) = *arg7

if (cond:2 || arg9.b != 0)
    int64_t var_14
    
    if (**(arg1 + 0x290) != 0)
        sub_5795c0(&var_14, *(arg1 + 0x24))
    else
        int32_t eax_6 = data_7fd4e0
        var_14 = data_7fd4d8.q
        int32_t var_c_1 = eax_6
        int32_t var_8_1 = 0
        int32_t var_4_1 = 0
    
    if (*(*(arg1 + 0x290) + 0x14) != 0)
        sub_579560(&var_3c, *(arg1 + 0x24))
    else
        var_3c.o = data_79a970[0x10][0].o
    
    float var_20
    sub_5afee0(arg1, var_40 + 1f, &var_20, *arg3, &var_14, arg6, &var_3c)
    float xmm2_5 = var_20 f- *(arg1 + 0x404)
    float var_1c
    float xmm3_6 = var_1c f- *(arg1 + 0x408)
    float var_18
    float xmm4_8 = var_18 f- *(arg1 + 0x40c)
    var_3c = xmm2_5
    float var_38_2 = xmm3_6
    float var_34_1 = xmm4_8
    float xmm0_35 = sub_484cc0(xmm3_6 * xmm3_6 + xmm2_5 * xmm2_5 + xmm4_8 * xmm4_8)
    xmm0_35 - 0f
    int32_t* eax_8
    eax_8:1.b = (xmm0_35 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm0_35, 0f) ? 1 : 0) << 2
        | (xmm0_35 < 0f ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        float xmm0_36 = 1f / xmm0_35
        var_3c = xmm2_5 * xmm0_36
        float var_38_3 = xmm3_6 * xmm0_36
        var_34_1 = xmm4_8 * xmm0_36
    
    *(arg1 + 0x474) = var_3c.q
    *(arg1 + 0x47c) = var_34_1

int32_t result = *(arg1 + 0x56c)
int32_t* esi_1 = *(arg1 + 0x568)
int32_t ebx_1 = 0
uint32_t ebp_4 = (result - esi_1 + 3) u>> 2

if (esi_1 u> result)
    ebp_4 = 0

if (ebp_4 != 0)
    do
        result = sub_57b1a0(*esi_1, var_40 f- *(arg1 + 0x39c), arg3, arg4, &var_2c)
        ebx_1 += 1
        esi_1 = &esi_1[1]
    while (ebx_1 != ebp_4)

return result
