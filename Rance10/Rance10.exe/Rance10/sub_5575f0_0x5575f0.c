// 函数: sub_5575f0
// 地址: 0x5575f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t esi
int32_t var_4c = esi

if (arg1[0x11].b != 0)
    int32_t eax_5 = (*(*arg1 + 0x28))((*(*arg1 + 0x2c))(arg1))
    return sub_527c50(eax_5, arg4, arg3, arg5, eax_5)

void* esi_2 = data_7fcba0
void* eax_7 = *(arg5 + 0xbc)

if (eax_7 != 0)
    esi_2 = *(eax_7 + 8)

int32_t* var_54_2 = *(esi_2 + 8)
int32_t xmm0 = *(esi_2 + 0x18)
float var_2c = 0f
int32_t var_28 = 0
int32_t var_24 = xmm0
float var_14
sub_528e30(&var_2c, &var_14, var_54_2)
float xmm2 = var_14
float var_10
float xmm4 = var_10
int32_t xmm3 = (zx.o(0)).d
float xmm6_4 = *(arg5 + 0x18) * xmm4 + xmm2 f* *(arg5 + 8) + *(arg5 + 0x28) * 0f f+ *(arg5 + 0x38)
float xmm7_4 = *(arg5 + 0xc) * xmm2 + *(arg5 + 0x1c) * xmm4 + *(arg5 + 0x2c) * 0f f+ *(arg5 + 0x3c)
float xmm1_4 = *(arg5 + 0x10) * xmm2 + *(arg5 + 0x20) * xmm4 + *(arg5 + 0x30) * 0f f+ *(arg5 + 0x40)
float xmm5_4 = *(arg5 + 0x14) * xmm2 + *(arg5 + 0x24) * xmm4 + *(arg5 + 0x34) * 0f f+ *(arg5 + 0x44)
xmm5_4 - 1f
int64_t* eax_8
eax_8:1.b =
    (xmm5_4 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 1f) ? 1 : 0) << 2 | (xmm5_4 < 1f ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
    xmm5_4 f- 0
    eax_8:1.b = (xmm5_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm5_4, 0f) ? 1 : 0) << 2
        | (xmm5_4 < 0f ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        float xmm3_1 = 1f / xmm5_4
        xmm3 = xmm3_1 * xmm1_4
        xmm2 = xmm3_1 * xmm6_4
        xmm4 = xmm3_1 * xmm7_4
else
    xmm3 = xmm1_4
    xmm2 = xmm6_4
    xmm4 = xmm7_4

float* eax_9 = *(esi_2 + 4)
float xmm2_2 = xmm2 * *eax_9
float xmm3_3 = eax_9[5] * xmm4
float xmm4_4 = eax_9[0xb] * (*(esi_2 + 0x14) f+ xmm3) + eax_9[0xf]
xmm4_4 f- 0
eax_9:1.b =
    (xmm4_4 == 0f ? 1 : 0) << 6 | (is_unordered.d(xmm4_4, 0f) ? 1 : 0) << 2 | (xmm4_4 < 0f ? 1 : 0)
bool p_5 = unimplemented  {test ah, 0x44}

if (p_5)
    float xmm0_19 = 1f / xmm4_4
    xmm2_2 = xmm2_2 * xmm0_19
    xmm3_3 = xmm3_3 * xmm0_19

void* esi_3 = data_7fcbbc
int32_t ecx_4 = arg3 - int.d(xmm2_2 f* *(esi_2 + 0x24))
int32_t ecx_6 = arg4 - int.d((xmm3_3 f* *(esi_2 + 0x28)) ^ (data_79aad0).d)
int32_t var_40 = ecx_6
float var_48_2
float xmm2_4

if (esi_3 != 0)
    char eax_12
    eax_12, ecx_6 = sub_63c080(esi_3)
    
    if (eax_12 != 0)
        ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
        var_48_2 = fconvert.s(arg2)
    else
        var_48_2 = 1f
    
    esi_3 = data_7fcbbc
    
    if (esi_3 != 0)
        char eax_15
        eax_15, ecx_6 = sub_63c080(esi_3)
        
        if (eax_15 != 0)
            ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
            float var_44_1 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
            unimplemented  {fstp dword [esp+0xc], st0}
            xmm2_4 = var_44_1
        else
            xmm2_4 = 1f
        
        esi_3 = data_7fcbbc
    else
        xmm2_4 = 1f
else
    var_48_2 = 1f
    xmm2_4 = 1f

int32_t var_c = 0
var_14 = arg1[8] f* xmm2_4
float var_10_1 = arg1[9] f* var_48_2
float var_48_4
float xmm2_5

if (esi_3 != 0)
    char eax_18
    eax_18, ecx_6 = sub_63c080(esi_3)
    
    if (eax_18 != 0)
        ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
        float var_44_2 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
        unimplemented  {fstp dword [esp+0xc], st0}
        var_48_4 = var_44_2
    else
        var_48_4 = 1f
    
    esi_3 = data_7fcbbc
    
    if (esi_3 != 0)
        char eax_21
        eax_21, ecx_6 = sub_63c080(esi_3)
        
        if (eax_21 != 0)
            ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
            float var_44_3 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
            unimplemented  {fstp dword [esp+0xc], st0}
            xmm2_5 = var_44_3
        else
            xmm2_5 = 1f
        
        esi_3 = data_7fcbbc
    else
        xmm2_5 = 1f
else
    var_48_4 = 1f
    xmm2_5 = 1f

int32_t var_24_1 = 0
var_2c = arg1[6] f* xmm2_5
float var_28_1 = arg1[7] f* var_48_4
float var_48_5
float xmm2_6

if (esi_3 != 0)
    char eax_24
    eax_24, ecx_6 = sub_63c080(esi_3)
    
    if (eax_24 != 0)
        ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
        float var_44_4 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
        unimplemented  {fstp dword [esp+0xc], st0}
        var_48_5 = var_44_4
    else
        var_48_5 = 1f
    
    esi_3 = data_7fcbbc
    
    if (esi_3 != 0)
        char eax_27
        eax_27, ecx_6 = sub_63c080(esi_3)
        
        if (eax_27 != 0)
            ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
            float var_44_5 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
            unimplemented  {fstp dword [esp+0xc], st0}
            xmm2_6 = var_44_5
        else
            xmm2_6 = 1f
        
        esi_3 = data_7fcbbc
    else
        xmm2_6 = 1f
else
    var_48_5 = 1f
    xmm2_6 = 1f

int32_t var_30 = 0
float var_38 = arg1[4] f* xmm2_6
float var_34 = arg1[5] f* var_48_5
float var_48_6
float xmm1_5

if (esi_3 != 0)
    char eax_30
    eax_30, ecx_6 = sub_63c080(esi_3)
    
    if (eax_30 != 0)
        ecx_6 = (*(**(esi_3 + 0x2c) + 0x60))()
        xmm1_5 = 1f
        float var_44_6 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
        unimplemented  {fstp dword [esp+0xc], st0}
        var_48_6 = var_44_6
    else
        xmm1_5 = 1f
        var_48_6 = 1f
    
    void* esi_4 = data_7fcbbc
    
    if (esi_4 != 0)
        char eax_33
        eax_33, ecx_6 = sub_63c080(esi_4)
        
        if (eax_33 != 0)
            ecx_6 = (*(**(esi_4 + 0x2c) + 0x60))()
            float var_44_7 = fconvert.s(unimplemented  {fstp dword [esp+0xc], st0})
            unimplemented  {fstp dword [esp+0xc], st0}
            xmm1_5 = var_44_7
        else
            xmm1_5 = 1f
else
    var_48_6 = 1f
    xmm1_5 = 1f

int32_t var_54_3 = ecx_6
int32_t var_18 = 0
float var_20 = arg1[2] f* xmm1_5
float var_1c = arg1[3] f* var_48_6
char eax_37
int32_t ecx_24
eax_37, ecx_24 = sub_527e90(&var_20, var_40, ecx_4, &var_20, &var_38, &var_2c)

if (eax_37 != 0)
    return 1

int32_t var_54_4 = ecx_24
return sub_527e90(&var_2c, var_40, ecx_4, &var_2c, &var_38, &var_14) != 0
