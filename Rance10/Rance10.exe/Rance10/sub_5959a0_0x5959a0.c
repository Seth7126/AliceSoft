// 函数: sub_5959a0
// 地址: 0x5959a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73e046
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_110 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
sub_595f90(arg1)
int32_t* ebx = arg2
__Smtx_lock_shared(&ebx[1])
void* edi = *ebx
__Smtx_unlock_shared(&ebx[1])
void* var_114_2 = arg4
int32_t var_118 = 1
int32_t* var_1c
sub_5688b0(arg1 + 0x68, sub_5cc810(*(arg1 + 0x2d0), &var_1c, edi))
SRWLOCK var_18
__seterrormode(&var_18)
int32_t var_8_1 = 0
int32_t* ecx_2 = var_1c

if (ecx_2 != 0)
    var_1c = nullptr
    int32_t edx_1 = ecx_2[1]
    ecx_2[1] -= 1
    (**ecx_2)(edx_1 - 1)

int32_t var_8_2 = 0xffffffff
___crtSetUnhandledExceptionFilter(&var_18)
__Smtx_lock_shared(arg1 + 0x6c)
int32_t edi_2 = *(arg1 + 0x68)
__Smtx_unlock_shared(arg1 + 0x6c)

if (edi_2 != 0)
    __Smtx_lock_shared(arg1 + 0x6c)
    char* ebx_4 = *(arg1 + 0x68)
    __Smtx_unlock_shared(arg1 + 0x6c)
    __Smtx_lock_shared(&ebx[1])
    int32_t* edi_5 = *arg2
    __Smtx_unlock_shared(&ebx[1])
    
    if (sub_58e310(arg1 + 0x70, edi_5, arg1 + 0x20, ebx_4).b != 0)
        __Smtx_lock_shared(&ebx[1])
        int32_t** ebx_5 = arg2
        int32_t* edi_6 = *ebx_5
        __Smtx_unlock_shared(&ebx[1])
        *(arg1 + 0x230) = sub_5bb530(edi_6)
        __Smtx_lock_shared(&ebx[1])
        int32_t* edi_7 = *ebx_5
        __Smtx_unlock_shared(&ebx[1])
        int32_t ecx_10 = edi_7[0x16] - edi_7[0x15]
        *(arg1 + 0x18) = *(arg1 + 0x14)
        sub_58cf40(arg1 + 0x14, ecx_10 s/ 0x3c)
        __Smtx_lock_shared(&ebx[1])
        int32_t* edi_11 = *ebx_5
        __Smtx_unlock_shared(&ebx[1])
        sub_58cf40(arg1 + 0x240, (edi_11[0x16] - edi_11[0x15]) s/ 0x3c)
        arg2 = nullptr
        __builtin_memset(&var_18, 0, 4)
        arg4 = nullptr
        
        while (true)
            __Smtx_lock_shared(&ebx[1])
            int32_t* edi_12 = *ebx_5
            __Smtx_unlock_shared(&ebx[1])
            int128_t var_64
            int128_t var_54
            int128_t var_44
            int128_t var_34
            
            if (arg2 s>= (edi_12[0x16] - edi_12[0x15]) s/ 0x3c)
                __Smtx_lock_shared(&ebx[1])
                int32_t* edi_16 = *ebx_5
                __Smtx_unlock_shared(&ebx[1])
                int32_t* xmm1_16 = edi_16[0xc]
                int32_t* xmm0_29 = *(arg1 + 0x80)
                xmm0_29 f- xmm1_16
                int32_t eax_30
                eax_30:1.b = (xmm0_29 f== xmm1_16 ? 1 : 0) << 6
                    | (is_unordered.d(xmm0_29, xmm1_16) ? 1 : 0) << 2
                    | (xmm0_29 f< xmm1_16 ? 1 : 0)
                bool p_1 = unimplemented  {test ah, 0x44}
                
                if (p_1)
                    *(arg1 + 0x80) = xmm1_16
                    int32_t* var_20 = xmm1_16
                    var_1c = xmm1_16
                    var_18 = xmm1_16
                    sub_6cae40(&var_64, &var_20)
                    int128_t xmm0_30 = var_64
                    *(arg1 + 0x1e8) = 1
                    *(arg1 + 0xe8) = xmm0_30
                    *(arg1 + 0xf8) = var_54
                    *(arg1 + 0x108) = var_44
                    *(arg1 + 0x118) = var_34
                
                __Smtx_lock_shared(&ebx[1])
                int32_t* edi_19 = *ebx_5
                __Smtx_unlock_shared(&ebx[1])
                sub_5b73c0(arg1 + 0x80, &edi_19[9])
                __seterrormode(&ebx[1])
                sub_589d80(arg1 + 8, *ebx_5)
                ___crtSetUnhandledExceptionFilter(&ebx[1])
                *(arg1 + 0x24c) = arg3
                fsbase->NtTib.ExceptionList = ExceptionList
                return 1
            
            __Smtx_lock_shared(&ebx[1])
            int32_t* edi_13 = *ebx_5
            __Smtx_unlock_shared(&ebx[1])
            
            if (arg4 s< 0)
                break
            
            if (arg2 s>= (edi_13[0x16] - edi_13[0x15]) s/ 0x3c)
                break
            
            int32_t eax_24 = edi_13[0x15]
            int128_t var_80 = *(arg4 + eax_24 + 0x20)
            int64_t xmm0_2 = *(arg4 + eax_24 + 0x30)
            int32_t var_118_2 = *(arg4 + eax_24 + 0x38)
            int32_t var_11c_2 = xmm0_2:4.d
            int32_t var_120_1 = xmm0_2.d
            void var_c0
            sub_561770(&var_c0)
            float var_100[0x10]
            float* eax_26 = sub_6cbac0(&var_80, &var_100)
            float xmm7_1 = *eax_26
            var_64:4.d = eax_26[1]
            float xmm4_1 = eax_26[4]
            var_64:8.d = eax_26[2]
            var_64:0xc.d = eax_26[3]
            float xmm2_1 = eax_26[8]
            var_54:4.d = eax_26[5]
            var_54:8.d = eax_26[6]
            var_54:0xc.d = eax_26[7]
            var_44:0xc.d = eax_26[0xb]
            var_64.d = xmm7_1
            float xmm3_1 = eax_26[9]
            var_54.d = xmm4_1
            float xmm5_1 = eax_26[0xa]
            var_44.d = xmm2_1
            var_44:4.d = xmm3_1
            var_44:8.d = xmm5_1
            float var_90
            float var_8c
            float var_88
            var_34.d = var_90 * xmm7_1 + var_8c * xmm4_1 + var_88 * xmm2_1 + eax_26[0xc]
            var_34:4.d = var_90 * eax_26[1] + var_8c * eax_26[5] + var_88 * xmm3_1 + eax_26[0xd]
            var_34:8.d = var_90 * eax_26[2] + var_8c * eax_26[6] + var_88 * xmm5_1 + eax_26[0xe]
            SRWLOCK ecx_22 = var_18
            int128_t xmm0_25 = var_64
            arg2 += 1
            arg4 += 0x3c
            int128_t* eax_29 = *(arg1 + 0x240) + ecx_22
            var_34:0xc.d =
                var_8c * eax_26[7] + var_90 * eax_26[3] + var_88 * eax_26[0xb] + eax_26[0xf]
            var_18 = ecx_22 + 0x40
            *eax_29 = xmm0_25
            eax_29[1] = var_54
            eax_29[2] = var_44
            eax_29[3] = var_34

void* result
result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
