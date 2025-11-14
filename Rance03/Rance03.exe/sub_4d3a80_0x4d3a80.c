// 函数: sub_4d3a80
// 地址: 0x4d3a80
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_c = 0xffffffff
int32_t (* var_10)(void* arg1) = sub_6bf45b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
float var_ec
int32_t eax_2 = __security_cookie ^ &var_ec
int32_t __saved_edi
int32_t var_fc = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
float xmm3
var_ec = xmm3
void* result = sub_510540(arg2, arg8)
int32_t xmm3_1 = (zx.o(0)).d
int32_t edi = 0
float xmm1 = arg3
float xmm2_1 = arg4 * 0.5f
arg4 = xmm2_1
float xmm4_1 = xmm2_1 / xmm1
float var_e8 = xmm4_1

if (not(xmm1 <= 0f))
    struct _EXCEPTION_REGISTRATION_RECORD*** ebx_1 = result + 0x2c
    
    do
        struct partsengine::CConstructionProcess::VTable* var_e0
        sub_47f050(&var_e0)
        int32_t var_c_1 = 0
        int32_t var_dc_1 = 0x12
        int32_t var_a0_1 = 0xff
        float xmm3_2 = var_ec
        float xmm1_2 = _mm_cvtepi32_ps(zx.o(int.d(xmm3_1 * xmm4_1 + 0.5f)))
        int32_t ecx_2 = int.d(xmm1 f- xmm3_1 + arg1)
        int32_t var_c4_1 = ecx_2
        int32_t var_bc_1 = ecx_2
        int32_t var_c0_1 = int.d(xmm1_2 + xmm2_1 + xmm3_2)
        int32_t var_b8_1 = int.d(xmm2_1 - xmm1_2 + xmm3_2)
        int32_t var_ac_1 = arg5
        int32_t var_a8_1 = arg6
        int32_t var_a4_1 = arg7
        sub_481250(ebx_1, &var_e0)
        int32_t var_c_2 = 0xffffffff
        result = sub_47f160(&var_e0)
        xmm1 = arg3
        edi += 1
        xmm2_1 = arg4
        xmm4_1 = var_e8
        xmm3_1 = _mm_cvtepi32_ps(zx.o(edi))
    while (xmm1 f> xmm3_1)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ec)
return result
