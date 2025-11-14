// 函数: sub_59eed0
// 地址: 0x59eed0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_6c88d0
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* var_14 = &var_2c
int32_t var_8_1 = 0

if (arg1[1] == 0)
    int32_t var_30 = arg5
    sub_59f140(arg1, arg2, 1, *arg1, arg1)
    fsbase->NtTib.ExceptionList = ExceptionList
    return arg2

int32_t* ecx_2 = *arg1
int32_t* ecx_4

if (arg3 == *ecx_2)
    char eax_6
    eax_6, ecx_4 = sub_59e060(arg4, &arg3[4])
    
    if (eax_6 != 0)
        int32_t var_30_2 = arg5
        sub_59f140(arg1, arg2, 1, arg3, ecx_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
else if (arg3 != ecx_2)
    char eax_12 = sub_59e060(arg4, &arg3[4])
    void** var_18
    char eax_14
    int32_t* ecx_16
    void** esi_4
    
    if (eax_12 != 0)
        var_18 = arg3
        sub_418580(&var_18)
        esi_4 = var_18
        eax_14, ecx_16 = sub_59e060(&esi_4[4], arg4)
    
    int32_t* var_34_3
    int32_t* ecx_17
    
    if (eax_12 != 0 && eax_14 != 0)
        int32_t var_30_7 = arg5
        var_34_3 = ecx_16
        ecx_17 = arg1
        
        if (*(esi_4[2] + 0xd) != 0)
            goto label_59f004
        
        sub_59f140(ecx_17, arg2, 1, arg3, var_34_3)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2
    
    char eax_18
    eax_18, ecx_4 = sub_59e060(&arg3[4], arg4)
    
    if (eax_18 != 0)
        esi_4 = arg3
        var_18 = esi_4
        ecx_4 = sub_418380(&var_18)
        void** edi_2 = var_18
        
        if (edi_2 == *arg1)
            goto label_59f07e
        
        char eax_20
        eax_20, ecx_4 = sub_59e060(arg4, &edi_2[4])
        
        if (eax_20 != 0)
            esi_4 = arg3
        label_59f07e:
            int32_t var_30_10 = arg5
            var_34_3 = ecx_4
            ecx_17 = arg1
            
            if (*(esi_4[2] + 0xd) == 0)
                sub_59f140(ecx_17, arg2, 1, edi_2, var_34_3)
                fsbase->NtTib.ExceptionList = ExceptionList
                return arg2
            
        label_59f004:
            sub_59f140(ecx_17, arg2, 0, esi_4, var_34_3)
            fsbase->NtTib.ExceptionList = ExceptionList
            return arg2
else
    char eax_8
    eax_8, ecx_4 = sub_59e060(ecx_2[2] + 0x10, arg4)
    
    if (eax_8 != 0)
        int32_t var_30_4 = arg5
        sub_59f140(arg1, arg2, 0, *(*arg1 + 8), ecx_4)
        fsbase->NtTib.ExceptionList = ExceptionList
        return arg2

int32_t var_30_11 = arg5
int32_t var_8_2 = 0xffffffff
void* var_34_4 = arg4
void* var_1c
*arg2 = *sub_59f320(arg1, &var_1c, ecx_4)
fsbase->NtTib.ExceptionList = ExceptionList
return arg2
