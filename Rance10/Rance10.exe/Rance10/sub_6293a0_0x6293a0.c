// 函数: sub_6293a0
// 地址: 0x6293a0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_7278a8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_40 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ecx = *(arg2 + 0x14)
char* result

if (*(arg2 + 0xc) s< &ecx[1])
label_629506:
    result.b = 0
else
    int32_t eax_3
    
    if (*(arg2 + 0xc) != 0)
        eax_3 = *(arg2 + 8)
    else
        eax_3 = 0
    
    *(arg1 + 0x1c) = *(ecx + eax_3)
    *(arg2 + 0x14) += 4
    int32_t* edx_1 = *(arg2 + 0x14)
    
    if (*(arg2 + 0xc) s< &edx_1[1])
    label_629506_1:
        result.b = 0
    else
        int32_t ecx_1
        
        if (*(arg2 + 0xc) != 0)
            ecx_1 = *(arg2 + 8)
        else
            ecx_1 = 0
        
        int32_t ecx_2 = *(edx_1 + ecx_1)
        *(arg2 + 0x14) = &edx_1[1]
        sub_42c9c0(arg1 + 0x2c, ecx_2)
        result = *(arg1 + 0x2c)
        int32_t ecx_4 = *(arg1 + 0x30)
        
        while (result != ecx_4)
            if (*(arg2 + 0xc) s< *(arg2 + 0x14) + 4)
                goto label_629506_1
            
            int32_t* edi_1
            
            if (*(arg2 + 0xc) != 0)
                edi_1 = *(arg2 + 8)
            else
                edi_1 = nullptr
            
            *result = *(edi_1 + *(arg2 + 0x14))
            result = &result[4]
            *(arg2 + 0x14) += 4
        
        int32_t var_18_1 = 0xf
        int32_t var_1c_1 = 0
        char var_2c = 0
        int32_t var_8_1 = 0
        void* ebx
        
        if (sub_622cd0(arg2, &var_2c).b == 0)
            ebx.b = 0
        else
            result = sub_60a150(**(arg1 + 0x24) + 0x44, &var_2c)
            *(arg1 + 0x38) = result
            void* var_30
            
            if (result == 0)
                ebx.b = 0
            else if (sub_622c00(arg2, &var_30).b == 0)
                ebx.b = 0
            else
                void* edi_2 = var_30
                *(arg1 + 0x14) = 0
                
                if (edi_2 s<= 0)
                    ebx.b = 1
                else if (sub_405df0(arg1 + 0xc, edi_2).b == 0)
                    ebx.b = 0
                else
                    char* eax_7
                    
                    if (*(arg1 + 0x14) != 0)
                        eax_7 = *(arg1 + 0x10)
                    else
                        eax_7 = nullptr
                    
                    if (sub_622bb0(arg2, eax_7, edi_2).b == 0)
                        ebx.b = 0
                    else
                        ebx.b = 1
        
        if (var_18_1 u>= 0x10)
            sub_403160(var_2c.d, var_18_1 + 1, 1)
        
        result.b = ebx.b

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
