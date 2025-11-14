// 函数: sub_4d3750
// 地址: 0x4d3750
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
int32_t xmm4 = (zx.o(0)).d
int32_t edi = 0
float xmm3_1 = arg4
float xmm2_1 = arg3 * 0.5f
arg3 = xmm2_1
float xmm1_1 = xmm2_1 / xmm3_1
float var_e8 = xmm1_1

if (not(xmm3_1 <= 0f))
    struct _EXCEPTION_REGISTRATION_RECORD*** ebx_1 = result + 0x2c
    
    do
        struct partsengine::CConstructionProcess::VTable* var_e0
        sub_47f050(&var_e0)
        int32_t var_c_1 = 0
        int32_t var_dc_1 = 0x12
        int32_t var_a0_1 = 0xff
        float xmm1_3 = _mm_cvtepi32_ps(zx.o(int.d(xmm4 * xmm1_1 + 0.5f)))
        int32_t var_c4_1 = int.d(xmm1_3 + xmm2_1 + arg1)
        int32_t ecx_2 = int.d(xmm3_1 f- xmm4 + var_ec)
        int32_t var_c0_1 = ecx_2
        int32_t var_b8_1 = ecx_2
        int32_t var_bc_1 = int.d(xmm2_1 - xmm1_3 + arg1)
        int32_t var_ac_1 = arg5
        int32_t var_a8_1 = arg6
        int32_t var_a4_1 = arg7
        sub_481250(ebx_1, &var_e0)
        int32_t var_c_2 = 0xffffffff
        result = sub_47f160(&var_e0)
        xmm3_1 = arg4
        edi += 1
        xmm2_1 = arg3
        xmm1_1 = var_e8
        xmm4 = _mm_cvtepi32_ps(zx.o(edi))
    while (xmm3_1 f> xmm4)

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ec)
return result
