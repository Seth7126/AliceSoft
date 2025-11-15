// 函数: sub_588650
// 地址: 0x588650
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d828
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_c0 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* result

if (*(arg1 + 0x1c) == 0)
    result.b = 1
else
    result.b = *(arg1 + 0x20)
    
    if (result.b != 0)
        result.b = 1
    else
        void* esi_1 = *arg2
        int128_t var_50_1 = data_7e7128
        int128_t var_60_1 = data_7fd4f4
        float var_34_1 = 1f
        void* ebx_1
        
        if (*(esi_1 + 0x1a4) != 0)
            result.b = *(esi_1 + 0x1a8)
            
            if (result.b == 0)
                void** esi_2 = *(esi_1 + 0x1a4)
                __Smtx_lock_shared(&esi_2[1])
                ebx_1 = *esi_2
                __Smtx_unlock_shared(&esi_2[1])
                
                if (ebx_1 != 0)
                    int128_t xmm0_3
                    void var_a0
                    
                    if (*(ebx_1 + 0x34) != *(ebx_1 + 0x38))
                        xmm0_3 = *sub_579760(ebx_1 + 0x34, *(*arg2 + 0x178), &var_a0)
                    else
                        xmm0_3 = data_7e7128
                    var_50_1 = xmm0_3
                    int128_t xmm0_4
                    void var_b0
                    
                    if (*(ebx_1 + 0x40) != *(ebx_1 + 0x44))
                        xmm0_4 = *sub_5796a0(ebx_1 + 0x40, *(*arg2 + 0x178), &var_b0)
                    else
                        xmm0_4 = data_7fd4f4
                    var_60_1 = xmm0_4
                    float xmm0_5
                    void var_84
                    
                    if (*(ebx_1 + 0x4c) != *(ebx_1 + 0x50))
                        xmm0_5 = *sub_579820(ebx_1 + 0x4c, *(*arg2 + 0x178), &var_84)
                    else
                        xmm0_5 = 1f
                    var_34_1 = xmm0_5
            else
                ebx_1 = nullptr
        else
            ebx_1 = nullptr
        
        void* esi_3 = *arg2
        EnterCriticalSection(*(esi_3 + 0x70) + 4)
        int32_t var_88_1 = *(esi_3 + 0x68)
        CRITICAL_SECTION* lpCriticalSection = *(esi_3 + 0x70) + 4
        int64_t var_90 = *(esi_3 + 0x60)
        LeaveCriticalSection(lpCriticalSection)
        sub_5b74e0(*(arg1 + 0x1c) + 0x80, &var_90)
        sub_596120(*(arg1 + 0x1c), *arg2 + 0x80)
        sub_5b7450(*(arg1 + 0x1c) + 0x80, *arg2 + 0xc0)
        *(*(arg1 + 0x1c) + 0x20) = *(*arg2 + 0x10d)
        *(*(arg1 + 0x1c) + 0x21) = *(*arg2 + 0x10e)
        void* eax_22
        eax_22.b = *(*(*arg2 + 0x110) + 8) != 0
        *(*(arg1 + 0x1c) + 0x22) = eax_22.b
        void* eax_23 = *arg2
        void* ecx_14 = *(arg1 + 0x1c) + 0x70
        float xmm2_5 = *(eax_23 + 0xe8) f* var_50_1:4.d
        float xmm1_2 = *(eax_23 + 0xec) f* var_50_1:8.d
        float xmm0_8 = *(eax_23 + 0xf0) f* var_50_1:0xc.d
        float var_70 = var_50_1.d f* *(eax_23 + 0xe4)
        float var_6c_1 = xmm2_5
        float var_68_1 = xmm1_2
        float var_64_1 = xmm0_8
        sub_58e810(ecx_14, *(eax_23 + 0x178), &var_70, ebx_1)
        void* eax_24 = *arg2
        void* ecx_15 = *(arg1 + 0x1c)
        float xmm2_7 = *(eax_24 + 0xf8) f+ var_60_1:4.d
        float xmm1_4 = *(eax_24 + 0xfc) f+ var_60_1:8.d
        float xmm0_10 = *(eax_24 + 0x100) f+ var_60_1:0xc.d
        float var_80 = *(eax_24 + 0xf4) f+ var_60_1.d
        float var_7c_1 = xmm2_7
        float var_78_1 = xmm1_4
        float var_74_1 = xmm0_10
        sub_58e950(ecx_15 + 0x70, *(eax_24 + 0x178), &var_80, ebx_1)
        void* eax_25 = *arg2
        sub_58ea90(*(arg1 + 0x1c) + 0x70, *(eax_25 + 0x104) * var_34_1, *(eax_25 + 0x178), ebx_1)
        int32_t edx_1 = 0
        int32_t xmm0_11 = *(*arg2 + 0x108)
        void* eax_27 = *(arg1 + 0x1c)
        int32_t* ecx_19 = *(eax_27 + 0x74)
        int32_t eax_28 = *(eax_27 + 0x78)
        uint32_t esi_8 = (eax_28 - ecx_19 + 3) u>> 2
        
        if (ecx_19 u> eax_28)
            esi_8 = 0
        
        if (esi_8 != 0)
            do
                void* eax_29 = *ecx_19
                ecx_19 = &ecx_19[1]
                edx_1 += 1
                *(eax_29 + 0x60) = xmm0_11
            while (edx_1 != esi_8)
        
        *(*arg2 + 0x178)
        int32_t ecx_22 = sub_58eb70(eax_27 + 0x70, ebx_1)
        void* eax_31 = *arg2
        int32_t var_cc_1 = ecx_22
        
        if (sub_596180(*(arg1 + 0x1c), eax_31 + 0x164, arg3, arg4, *(eax_31 + 0x23c), arg5, arg6).b
                != 0)
            result.b = 1
        else
            void var_30
            sub_403360(&var_30, 0x768424)
            int32_t var_8_1 = 0
            sub_5e01e0(&var_30)
            sub_403320(&var_30)
            result.b = 0

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
