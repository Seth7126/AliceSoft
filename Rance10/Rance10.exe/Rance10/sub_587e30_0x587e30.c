// 函数: sub_587e30
// 地址: 0x587e30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72e8ac
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_28 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList

if (arg1[4].b == 0)
    if (arg1[4].b == 0)
        __Smtx_lock_shared(&arg1[6])
        int32_t esi_1 = arg1[5]
        __Smtx_unlock_shared(&arg1[6])
        
        if (esi_1 != 0)
            if (sub_5c3df0(arg1[3], arg3) == 0)
                fsbase->NtTib.ExceptionList = ExceptionList
                return 0
            
            sub_568430(&arg1[5])
    
    int32_t* edi_2 = *arg2
    __Smtx_lock_shared(&edi_2[0x80])
    int32_t edi_3 = edi_2[0x7f]
    __Smtx_unlock_shared(&edi_2[0x80])
    
    if (edi_3 != 0)
        if (arg1[3] == 0)
        label_587f89:
            __seterrormode(&edi_2[0x80])
            sub_589d80(&arg1[5], edi_2[0x7f])
            ___crtSetUnhandledExceptionFilter(&edi_2[0x80])
            int32_t eax_11
            eax_11.b = 1
            arg1[4].b = 1
            eax_11.b = arg1[4].b
            
            if (arg1[0x20].b == 0)
                if (sub_588030(arg1) == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                if (sub_5c3df0(arg1[3], arg3) == 0)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return 0
                
                sub_568430(&arg1[5])
            else
                int32_t* eax_12 = sub_6e810c(0x10)
                arg3 = eax_12
                eax_12[1] = 1
                *eax_12 = &thread::CWorkerThread<class sealengine::CInstanceView, bool>::`vftable'{for `common::SuicideRefCounter<class IWorkerThread>'}
                eax_12[2] = arg1
                eax_12[3] = sub_588030
                int32_t* var_2c_13 = eax_12
                sub_406700(arg1[0x1f])
        else
            __Smtx_lock_shared(&edi_2[0x80])
            int32_t eax_8 = edi_2[0x7f]
            __Smtx_unlock_shared(&edi_2[0x80])
            void* edi_4 = arg1[3]
            __Smtx_lock_shared(edi_4 + 0xc)
            int32_t edi_5 = *(edi_4 + 8)
            __Smtx_unlock_shared(edi_4 + 0xc)
            
            if (edi_5 != eax_8)
                int32_t* ecx_6 = arg1[3]
                arg1[3] = 0
                
                if (ecx_6 != 0)
                    int32_t var_8_2 = 1
                    (*(*ecx_6 + 0x1c))(1)
                    int32_t var_8_3 = 0xffffffff
                
                sub_57e9e0(arg1[0x22])
                goto label_587f89
    else if (arg1[3] != edi_3)
        int32_t* ecx_4 = arg1[3]
        arg1[3] = edi_3
        
        if (ecx_4 != 0)
            int32_t var_8_1 = edi_3
            (*(*ecx_4 + 0x1c))(1)
        
        sub_57e9e0(arg1[0x22])

fsbase->NtTib.ExceptionList = ExceptionList
return 1
