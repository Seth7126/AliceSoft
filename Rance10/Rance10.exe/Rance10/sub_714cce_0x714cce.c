// 函数: sub_714cce
// 地址: 0x714cce
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t edi
int32_t var_8 = edi
enum WIN32_ERROR dwErrCode = GetLastError()
void* eax = data_7e1660
int32_t result

if (eax != 0xffffffff)
    result = ___acrt_FlsGetValue@4(eax)

if (eax == 0xffffffff || result == 0)
    int32_t result_3 = __calloc_base(1, 0x364)
    result = result_3
    int32_t result_2
    
    if (result == 0)
        result_2 = result_3
    label_714d05:
        __free_base(result_2)
    label_714d46:
        SetLastError(dwErrCode)
        _abort()
        noreturn
    
    BOOL eax_2
    int32_t** ecx_3
    eax_2, ecx_3 = ___acrt_FlsSetValue@8(data_7e1660, result)
    
    if (eax_2 == 0)
        result_2 = result
        goto label_714d05
    
    int32_t* var_c_3 = &data_7fcacc
    int32_t result_1 = result
    construct_ptd(ecx_3)
    __free_base(0)
    
    if (result == 0)
        goto label_714d46

SetLastError(dwErrCode)
return result
