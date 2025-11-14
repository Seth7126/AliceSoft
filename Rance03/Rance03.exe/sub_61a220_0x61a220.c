// 函数: sub_61a220
// 地址: 0x61a220
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_3 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cdd40
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char arg_4
int32_t ebx
ebx.b = arg_4 != 0
int32_t* arg_8
int32_t eax_3
eax_3.b = arg_8.b != 0
int32_t eax_4
eax_4.b = arg2 != 0
int32_t eax_5
eax_5.b = arg3 != 0
int32_t eax_6
eax_6.b = arg4 != 0xffffffff
int32_t* ebx_8 = (((((((ebx * 2) | eax_3) * 2) | eax_4) * 2) | eax_5) * 2) | eax_6
arg_4.d = ebx_8
sub_420040(arg1 + 0x48, &arg_8, &arg_4)
int32_t* eax_7 = arg_8
int32_t* result
int32_t* var_18
int32_t* esi_1

if (eax_7 != *(arg1 + 0x48))
    esi_1 = eax_7[5]
label_61a341:
    int32_t ebx_10 = esi_1[3]
    void* esi_2 = esi_1[2]
    
    if (*(esi_2 + 0x150) != ebx_10)
        int32_t* eax_11 = *(esi_2 + 0x38)
        (*(*eax_11 + 0x24))(eax_11, ebx_10, 0, 0)
        *(esi_2 + 0x150) = ebx_10
    
    if (sub_60a7f0(arg1 + 0x58, *(arg1 + 4)).b == 0)
        result.b = 0
    else
        sub_42f420(&var_18, 4)
        uint32_t eax_14 = zx.d((arg4 u>> 0x10).b)
        int32_t var_4_2 = 1
        int32_t* esi_3 = var_18
        uint32_t eax_18 = zx.d((arg4 u>> 8).b)
        *esi_3 =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_14)) f+ *((eax_14 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        uint32_t eax_20 = zx.d(arg4.b)
        uint32_t ecx_13 = arg4 u>> 0x18
        esi_3[1] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_18)) f+ *((eax_18 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        esi_3[2] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(eax_20)) f+ *((eax_20 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        esi_3[3] =
            _mm_cvtpd_ps(_mm_cvtepi32_pd(zx.q(ecx_13)) f+ *((ecx_13 u>> 0x1f << 3) + &data_709480))
            * 0.00392156886f
        int32_t edx_1 = *(arg1 + 0x5c)
        int32_t* ecx_15 = *(*(arg1 + 4) + 0x38)
        void* ebx_11
        
        if (edx_1 == 0)
            ebx_11.b = 0
        else
            (*(*ecx_15 + 0xc0))(ecx_15, edx_1, 0, 0, esi_3, 0, 0)
            ebx_11.b = 1
        
        j__free(esi_3)
        result.b = ebx_11.b
else
    var_18 = nullptr
    int32_t var_14_1 = 0
    int32_t var_10_1 = 0
    int32_t var_4 = 0
    int32_t* var_30_1 = &var_18
    result = sub_6086f0(arg1 + 8, ebx_8)
    int32_t* ebx_9 = var_18
    
    if (result.b != 0)
        esi_1 = sub_60bf20(*(arg1 + 4))
        
        if (esi_1 != 0)
            void* var_30_2 = var_14_1 - ebx_9
            
            if (sub_60eb10(esi_1, ebx_9) != 0)
                int32_t var_4_1 = 0xffffffff
                *sub_41ff70(arg1 + 0x48, &arg_4) = esi_1
                sub_403510(&var_18)
                goto label_61a341
            
            (*(*esi_1 + 4))(eax_2)
    
    if (ebx_9 == 0)
        result.b = 0
    else
        j__free(ebx_9)
        result.b = 0
fsbase->NtTib.ExceptionList = ExceptionList
return result
