// 函数: sub_61ea30
// 地址: 0x61ea30
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_729918
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void* ebx
void* var_20 = ebx
int32_t __saved_ebp
int32_t var_2c = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
char* var_1c = nullptr
int32_t var_18 = 0
int32_t var_14 = 0
int32_t var_8_1 = 0
void* result
char* edx_1

if ((*(**(arg1 + 4) + 0xc))(arg2, &var_1c).b == 0)
    edx_1 = var_1c
    ebx.b = 0
else
    edx_1 = var_1c
    
    if (var_18 - edx_1 u< 8 || *edx_1 != 0x47 || edx_1[1] != 0x44)
        ebx.b = 0
    else
        result.b = edx_1[2]
        
        if (result.b != *(arg1 + 8) || edx_1[3] != *(arg1 + 9))
            ebx.b = 0
        else if (sub_405df0(arg3, *(edx_1 + 4)).b == 0)
            edx_1 = var_1c
            ebx.b = 0
        else
            edx_1 = var_1c
            int32_t ecx_3 = *(arg3 + 8)
            int32_t edi_2
            
            if (ecx_3 != 0)
                edi_2 = *(arg3 + 4)
            else
                edi_2 = 0
            
            int32_t* ecx_4 = *(arg1 + 0x10)
            
            if (ecx_4 == 0)
                ebx.b = 0
            else if ((*(*ecx_4 + 8))(edi_2, ecx_3, &edx_1[8], var_18 - edx_1 - 8).b == 0)
                edx_1 = var_1c
                ebx.b = 0
            else
                edx_1 = var_1c
                ebx.b = 1

if (edx_1 != 0)
    sub_403160(edx_1, var_14 - edx_1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
return result
