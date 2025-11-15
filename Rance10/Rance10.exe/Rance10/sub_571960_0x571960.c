// 函数: sub_571960
// 地址: 0x571960
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) =
    __ehhandler$?_Makeloc@_Locimp@locale@std@@CAPAV123@ABV_Locinfo@3@HPAV123@PBV23@@Z
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = arg4
int128_t* eax_3
int32_t edx_2
edx_2:eax_3 = muls.dp.d(0x2aaaaaab, ecx[0x1f] - ecx[0x1e])
int32_t edx_3 = edx_2 s>> 2
int32_t ebx_2 = (edx_3 u>> 0x1f) + edx_3

if (ebx_2 s<= 0)
    __seterrormode(arg1 + 8)
    int32_t var_8_1 = 0
    int32_t* ecx_1 = *(arg1 + 4)
    
    if (ecx_1 != 0)
        *(arg1 + 4) = 0
        (*(*ecx_1 + 4))(eax_2)
    
    ___crtSetUnhandledExceptionFilter(arg1 + 8)
    *(arg1 + 0xc) = 0
    int32_t result
    result.b = 1
    fsbase->NtTib.ExceptionList = ExceptionList
    return result

int128_t* esi_1 = nullptr
void* var_24 = nullptr
int128_t* var_20 = nullptr
int32_t var_1c = 0
int32_t var_8_2 = 1

if (ebx_2 != 0)
    if (ebx_2 u> 0x7ffffff)
        sub_6d0927("vector<T> too long")
        noreturn
    
    eax_3 = sub_5712e0(&var_24, ebx_2)
    esi_1 = var_20
    ecx = arg4

int32_t edi_1 = 0

if (ebx_2 s> 0)
    int32_t var_5c_1 = 0xff00ff00
    int32_t var_4c_1 = 0xffff0000
    int32_t var_14_1 = 0
    
    do
        float var_3c
        sub_5715f0(eax_3, edi_1, &var_3c, arg3, ecx)
        int32_t* edx_6 = arg4[0x1b] + *(var_14_1 + arg4[0x1e] + 0xc) * 0x24
        float var_30
        int32_t ecx_9 = sub_571ba0(&edx_6[3], edx_6, &var_30, arg3, &edx_6[3], &edx_6[6])
        float xmm6_1[0x4] = var_30
        int32_t var_2c
        int64_t xmm5_1 = var_2c
        float xmm4_2[0x4] = xmm6_1[0] + var_3c * 0.0500000007f
        int64_t xmm6_2 = _mm_unpacklo_ps(xmm6_1, xmm5_1)
        var_30.q = xmm6_2
        float var_38
        int64_t xmm4_3 = _mm_unpacklo_ps(xmm4_2, xmm5_1.d + var_38 * 0.0500000007f)
        float var_34
        int128_t* var_28
        float var_60_1 = var_28 + var_34 * 0.0500000007f
        eax_3 = var_28
        int128_t* var_50_1 = eax_3
        
        if (esi_1 == var_1c)
            int32_t var_80_5 = ecx_9
            eax_3 = sub_571180(&var_24)
            esi_1 = var_20
        
        if (esi_1 != 0)
            *esi_1 = xmm6_2.o
            esi_1[1] = xmm4_3.o
        
        var_14_1 += 0x18
        esi_1 = &esi_1[2]
        ecx = arg4
        edi_1 += 1
        var_20 = esi_1
    while (edi_1 s< ebx_2)

*(arg1 + 0x14) = *arg2
*(arg1 + 0x24) = arg2[1]
*(arg1 + 0x34) = arg2[2]
*(arg1 + 0x44) = arg2[3]
char eax_12 = sub_58b7f0(arg1, &var_24, &data_7e7128, 1, 1, arg5)
void* edx_7 = var_24
ebx_2.b = eax_12 != 0

if (edx_7 != 0)
    sub_403160(edx_7, (var_1c - edx_7) s>> 5, 0x20)

fsbase->NtTib.ExceptionList = ExceptionList
return ebx_2.b
