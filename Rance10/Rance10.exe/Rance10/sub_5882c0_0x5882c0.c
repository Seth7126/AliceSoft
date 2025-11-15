// 函数: sub_5882c0
// 地址: 0x5882c0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73befc
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[0x20] == 0)
    if (arg1[0x20] == 0)
        __Smtx_lock_shared(&arg1[0x18])
        int32_t esi_1 = *(arg1 + 0x14)
        __Smtx_unlock_shared(&arg1[0x18])
        
        if (esi_1 != 0)
            if (sub_595eb0(*(arg1 + 0x1c), arg4) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            sub_568430(&arg1[0x14])
    
    int32_t* edi_2 = *arg2
    __Smtx_lock_shared(&edi_2[0x80])
    int32_t edi_3 = edi_2[0x7f]
    __Smtx_unlock_shared(&edi_2[0x80])
    
    if (edi_3 != 0)
        if (*(arg1 + 0x1c) == 0)
        label_58842e:
            __seterrormode(&edi_2[0x80])
            sub_589d80(&arg1[0x14], edi_2[0x7f])
            ___crtSetUnhandledExceptionFilter(&edi_2[0x80])
            arg1[0x21] = arg3
            void* eax_11
            eax_11.b = 1
            char temp0_1 = arg1[0x20]
            arg1[0x20] = 1
            eax_11.b = temp0_1
            
            if (arg1[0x80] == 0)
                if (sub_5884e0(arg1) == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                if (sub_595eb0(*(arg1 + 0x1c), arg4) == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                sub_568430(&arg1[0x14])
            else
                struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** eax_12 = sub_6e810c(0x10)
                arg3.d = eax_12
                eax_12[1] = 1
                *eax_12 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
                eax_12[2] = arg1
                eax_12[3] = sub_5884e0
                struct common::SuicideRefCounter<class IWorkerThread>::thread::CWorkerThread<class sealengine::CInstanceView, bool>::VTable
                    ** var_30_13 = eax_12
                sub_406700(*(arg1 + 0x7c))
        else
            __Smtx_lock_shared(&edi_2[0x80])
            int32_t eax_8 = edi_2[0x7f]
            __Smtx_unlock_shared(&edi_2[0x80])
            void* edi_4 = *(arg1 + 0x1c)
            __Smtx_lock_shared(edi_4 + 0xc)
            int32_t edi_5 = *(edi_4 + 8)
            __Smtx_unlock_shared(edi_4 + 0xc)
            
            if (edi_5 != eax_8 || *(edi_4 + 0x24c) != arg3)
                int32_t* ecx_7 = *(arg1 + 0x1c)
                *(arg1 + 0x1c) = 0
                
                if (ecx_7 != 0)
                    int32_t var_8_2 = 1
                    (*(*ecx_7 + 0x1c))(1)
                    int32_t var_8_3 = 0xffffffff
                
                sub_57e9e0(*(arg1 + 0x88))
                goto label_58842e
    else if (*(arg1 + 0x1c) != edi_3)
        int32_t* ecx_4 = *(arg1 + 0x1c)
        *(arg1 + 0x1c) = edi_3
        
        if (ecx_4 != 0)
            int32_t var_8_1 = edi_3
            (*(*ecx_4 + 0x1c))(1)
        
        sub_57e9e0(*(arg1 + 0x88))

fsbase->NtTib.ExceptionList = ExceptionList
return 1
