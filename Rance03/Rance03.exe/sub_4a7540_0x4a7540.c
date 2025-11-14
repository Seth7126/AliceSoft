// 函数: sub_4a7540
// 地址: 0x4a7540
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b68b8
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_34 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* result_1 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
int32_t* var_14 = nullptr
sub_4a44c0(*(arg1 + 4), &result_1)
int32_t* result_2 = result_1
int32_t eax_5 = (var_14 - result_2) s>> 2
sub_4a78a0(eax_5, var_14, result_2, eax_5, 0.d)
int32_t* ebp = arg2
int32_t esi = arg4

if (arg5 != 0)
    void* esi_1 = *(arg1 + 0x14)
    
    if (esi_1 != 0)
        if (sub_4058a0(*(esi_1 + 0x480) + 0x48, arg7) == 0)
            char* ecx_4 = *(esi_1 + 0x480) + 0x48
            
            if (ecx_4 != arg7)
                sub_401ff0(ecx_4, arg7, 0, 0xffffffff)
            
            *(esi_1 + 0x70) = 1
        
        ebp = arg2
    
    esi = arg4
    int32_t** var_38_2 = &result_1
    sub_4acb70(arg1 + 0x10, esi, ebp)

sub_4a7460(arg1, ebp, arg3, esi, arg6, &result_1)
int32_t* result = result_1

if (result != 0)
    result = j__free(result)

fsbase->NtTib.ExceptionList = ExceptionList
return result
