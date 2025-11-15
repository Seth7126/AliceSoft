// 函数: sub_589150
// 地址: 0x589150
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73d8ae
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = *(arg1 + 0x50)

if (result.b == 0)
    result.b = *(arg1 + 0x50)
    
    if (result.b == 0 && *(arg1 + 0x54) != 0)
        if (sub_5890f0(arg1, arg3).b != 0)
            goto label_5891b7
        
    label_58919e:
        result.b = 0
        fsbase->NtTib.ExceptionList = ExceptionList
        return result
    
label_5891b7:
    struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
        * esi_2 = *arg2
    result = esi_2->__offset(0x220).d
    
    if (result != 0)
        void* ecx_4 = *(arg1 + 0x4c)
        
        if (ecx_4 == 0)
        label_589272:
            void* eax_11 = esi_2->__offset(0x224).d
            int32_t ecx_9 = esi_2->__offset(0x220).d
            
            if (eax_11 != 0)
                *(eax_11 + 4) += 1
            
            int32_t* esi_3 = *(arg1 + 0x58)
            *(arg1 + 0x58) = eax_11
            *(arg1 + 0x54) = ecx_9
            int32_t var_8_2 = 3
            
            if (esi_3 != 0)
                bool cond:2_1 = esi_3[1] != 1
                esi_3[1]
                esi_3[1] -= 1
                
                if (not(cond:2_1))
                    (**esi_3)(eax_2)
                    bool cond:5_1 = esi_3[2] != 1
                    esi_3[2]
                    esi_3[2] -= 1
                    
                    if (not(cond:5_1))
                        (*(*esi_3 + 4))()
            
            void var_24
            int32_t* eax_16 = std::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >::basic_string<uint16_t,struct std::char_traits<uint16_t>,class std::allocator<uint16_t> >(
                &var_24, arg2)
            int32_t edx_2 = eax_16[1]
            eax_16[1] = *(arg1 + 0x60)
            *(arg1 + 0x60) = edx_2
            int32_t ecx_14 = *eax_16
            *eax_16 = *(arg1 + 0x5c)
            *(arg1 + 0x5c) = ecx_14
            int32_t var_8_3 = 4
            int32_t* var_20
            
            if (var_20 != 0)
                bool cond:4_1 = var_20[1] != 1
                var_20[1]
                var_20[1] -= 1
                
                if (not(cond:4_1))
                    (**var_20)(eax_2)
                    int32_t ebx_2 = var_20[2]
                    var_20[2] -= 1
                    
                    if (ebx_2 == 1)
                        (*(*var_20 + 4))()
            
            int32_t var_8_4 = 0xffffffff
            int32_t eax_17
            eax_17.b = 1
            char temp0_5 = *(arg1 + 0x50)
            *(arg1 + 0x50) = 1
            eax_17.b = temp0_5
            
            if (*(arg1 + 0x80) == 0)
                if (sub_589390(arg1).b == 0)
                    goto label_58919e
                
                if (sub_5890f0(arg1, arg3).b == 0)
                    goto label_58919e
            else
                struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** eax_20 = sub_6e810c(0x10)
                arg2 = eax_20
                eax_20[1] = 1
                *eax_20 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
                eax_20[2] = arg1
                eax_20[3] = sub_589390
                struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** var_38_4 = eax_20
                sub_406700(*(arg1 + 0x7c))
        else
            struct _EXCEPTION_REGISTRATION_RECORD* eax_4 = *result
            int32_t* ecx_5 = ecx_4 + 8
            int32_t* vFunc_1 = &esi_2->vFunc_1
            
            if (esi_2->__offset(0x18).d u>= 0x10)
                vFunc_1 = esi_2->vFunc_1
            
            void* eax_7 = &ecx_5[4]
            
            if (ecx_5[5] u>= 0x10)
                ecx_5 = *ecx_5
            
            int32_t vFunc_2 = *eax_7
            int32_t vFunc_0 = esi_2[1].vFunc_0
            int32_t vFunc = vFunc_0
            
            if (vFunc_2 u< vFunc_0)
                vFunc = vFunc_2
            
            int32_t eax_8 = sub_406ac0(vFunc, vFunc_1, ecx_5, vFunc)
            int32_t eax_9
            
            if (eax_8 == 0)
                eax_9 = *eax_7
            
            if (eax_8 != 0 || eax_9 u< vFunc_0 || eax_9 u> vFunc_0 || (*(arg1 + 0x4c))[8] != eax_4)
                int32_t* ecx_8 = *(arg1 + 0x4c)
                *(arg1 + 0x4c) = 0
                
                if (ecx_8 != 0)
                    int32_t var_8_1 = 1
                    (*(*ecx_8 + 0x1c))(1)
                
                goto label_589272
    else if (*(arg1 + 0x4c) != result)
        int32_t* ecx_2 = *(arg1 + 0x4c)
        *(arg1 + 0x4c) = result
        
        if (ecx_2 != 0)
            struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
            (*(*ecx_2 + 0x1c))(1)
        
        sub_57e9e0(*(arg1 + 0x88))

result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
return result
