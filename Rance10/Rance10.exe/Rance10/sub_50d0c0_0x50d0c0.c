// 函数: sub_50d0c0
// 地址: 0x50d0c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_10

if (*(arg1 + 0x1ac) == 0)
    var_10 = 0
else
    var_10 = (*sub_4ef140(*(arg1 + 0xac)))->vFunc_9(1)

int32_t* eax_3 = sub_4efcc0(*(arg1 + 0xa0))
int32_t edi = *(arg1 + 0x224)
int32_t ebp_1 = (*(*eax_3 + 0x24))(1) - *(arg1 + 0x220)
void* esi_1 = data_7fcbbc
float var_10_1
float var_c
float xmm1

if (esi_1 != 0)
    xmm1 = 1f
    var_10_1 = 1f
    
    if (sub_63c080(esi_1) != 0)
        (*(**(esi_1 + 0x2c) + 0x60))()
        long double x87_r0
        var_c = fconvert.s(x87_r0)
        xmm1 = var_c
else
    xmm1 = 1f
    var_10_1 = 1f

bool cond:0 = *(arg1 + 0x1ad) == 0
int32_t var_4 = int.d(_mm_cvtepi32_ps(zx.o(ebp_1 - edi - var_10)) * xmm1)

if (cond:0)
    var_c = 0f
else
    var_c = (*(*sub_4ef220(*(arg1 + 0xb0)) + 0x28))(1)

int32_t* eax_11 = sub_4efcc0(*(arg1 + 0xa0))
int32_t edi_1 = *(arg1 + 0x21c)
int32_t ebp_5 = (*(*eax_11 + 0x28))(1) - *(arg1 + 0x218)
void* esi_3 = data_7fcbbc
int32_t ebp_7 = ebp_5 - edi_1 i- var_c
float xmm1_1

if (esi_3 != 0)
    if (sub_63c080(esi_3) != 0)
        (*(**(esi_3 + 0x2c) + 0x60))()
        var_c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
        unimplemented  {fstp dword [esp+0x14], st0}
        xmm1_1 = var_c
    else
        xmm1_1 = 1f
else
    xmm1_1 = 1f

void* ecx_12 = *(arg1 + 0x22c)
int32_t ebp_8 = int.d(_mm_cvtepi32_ps(zx.o(ebp_7)) * xmm1_1)
float var_8
sub_4eddb0(ecx_12, &var_8, &var_c, ecx_12 + 0x260, 1)
void* esi_4 = data_7fcbbc
float xmm0_6

if (esi_4 != 0)
    if (sub_63c080(esi_4) != 0)
        (*(**(esi_4 + 0x2c) + 0x60))()
        var_c = fconvert.s(unimplemented  {fstp dword [esp+0x14], st0})
        unimplemented  {fstp dword [esp+0x14], st0}
        xmm0_6 = var_c
    else
        xmm0_6 = 1f
else
    xmm0_6 = 1f

void* ecx_15 = *(arg1 + 0x22c)
int32_t edi_2 = int.d(xmm0_6 * var_8)
sub_4eddb0(ecx_15, &var_8, &var_c, ecx_15 + 0x260, 1)
void* esi_5 = data_7fcbbc

if (esi_5 != 0)
    float xmm0_8
    
    if (sub_63c080(esi_5) != 0)
        (*(**(esi_5 + 0x2c) + 0x60))()
        var_8 = fconvert.s(unimplemented  {fstp dword [esp+0x18], st0})
        unimplemented  {fstp dword [esp+0x18], st0}
        xmm0_8 = var_8
    else
        xmm0_8 = 1f
    
    var_10_1 = xmm0_8

int32_t arg_4
int32_t* eax_24 = &arg_4
int32_t ecx_19 = var_4 + edi_2
float ebx_1 = int.d(var_10_1 * var_c)

if (arg_4 s>= ecx_19)
    eax_24 = &var_4

var_4 = ecx_19
void* esi_6 = data_7fcb68

if (edi_2 s< *eax_24)
    edi_2 = *eax_24

float arg_8
float* result = &arg_8
float edx_5 = ebx_1 i+ ebp_8
bool cond:2 = arg_8 s>= edx_5
var_8 = edx_5

if (cond:2)
    result = &var_8

if (ebx_1 s< *result)
    ebx_1 = *result

if (*(esi_6 + 4) == 0)
    int32_t* ecx_20 = data_7fcb88
    
    if (ecx_20 != 0)
        result = (**ecx_20)(0x75ff30)
        *(esi_6 + 4) = result
    
    if (ecx_20 == 0 || result == 0)
        return result

return (*(**(esi_6 + 4) + 0xc))(edi_2, ebx_1)
