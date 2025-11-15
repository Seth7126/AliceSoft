// 函数: sub_625aa0
// 地址: 0x625aa0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_726eb8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_48 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
char* ebx = arg1
char* var_34 = ebx
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
int32_t var_8_1 = 0
struct _EXCEPTION_REGISTRATION_RECORD** result

if (sub_61ed80(arg2, &var_30).b == 0)
labelid_5:
    ebx.b = 0
else
    if (ebx != &var_30)
        sub_403590(ebx, &var_30, 0, 0xffffffff)
    
    char* edx_1 = *(arg2 + 4)
    
    if (&edx_1[4] u> *(arg2 + 8))
    labelid_5:
        ebx.b = 0
    else
        uint32_t ecx_8 =
            ((zx.d(edx_1[3]) << 8 | zx.d(edx_1[2])) << 8 | zx.d(edx_1[1])) << 8 | zx.d(*edx_1)
        *(arg2 + 4) = &edx_1[4]
        sub_625cb0(&ebx[0x18], ecx_8)
        result = *(ebx + 0x18)
        int32_t ecx_10 = *(ebx + 0x1c)
        
        if (result != ecx_10)
            do
                if (*(arg2 + 4) + 4 u> *(arg2 + 8))
                    goto label_625c71_2
                
                char* edi_2 = *(arg2 + 4)
                *result = ((zx.d(edi_2[3]) << 8 | zx.d(edi_2[2])) << 8 | zx.d(edi_2[1])) << 8
                    | zx.d(*edi_2)
                *(arg2 + 4) += 4
                ebx = *(arg2 + 4)
                
                if (&ebx[4] u> *(arg2 + 8))
                    goto label_625c71_2
                
                result[1] =
                    ((zx.d(ebx[3]) << 8 | zx.d(ebx[2])) << 8 | zx.d(ebx[1])) << 8 | zx.d(*ebx)
                result = &result[2]
                *(arg2 + 4) += 4
            while (result != ecx_10)
            
            ebx = var_34
        
        if (*(arg2 + 4) + 4 u> *(arg2 + 8))
        labelid_5:
            ebx.b = 0
        else
            char* ecx_11 = *(arg2 + 4)
            *(ebx + 0x24) = ((zx.d(ecx_11[3]) << 8 | zx.d(ecx_11[2])) << 8 | zx.d(ecx_11[1])) << 8
                | zx.d(*ecx_11)
            *(arg2 + 4) += 4
            char* edx_18 = *(arg2 + 4)
            
            if (&edx_18[4] u> *(arg2 + 8))
            label_625c71:
                ebx.b = 0
            else
                *(ebx + 0x28) =
                    ((zx.d(edx_18[3]) << 8 | zx.d(edx_18[2])) << 8 | zx.d(edx_18[1])) << 8
                    | zx.d(*edx_18)
                *(arg2 + 4) += 4
                char* edx_19 = *(arg2 + 4)
                
                if (&edx_19[4] u> *(arg2 + 8))
                label_625c71_1:
                    ebx.b = 0
                else
                    char* ecx_25 =
                        ((zx.d(edx_19[3]) << 8 | zx.d(edx_19[2])) << 8 | zx.d(edx_19[1])) << 8
                        | zx.d(*edx_19)
                    *(arg2 + 4) = &edx_19[4]
                    
                    if (sub_626570(&ebx[0x2c], arg2, ecx_25).b == 0)
                    label_625c71_2:
                        ebx.b = 0
                    else
                        ebx.b = 1

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
