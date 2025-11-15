// 函数: sub_5bac20
// 地址: 0x5bac20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73f888
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_48 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* result = arg1
void* result_1 = result
int32_t* esi = *(result + 0x60)
int32_t edi = *(result + 0x64)

if (esi != edi)
    void* ecx = result + 0x48
    void* var_18_1 = ecx
    
    do
        void* eax_3 = *esi
        result = sub_5c2090(ecx, *(eax_3 + 0x18), *(eax_3 + 0x1c))
        void* result_2 = result
        
        if (result_2 != 0 && *(result_2 + 0x34) == 0 && *(result_2 + 0x3c) == 0)
            for (void* i = *(result_2 + 0x1c); i != *(result_2 + 0x20); i += 0x24)
                float xmm0_1 = *(i + 0x1c)
                xmm0_1 - 1f
                result:1.b = (xmm0_1 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_1, 1f) ? 1 : 0) << 2
                    | (xmm0_1 < 1f ? 1 : 0)
                bool p_2 = unimplemented  {test ah, 0x44}
                
                if (p_2)
                    goto label_5badbc
                
                float xmm0_2 = *(i + 0x20)
                xmm0_2 - 1f
                result:1.b = (xmm0_2 == 1f ? 1 : 0) << 6 | (is_unordered.d(xmm0_2, 1f) ? 1 : 0) << 2
                    | (xmm0_2 < 1f ? 1 : 0)
                bool p_4 = unimplemented  {test ah, 0x44}
                
                if (p_4)
                    goto label_5badbc
            
            void* ecx_1 = *esi
            result.b = *(ecx_1 + 0x21)
            
            if (result.b == 0)
                result = sub_5c3790(ecx_1, var_18_1)
                
                if (result.b != 0)
                    int32_t* var_38
                    sub_57e3e0(result_2 + 0x28, &var_38, 0)
                    int32_t var_8_1 = 0
                    int32_t* ecx_3 = var_38
                    
                    if (ecx_3 != 0)
                        __Smtx_lock_shared(&ecx_3[1])
                        int32_t eax_6 = *var_38
                        __Smtx_unlock_shared(&ecx_3[1])
                        
                        if (eax_6 != 0 && sub_56d600(arg2, eax_6) != 0)
                            int32_t eax_8 = sub_56d870(arg2, eax_6)
                            
                            if (eax_8 != 0xffffffff)
                                void* ecx_6 = *esi
                                int32_t eax_11 = *(result_1 + 0x50) + eax_8
                                *(ecx_6 + 0x1c) = 0
                                *(ecx_6 + 0x18) = eax_11
                                float var_24
                                int32_t* var_4c_7 = &var_24
                                float var_28
                                int32_t* var_50_3 = &var_28
                                float var_2c
                                int32_t* var_54_1 = &var_2c
                                float var_30
                                int32_t* var_58_1 = &var_30
                                char eax_12
                                int32_t ecx_8
                                eax_12, ecx_8 = sub_56d7e0(arg2, eax_6)
                                
                                if (eax_12 != 0)
                                    int32_t var_4c_8 = ecx_8
                                    sub_5c32d0(*esi, var_30, var_2c, var_28, var_24)
                    
                    int32_t var_8_2 = 0xffffffff
                    result = Concurrency::details::SchedulerBase::~SchedulerBase(&var_38)
        
    label_5badbc:
        ecx = var_18_1
        esi = &esi[1]
    while (esi != edi)

fsbase->NtTib.ExceptionList = ExceptionList
return result
