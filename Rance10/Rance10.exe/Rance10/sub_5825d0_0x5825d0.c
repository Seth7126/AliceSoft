// 函数: sub_5825d0
// 地址: 0x5825d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_4c = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
EnterCriticalSection(*(arg1 + 0x70) + 4)
float eax_5 = *(arg1 + 0x68)
int64_t xmm0 = *(arg1 + 0x60)
LeaveCriticalSection(*(arg1 + 0x70) + 4)
float xmm0_1 = xmm0.d
xmm0_1 - arg2
int32_t* i
i:1.b = (xmm0_1 == arg2 ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, arg2) ? 1 : 0) << 2
    | (xmm0_1 < arg2 ? 1 : 0)
bool p_1 = unimplemented  {test ah, 0x44}

if (p_1)
label_58267b:
    EnterCriticalSection(*(arg1 + 0x70) + 4)
    *(arg1 + 0x60) = _mm_unpacklo_ps(zx.o(arg2.q), arg3)
    *(arg1 + 0x68) = arg4
    LeaveCriticalSection(*(arg1 + 0x70) + 4)
    __Smtx_lock_shared(arg1 + 0x200)
    int32_t esi_1 = *(arg1 + 0x1fc)
    i = __Smtx_unlock_shared(arg1 + 0x200)
    
    if (esi_1 != 0)
        __Smtx_lock_shared(arg1 + 0x200)
        void* edi_2 = *(arg1 + 0x1fc)
        __Smtx_unlock_shared(arg1 + 0x200)
        
        for (i = *(edi_2 + 0x60); i != *(edi_2 + 0x64); i = &i[1])
            void* edx_1
            edx_1.b = *(*i + 0x6d)
            
            if (edx_1.b != 0)
                void* var_50_8 = arg1
                i = sub_563ed0(*(arg1 + 0x210))
                
                if (i.b == 0)
                    void var_2c
                    sub_403360(&var_2c, 0x768054)
                    int32_t var_8_1 = 0
                    sub_5e01e0(&var_2c)
                    i = sub_403320(&var_2c)
                
                break
else
    float xmm0_2 = xmm0:4.d
    xmm0_2 - arg3
    i:1.b = (xmm0_2 == arg3 ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, arg3) ? 1 : 0) << 2
        | (xmm0_2 < arg3 ? 1 : 0)
    bool p_3 = unimplemented  {test ah, 0x44}
    
    if (p_3)
        goto label_58267b
    
    eax_5 - arg4
    i:1.b = (eax_5 == arg4 ? 1 : 0) << 6 | (is_unordered.d(eax_5, arg4) ? 1 : 0) << 2
        | (eax_5 < arg4 ? 1 : 0)
    bool p_5 = unimplemented  {test ah, 0x44}
    
    if (p_5)
        goto label_58267b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return i
