// 函数: sub_683a80
// 地址: 0x683a80
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746e1f
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* edi = *(arg1 + 0xc)

if (edi != 0)
    void** result_1
    int32_t* arg_4
    sub_4cedf0(arg1 + 4, &result_1, &arg_4)
    void** result_2 = result_1
    int32_t* ebx_2 = arg2
    
    if (result_2 != *(arg1 + 4))
        void* eax_4
        eax_4.b = *(result_2[5] + 0x10)
        void* eax_5
        
        if (eax_4.b == 0)
            eax_5.b = *(result_2[5] + 0x10)
        
        if (eax_4.b != 0 || eax_5.b == ebx_2.b)
            (**result_2[5])(eax_2)
            fsbase->NtTib.ExceptionList = ExceptionList
            return result_2[5]
    
    int32_t* eax_9 = (*(*edi + 0x54))(eax_2)
    
    if (eax_9 != 0)
        if ((*(*eax_9 + 8))(arg_4, ebx_2) != 0)
            int32_t eax_16
            int32_t* result
            
            if (result_2 == *(arg1 + 4))
                result = sub_6e810c(0x14)
                arg2 = result
                int32_t var_8_1 = 0
                result[1] = 1
                *result = &graphengine::CCachedTexture::`vftable'{for `common::NotifyRefCounter<class ITexture>'}
                result[2] = arg1
                result[3] = eax_9
                result[4].b = ebx_2.b
                int32_t ecx_13 = (**eax_9)()
                int32_t var_8_2 = 0xffffffff
                int32_t* var_38_3 = arg_4
                int32_t* ebx_3 = arg_4
                int32_t* var_1c
                int32_t* var_3c_3 = &var_1c
                var_1c = ebx_3
                result_1 = result
                int32_t* var_24
                sub_435350(arg1 + 4, &var_24, ecx_13)
                eax_16 = *ebx_3
            else
                result = result_2[5]
                int32_t* ecx_10 = result[3]
                
                if (ecx_10 != 0)
                    (*(*ecx_10 + 4))()
                
                result[3] = eax_9
                result[4].b = ebx_2.b
                eax_16 = *eax_9
            
            (*eax_16)()
            (**result)()
            (*(*eax_9 + 4))()
            fsbase->NtTib.ExceptionList = ExceptionList
            return result
        
        (*(*eax_9 + 4))()

fsbase->NtTib.ExceptionList = ExceptionList
return 0
