// 函数: ?_CallCopyCtor@__ExceptionPtr@@ABEXPAX0IQBU_s_CatchableType@@@Z
// 地址: 0x6d50c6
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t __saved_ebp_2 = 4
int32_t (* var_c)(void* arg1) = sub_7494bf
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t ebx
int32_t var_18 = ebx
int32_t esi
int32_t var_1c = esi
int32_t edi
int32_t var_20 = edi
int32_t __saved_ebp
void* var_24 = __security_cookie ^ &__saved_ebp
int32_t* var_14 = &var_24
void* const var_28 = &data_6d50d2
int32_t var_8_1 = 0xffffffff
fsbase->NtTib.ExceptionList = &ExceptionList
char* result
void* const* esp

if ((*arg4 & 1) != 0 || *(arg4 + 0x18) == 0)
    var_28 = arg3
    result = sub_700660(arg1, arg2, var_28)
    esp = &var_24
    
    if ((*arg4 & 8) != 0)
        int32_t* ecx_3 = *arg2
        
        if (ecx_3 != 0)
            void* eax_3 = *ecx_3
            var_28 = ecx_3
            int32_t esi_2 = *(eax_3 + 4)
            j_sub_4033e0()
            result = esi_2(var_28)
            esp = &var_24
else
    int32_t var_8 = 0
    
    if ((*arg4 & 4) == 0)
        var_28 = &arg4[8]
        var_28 = ___AdjustPointer(arg2, var_28)
        result = sub_6d5159(arg1, *(arg4 + 0x18), var_28)
        esp = &var_24
    else
        var_28 = 1
        void* eax_1 = ___AdjustPointer(arg2, &arg4[8])
        result = sub_6d5159(arg1, *(arg4 + 0x18), eax_1)
        esp = &var_28

*(esp - 4) = &data_6d5156
fsbase->NtTib.ExceptionList = ExceptionList
esp[1]
esp[2]
esp[3]
int32_t __saved_ebp_1 = *(esp - 4)
return result
