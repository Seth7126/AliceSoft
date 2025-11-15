// 函数: sub_5baa90
// 地址: 0x5baa90
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f858
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_44 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = *(arg1 + 0x60)
int32_t edi = *(arg1 + 0x64)

if (esi != edi)
    void* ecx = arg1 + 0x48
    void* var_18_1 = ecx
    
    do
        void* eax_3 = *esi
        void* ebx_1 = sub_5c2090(ecx, *(eax_3 + 0x18), *(eax_3 + 0x1c))
        void* var_14 = ebx_1
        
        if (ebx_1 != 0 && *(ebx_1 + 0x34) == 0 && *(ebx_1 + 0x3c) == 0)
            void* eax_4
            
            for (void* i = *(ebx_1 + 0x1c); i != *(ebx_1 + 0x20); i += 0x24)
                float xmm0_1 = *(i + 0x1c)
                xmm0_1 - 1f
                eax_4:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                    | (xmm0_1 < 1f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_5babee
                
                float xmm0_2 = *(i + 0x20)
                xmm0_2 - 1f
                eax_4:1.b = (xmm0_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 1f) ? 1 : 0) << 2
                    | (xmm0_2 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_5babee
            
            void* ecx_1 = *esi
            eax_4.b = *(ecx_1 + 0x21)
            
            if (eax_4.b == 0 && sub_5c3790(ecx_1, var_18_1) != 0)
                int32_t* var_24
                sub_57e3e0(ebx_1 + 0x28, &var_24, 0)
                int32_t var_8_1 = 0
                int32_t* ecx_3 = var_24
                
                if (ecx_3 != 0)
                    __Smtx_lock_shared(&ecx_3[1])
                    int32_t eax_8 = *var_24
                    __Smtx_unlock_shared(&ecx_3[1])
                    
                    if (eax_8 != 0)
                        char eax_9
                        int32_t ecx_5
                        eax_9, ecx_5 = sub_56d600(arg2, eax_8)
                        
                        if (eax_9 == 0)
                            int32_t var_48_7 = eax_8
                            bool eax_11
                            eax_11, ecx_5 = sub_56d680(arg2)
                            
                            if (eax_11 != 0)
                                void* var_48_8 = arg2
                                void** var_4c_4 = &var_14
                                void var_34
                                sub_4f2d40(arg3, &var_34, ecx_5)
                        else
                            void* var_48_6 = arg2
                            void** var_4c_3 = &var_14
                            void var_2c
                            sub_4f2d40(arg3, &var_2c, ecx_5)
                
                int32_t var_8_2 = 0xffffffff
                Concurrency::details::SchedulerBase::~SchedulerBase(&var_24)
        
    label_5babee:
        ecx = var_18_1
        esi = &esi[1]
    while (esi != edi)

int32_t result = sub_56d760(arg2)
fsbase->NtTib.ExceptionList = ExceptionList
return result
