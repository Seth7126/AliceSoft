// 函数: sub_54cc20
// 地址: 0x54cc20
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4bf1
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_144 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t eax_5 = arg3 * 0x30
void* edi_1 = *(arg1 + 0x30) + eax_5
void* esi_1 = *(arg7 + 0x30) + eax_5
struct sealengine::CSQT::VTable* var_d0
sub_59bbc0((arg4 << 5) + *(edi_1 + 0x24), arg6, &var_d0, (arg5 << 5) + *(edi_1 + 0x24))
int32_t var_4 = 0
int32_t eax_6 = *(esi_1 + 0x24)
struct sealengine::CSQT::VTable* var_b0
sub_59bbc0((arg8 << 5) + eax_6, arg10, &var_b0, (arg9 << 5) + eax_6)
struct sealengine::CSQT::VTable* var_f0
sub_59bbc0(&var_d0, arg11, &var_f0, &var_b0)
var_4.b = 2
void var_dc
void var_90
int32_t* eax_7 = sub_5b0b20(&var_90, &var_dc)
void var_ec
float var_50[0x11]
float* eax_8 = sub_47c420(&var_ec, &var_50)
float xmm5 = eax_8[1]
float xmm2 = *eax_8
float xmm4 = eax_8[2]
float xmm3_3 = eax_8[3]
float xmm0_7 = eax_7[5] f* xmm5
float var_130 = *eax_7 * xmm2 + eax_7[4] f* xmm5 + eax_7[8] f* xmm4 + eax_7[0xc] f* xmm3_3
float var_12c = eax_7[1] f* xmm2 + xmm0_7 + eax_7[9] f* xmm4 + eax_7[0xd] f* xmm3_3
float xmm6 = eax_7[3]
float xmm7 = eax_7[0xb]
float xmm5_1 = eax_8[4]
float var_128 = eax_7[2] f* xmm2 + eax_7[6] f* xmm5 + eax_7[0xa] f* xmm4 + eax_7[0xe] f* xmm3_3
float xmm2_1 = eax_8[6]
float xmm4_1 = eax_8[7]
float xmm3_4 = eax_8[5]
float var_124 = xmm6 * xmm2 + eax_7[7] f* xmm5 + xmm7 * xmm4 + eax_7[0xf] f* xmm3_3
float var_120 = xmm5_1 f* *eax_7 + xmm3_4 f* eax_7[4] + xmm2_1 f* eax_7[8] + xmm4_1 f* eax_7[0xc]
float var_11c = xmm5_1 f* eax_7[1] + xmm3_4 f* eax_7[5] + xmm2_1 f* eax_7[9] + xmm4_1 f* eax_7[0xd]
float xmm3_6 = eax_8[9]
float xmm2_3 = eax_8[0xa]
float xmm4_3 = eax_8[0xb]
float var_118 =
    xmm5_1 f* eax_7[2] + xmm3_4 f* eax_7[6] + xmm2_1 f* eax_7[0xa] + xmm4_1 f* eax_7[0xe]
float var_114 = xmm5_1 * xmm6 + xmm3_4 f* eax_7[7] + xmm2_1 * xmm7 + xmm4_1 f* eax_7[0xf]
float xmm5_6 = eax_8[8]
float var_110 = xmm5_6 f* *eax_7 + xmm3_6 f* eax_7[4] + xmm2_3 f* eax_7[8] + xmm4_3 f* eax_7[0xc]
float var_10c = xmm5_6 f* eax_7[1] + xmm3_6 f* eax_7[5] + xmm2_3 f* eax_7[9] + xmm4_3 f* eax_7[0xd]
float xmm3_8 = eax_8[0xd]
float xmm2_5 = eax_8[0xe]
float xmm4_5 = eax_8[0xf]
float var_108 =
    xmm5_6 f* eax_7[2] + xmm3_6 f* eax_7[6] + xmm2_3 f* eax_7[0xa] + xmm4_3 f* eax_7[0xe]
float var_104 = xmm5_6 * xmm6 + xmm3_6 f* eax_7[7] + xmm2_3 * xmm7 + xmm4_3 f* eax_7[0xf]
float xmm5_11 = eax_8[0xc]
float var_100 = xmm5_11 f* *eax_7 + xmm3_8 f* eax_7[4] + xmm2_5 f* eax_7[8] + xmm4_5 f* eax_7[0xc]
float var_fc = xmm5_11 f* eax_7[1] + xmm3_8 f* eax_7[5] + xmm2_5 f* eax_7[9] + xmm4_5 f* eax_7[0xd]
float var_f8 =
    xmm5_11 f* eax_7[2] + xmm3_8 f* eax_7[6] + xmm2_5 f* eax_7[0xa] + xmm4_5 f* eax_7[0xe]
float var_f4 = xmm5_11 * xmm6 + xmm3_8 f* eax_7[7] + xmm2_5 * xmm7 + xmm4_5 f* eax_7[0xf]
sub_47b440(arg2, &var_130)
int32_t result = *(edi_1 + 0x20)

if (result != 0xffffffff)
    int128_t* var_15c_1 = arg2
    result = sub_54cc20(arg2, result, arg4, arg5, arg6, arg7, arg8, arg9, arg10, arg11)

fsbase->NtTib.ExceptionList = ExceptionList
return result
