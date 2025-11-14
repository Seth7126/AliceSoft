// 函数: sub_4c6050
// 地址: 0x4c6050
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

float xmm2
float var_10 = xmm2
float xmm1
float var_14 = xmm1
void* eax = arg1[0x25]
float xmm0_2 = _mm_cvtepi32_ps(zx.o(*(eax + 0x17c))) f+ *(eax + 0x7c)
float var_8 = xmm0_2
float var_c = xmm0_2
float xmm0_3 = sub_4c8b60(arg1)
bool cond:0 = var_8 <= var_14
float* ecx = &var_14
float var_4 = xmm0_3

if (cond:0)
    ecx = &var_c

int32_t* eax_1 = &var_4

if (*ecx > xmm0_3)
    eax_1 = ecx

int32_t ebx = int.d(fconvert.t(*eax_1))
void* eax_2 = arg1[0x26]
float xmm0_6 = _mm_cvtepi32_ps(zx.o(*(eax_2 + 0x180))) f+ *(eax_2 + 0x80)
int32_t* ecx_1 = *(arg1[0x24] + 0x5c)
var_14 = xmm0_6
int32_t eax_5 = (*(*ecx_1 + 0x2c))(1)
float xmm1_4 = var_14 - _mm_cvtepi32_ps(zx.o(eax_5))
var_14 = xmm1_4
var_4 = xmm1_4
float xmm0_9 = sub_4c8c20(arg1)
bool cond:1 = var_14 <= var_10
void* edi = data_75d530
float* ecx_3 = &var_10
var_8 = xmm0_9

if (cond:1)
    ecx_3 = &var_4

float* eax_6 = &var_8

if (*ecx_3 > xmm0_9)
    eax_6 = ecx_3

int32_t ebp = int.d(fconvert.t(*eax_6))

if (*(edi + 4) != 0)
    sub_5e2240(*(edi + 4), ebx, ebp)
else if (data_75d534 != 0)
    float* var_28_1 = ecx_3
    int32_t* eax_7 = sub_6203f0()
    
    if (eax_7 != 0)
        int32_t eax_8 = (**eax_7)(&data_6ecca8)
        *(edi + 4) = eax_8
        
        if (eax_8 != 0)
            sub_5e2240(*(edi + 4), ebx, ebp)

sub_4c6190(arg1)
return sub_4c6270(arg1) __tailcall
