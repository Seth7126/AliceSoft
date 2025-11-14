// 函数: sub_486f90
// 地址: 0x486f90
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6bab48
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t eax_2 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_28 =
    &fileimage::CFileImageAnalyser::`vftable'
char* edx = *arg2
void* esi_1 = arg2[1] - edx
char* var_24 = edx
int32_t eax_3 = edx + esi_1
int32_t var_20 = eax_3
int32_t edi = 0
int32_t var_4 = 0
int32_t var_1c = 0
int32_t var_18 = 0
int32_t var_14 = 0
var_4.b = 1

if (*(arg1 + 0x30) s< 4)
    goto label_4870aa

int32_t* result

if (esi_1 u< 4 || &edx[4] u> eax_3)
    result = nullptr
else
    void* var_24_1 = &edx[4]
    uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
    sub_403540(&var_1c, ebx_7)
    struct commonsystemdata::CZlibDecompressor::VTable* const var_30 =
        &commonsystemdata::CZlibDecompressor::`vftable'
    int32_t* var_2c_1 = nullptr
    var_4.b = 2
    sub_451e10(&var_30)
    edi = var_1c
    char eax_10
    
    if (var_2c_1 != 0)
        eax_10 = (*(*var_2c_1 + 8))(edi, ebx_7, *arg2 + 4, esi_1 - 4)
    
    int32_t* result_1
    
    if (var_2c_1 == 0 || eax_10 == 0)
        var_4.b = 1
        
        if (var_2c_1 == 0)
            result_1 = nullptr
        else
            (*(*var_2c_1 + 4))(eax_2)
            result_1 = nullptr
    else
        var_4.b = 1
        int32_t var_20_1 = edi + ebx_7
        int32_t var_24_2 = edi
        (*(*var_2c_1 + 4))(eax_2)
    label_4870aa:
        result_1 = sub_69adc6(0x18)
        
        if (result_1 == 0)
            result_1 = nullptr
        else
            *result_1 = &partsengine::CFlatTimeLineData::`vftable'{for `IInterface'}
            result_1[1] = 1
            result_1[2] = 0
            result_1[3] = 0
            result_1[4] = 0
            result_1[5] = 0xffffffff
        
        int32_t var_4c_3 = *(arg1 + 0x30)
        
        if (sub_48fbf0(result_1, &var_28) == 0)
            (*(*result_1 + 4))(eax_2)
            result_1 = nullptr
    
    if (edi != 0)
        j__free(edi)
    
    result = result_1

fsbase->NtTib.ExceptionList = ExceptionList
return result
