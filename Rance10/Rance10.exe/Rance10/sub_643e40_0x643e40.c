// 函数: sub_643e40
// 地址: 0x643e40
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_746558
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = data_7fcb88
struct _EXCEPTION_REGISTRATION_RECORD** result

if (ecx == 0)
    result.b = 0
else
    struct _EXCEPTION_REGISTRATION_RECORD** ebx_1 = (**ecx)(0x76daf4)
    
    if (ebx_1 == 0)
        result.b = 0
    else
        int32_t* ecx_1 = data_7fcbd4
        
        if (ecx_1 == 0)
            result.b = 0
        else
            (**ecx_1)(eax_2)
            int32_t* esi_1 = data_7fcbd4
            
            if (esi_1 == 0)
                result.b = 0
            else
                int32_t* edi_1 = data_7fcb5c
                
                if (edi_1 == 0)
                    result.b = 0
                else
                    void var_2c
                    sub_403360(&var_2c, (*ebx_1)->__offset(0xc).d())
                    int32_t var_8_1 = 0
                    void var_5c
                    char* eax_7 = sub_405070(&var_5c, &var_2c)
                    var_8_1.b = 1
                    var_8_1.b = 2
                    void var_44
                    sub_641f50(sub_4176f0(eax_7.b, eax_7, &var_44, "Font.fnl"))
                    sub_403320(&var_44)
                    var_8_1.b = 0
                    sub_403320(&var_5c)
                    sub_641df0(esi_1)
                    sub_641ea0(edi_1)
                    void* ebx_2 = data_7fcbc8
                    int32_t* ecx_8 = *(ebx_2 + 4)
                    
                    if (ecx_8 != 0)
                        (*(*ecx_8 + 4))()
                        *(ebx_2 + 4) = 0
                    
                    *(ebx_2 + 4) = esi_1
                    (**esi_1)()
                    void* ebx_3 = data_7fcbc8
                    int32_t* ecx_10 = *(ebx_3 + 8)
                    
                    if (ecx_10 != 0)
                        (*(*ecx_10 + 4))()
                        *(ebx_3 + 8) = 0
                    
                    *(ebx_3 + 8) = edi_1
                    (**edi_1)()
                    (*(*edi_1 + 4))()
                    (*(*esi_1 + 4))()
                    sub_403320(&var_2c)
                    result.b = 1

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
