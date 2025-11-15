// 函数: sub_4a57d0
// 地址: 0x4a57d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_731468
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t arg_8
int32_t esi = arg_8
int32_t arg_14
int32_t eax_3 = arg_14
int32_t arg_10
int32_t edi = arg_10
int32_t arg_c
int32_t edx = arg_c

if ((esi != 0 || edx != 0 || edi != *(arg1 + 0x6c) || eax_3 != *(arg1 + 0x70)) && edi s>= 1
        && eax_3 s>= 1)
    int32_t ebx_1 = edx + eax_3
    arg_14 = esi
    int32_t eax_4 = *(arg1 + 0x6c)
    int32_t edi_1 = edi + esi
    int32_t var_1c = edi_1
    arg_c = edx
    int32_t var_24 = ebx_1
    
    if (eax_4 s> esi && edi_1 s> 0)
        int32_t ecx = *(arg1 + 0x70)
        
        if (ecx s> edx && ebx_1 s> 0)
            arg_10 = 0
            arg_8 = 0
            int32_t* eax_5 = &arg_14
            
            if (esi s<= 0)
                eax_5 = &arg_10
            
            arg_14 = *eax_5
            int32_t* eax_7 = &arg_c
            
            if (edx s<= 0)
                eax_7 = &arg_8
            
            arg_10 = eax_4
            arg_8 = *eax_7
            int32_t* eax_9 = &var_1c
            
            if (edi_1 s>= eax_4)
                eax_9 = &arg_10
            
            int32_t* eax_10 = &var_24
            int32_t esi_2 = *eax_9 - arg_14
            arg_10 = ecx
            
            if (ebx_1 s>= ecx)
                eax_10 = &arg_10
            
            int32_t ebx_3 = *eax_10 - arg_8
            void var_20
            int32_t* eax_12 = sub_432270(&var_20, sub_69d9a0())
            int32_t var_28 = 0
            var_24 = 0
            sub_4323a0(&var_28, eax_12)
            int32_t var_8_1 = 0
            sub_431b10(&var_20)
            
            if (sub_451b90(&var_28) != 0)
                int32_t eax_15 = (*(*sub_431af0(&var_28) + 0xc))(esi_2, ebx_3, 0x20)
                
                if (eax_15 != 0)
                    (*(*data_7fcb5c + 0x5c))(eax_15, 0, 0, arg2, arg_14, arg_8, esi_2, ebx_3)
                    (*(*arg2 + 4))(eax_2)
                    sub_431b10(&var_28)
                    fsbase->NtTib.ExceptionList = ExceptionList
                    return eax_15
            
            sub_431b10(&var_28)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2

fsbase->NtTib.ExceptionList = ExceptionList
return arg2
