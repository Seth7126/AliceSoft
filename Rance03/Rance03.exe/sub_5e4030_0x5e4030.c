// 函数: sub_5e4030
// 地址: 0x5e4030
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_2 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6cb14b
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* var_10 = arg1
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* i = *(arg1 + 0x454)

if (i != 0)
    void* ebx_1 = arg1 + 0x470
    
    do
        (*(*i + 0xc))(eax_2)
        
        for (int32_t* j = *(arg1 + 0x45c); j != *(arg1 + 0x460); j = &j[1])
            (*(**j + 4))()
        
        *(arg1 + 0x460) = *(arg1 + 0x45c)
        sub_5e0c70(ebx_1)
        int32_t* ecx_2 = *(arg1 + 0x454)
        
        if (ecx_2 != 0)
            (*(*ecx_2 + 4))()
            *(arg1 + 0x454) = 0
        
        int32_t* ecx_3 = data_75d50c
        
        if (ecx_3 != 0)
            (*(*ecx_3 + 4))()
            data_75d50c = 0
        
        if (*(arg1 + 0x484) == 0)
            int32_t result = *(arg1 + 0x16c)
            sub_5e3fa0(arg1)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        sub_5e8360(arg1 + 0x148)
        *(arg1 + 0x484) = 0
        sub_5e3f40(arg1)
        
        if (sub_5e3dd0(arg1) == 0)
            sub_64b530(0x6eaf94)
            goto label_5e425f
        
        void* ebx_2 = data_75d4e0
        void* ecx_7
        
        if (ebx_2 != 0)
            if (*(ebx_2 + 0x20) == 0)
                struct ibis::CMouseCursor::VTable** eax_9 = sub_69adc6(0x40)
                struct ibis::CMouseCursor::VTable** var_10_1 = eax_9
                int32_t var_4 = 0
                struct ibis::CMouseCursor::VTable** eax_10
                
                if (eax_9 == 0)
                    eax_10 = nullptr
                else
                    eax_10 = sub_46d6c0(eax_9)
                
                int32_t var_4_1 = 0xffffffff
                *(ebx_2 + 0x20) = eax_10
            
            ecx_7 = *(ebx_2 + 0x20)
        else
            ecx_7 = nullptr
        
        *(arg1 + 0x25c) = ecx_7
        *(arg1 + 0x2f8) = ecx_7
        *(arg1 + 0x300) = ecx_7
        
        if (ecx_7 != 0)
            sub_46de40(ecx_7, arg1 + 0x3a0)
        
        if (*(arg1 + 0x25c) != 0)
            *(*(arg1 + 0x25c) + 0x3c) = (***(arg1 + 0x39c))(0x6eb718)
        
        void* eax_14 = *(arg1 + 0x2e8)
        
        if (eax_14 != 0)
            *(*(eax_14 + 4) + 0x18) = *(arg1 + 0x25c)
        
        uint32_t eax_16 = timeGetTime()
        EnterCriticalSection(data_74f9b0 + 4)
        uint32_t ebx_3 = data_75dd3c
        CRITICAL_SECTION* lpCriticalSection = data_74f9b0 + 4
        
        if (eax_16 u>= ebx_3)
            data_75dd3c = eax_16
            LeaveCriticalSection(lpCriticalSection)
            ebx_3 = eax_16
        else
            LeaveCriticalSection(lpCriticalSection)
        
        int32_t var_28_4 = *(arg1 + 0x14)
        *(arg1 + 0x3c0) = ebx_3
        
        if (sub_5eaf60(arg1 + 0x450, var_28_4) == 0)
            goto label_5e425f
        
        int32_t* ecx_15 = *(arg1 + 0x454)
        
        if (ecx_15 == 0)
            break
        
        if ((*(*ecx_15 + 8))(arg1, arg1 + 4) == 0)
            break
        
        ebx_1 = arg1 + 0x470
        
        if (*(arg1 + 0x3b8) == 0 && *(arg1 + 0x144) != 0)
            sub_5e0a80(ebx_1)
        
        i = *(arg1 + 0x454)
    while (i != 0)

sub_5e3fa0(arg1)
label_5e425f:
fsbase->NtTib.ExceptionList = ExceptionList
return 0
