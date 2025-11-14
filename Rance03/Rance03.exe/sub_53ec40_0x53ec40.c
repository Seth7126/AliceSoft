// 函数: sub_53ec40
// 地址: 0x53ec40
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_4 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c4630
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_38 = __security_cookie ^ &__saved_edi
struct _EXCEPTION_REGISTRATION_RECORD** result = &ExceptionList
fsbase->NtTib.ExceptionList = &ExceptionList

if (*(arg1 + 0x15c) != 0 && *(arg1 + 0xbc) != 0 && *(arg1 + 0x160) == 0)
    result.b = *(arg1 + 0x11c)
    
    if (result.b == 0)
        int32_t var_24 = 0
        int32_t var_20_1 = 0
        int32_t var_1c_1 = 0
        int32_t var_4 = 0
        void* ecx = *(*(arg1 + 0x15c) + 0x10)
        
        if (ecx != 0)
            sub_54c7a0(ecx, (zx.o(0)).d, &var_24)
            sub_598340(arg1 + 0xd0, &var_24)
        
        sub_598340(arg1 + 0xd0, &var_24)
        int32_t var_4_1 = 0xffffffff
        sub_544550(&var_24)
    
    if (*(arg1 + 0x19c) == 0 || *(arg1 + 0x168) != 0)
    label_53ed81:
        int32_t var_18 = 0
        int32_t var_14_1 = 0
        int32_t var_10_1 = 0
        int32_t var_4_2 = 1
        void* ecx_7 = *(*(arg1 + 0x15c) + 0x10)
        
        if (ecx_7 != 0)
            sub_54c7a0(ecx_7, *(arg1 + 0x12c), &var_18)
            sub_598aa0(arg1 + 0xd0, _mm_cvtepi32_ps(zx.o(arg2)) * 0.00100000005f, &var_18)
        
        sub_598410(arg1 + 0xd0, arg1 + 0x1a4)
        int32_t var_4_3 = 0xffffffff
        result = sub_544550(&var_18)
    else
        void* ebx_1 = *(arg1 + 0x164)
        
        if (ebx_1 == 0)
            goto label_53ed81
        
        void* ebp_1 = *(arg1 + 0x15c)
        int32_t eax_4 = sub_54bea0(ebx_1)
        result = sub_54bea0(ebp_1)
        
        if (result != eax_4)
            goto label_53ed81
        
        void* ecx_6 = *(ebp_1 + 0x10)
        
        if (ecx_6 != 0)
            void* edx_1 = *(ebx_1 + 0x10)
            
            if (edx_1 != 0)
                void* var_40_1 = ecx_6
                result = sub_54c930(ecx_6, *(arg1 + 0x12c), *(arg1 + 0x148), edx_1, 
                    *(arg1 + 0x1a0), arg1 + 0x1a4)

fsbase->NtTib.ExceptionList = ExceptionList
return result
