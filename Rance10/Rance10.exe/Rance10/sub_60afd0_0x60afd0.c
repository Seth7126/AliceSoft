// 函数: sub_60afd0
// 地址: 0x60afd0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_742da8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_78 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* edx = *(arg2 + 4)
struct _EXCEPTION_REGISTRATION_RECORD** result

if (&edx[4] u> *(arg2 + 8))
label_60b1dd:
    result.b = 0
else
    uint32_t esi_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    *(arg2 + 4) = &edx[4]
    
    if (esi_7 s> 0)
        int32_t var_64
        int32_t var_7c_1 = var_64
        void* var_80_1 = arg1
        sub_60d860(*(arg1 + 0x64), *(arg1 + 0x68))
        *(arg1 + 0x68) = *(arg1 + 0x64)
        sub_60bd60(arg1 + 0x64, esi_7)
        int32_t* i = *(arg1 + 0x64)
        
        for (int32_t edi_2 = *(arg1 + 0x68); i != edi_2; i = &i[0xa])
            if (sub_608e70(i, arg2).b == 0)
                goto label_60b1dd
    
    int32_t ecx_13 = 0xf
    int32_t var_1c_1 = 0
    int32_t var_18_1 = 0xf
    char var_2c = 0
    int32_t var_8_1 = 0
    int32_t* esi_8 = *(arg1 + 0x64)
    result = *(arg1 + 0x68)
    struct _EXCEPTION_REGISTRATION_RECORD** result_1 = result
    void* ebx
    
    if (esi_8 == result)
        ebx.b = 1
    else
        do
            void* edi_3 = esi_8[6]
            ebx = esi_8[7]
            
            if (edi_3 != ebx)
                int32_t* eax_8 = edi_3 + 0x24
                int32_t* var_60_1 = eax_8
                
                do
                    if ((*eax_8 - eax_8[-1]) s>> 2 u> 0x1a)
                        int32_t* eax_9
                        
                        if (esi_8[5] u< 0x10)
                            eax_9 = esi_8
                        else
                            eax_9 = *esi_8
                        
                        int32_t* var_68 = eax_9
                        int32_t var_30_1 = 0xf
                        int32_t var_34_1 = 0
                        char var_44 = 0
                        sub_403490(&var_44, "HLL [%s] Function [%s] Over NumofParameter [%d]\n", 
                            0x30)
                        var_8_1.b = 1
                        void* eax_11
                        
                        if (var_60_1[-3] u< 0x10)
                            eax_11 = &var_60_1[-8]
                        else
                            eax_11 = var_60_1[-8]
                        
                        var_8_1.b = 2
                        char var_5c
                        sub_4055a0(&var_2c, 
                            sub_60cf80(&var_68, &var_44, &var_5c, &var_68, eax_11, 
                                (*var_60_1 - var_60_1[-1]) s>> 2), 
                            0, 0xffffffff)
                        int32_t var_48
                        
                        if (var_48 u>= 0x10)
                            sub_403160(var_5c.d, var_48 + 1, 1)
                        
                        var_8_1.b = 0
                        var_48 = 0xf
                        int32_t var_4c_1 = 0
                        var_5c = 0
                        
                        if (var_30_1 u>= 0x10)
                            sub_403160(var_44.d, var_30_1 + 1, 1)
                        
                        eax_8 = var_60_1
                    
                    edi_3 += 0x30
                    eax_8 = &eax_8[0xc]
                    var_60_1 = eax_8
                while (edi_3 != ebx)
                
                result = result_1
            
            esi_8 = &esi_8[0xa]
        while (esi_8 != result)
        
        if (var_1c_1 == 0)
            ecx_13 = var_18_1
            ebx.b = 1
        else
            ecx_13 = var_18_1
            ebx.b = sub_6c52e0(&var_2c).b
    
    if (ecx_13 u>= 0x10)
        sub_403160(var_2c.d, ecx_13 + 1, 1)
    
    result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
