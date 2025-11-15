// 函数: sub_4cda20
// 地址: 0x4cda20
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_733cb4
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageAnalyser::VTable* const var_30 =
    &fileimage::CFileImageAnalyser::`vftable'
char* edx = *arg2
void* esi_1 = arg2[1] - edx
char* var_2c = edx
void* eax_4 = edx + esi_1
void* var_28 = eax_4
void* edi = nullptr
int32_t var_8_1 = 0
void* var_3c = nullptr
int32_t var_38 = 0
int32_t var_34 = 0
var_8_1.b = 1

if (*(arg1 + 0x30) s< 4)
    goto label_4cdb2b

if (esi_1 u< 4 || &edx[4] u> eax_4)
    fsbase->NtTib.ExceptionList = ExceptionList
    return 0

void* var_2c_1 = &edx[4]
uint32_t ebx_7 = ((zx.d(edx[3]) << 8 | zx.d(edx[2])) << 8 | zx.d(edx[1])) << 8 | zx.d(*edx)
sub_405950(&var_3c, ebx_7)
struct commonsystemdata::CZlibDecompressor::VTable* const var_24 =
    &commonsystemdata::CZlibDecompressor::`vftable'
int32_t* var_20_1 = nullptr
var_8_1.b = 2
sub_454990(&var_24)
edi = var_3c
char eax_12

if (var_20_1 != 0)
    eax_12 = (*(*var_20_1 + 8))(edi, ebx_7, *arg2 + 4, esi_1 - 4)

int32_t* result

if (var_20_1 == 0 || eax_12 == 0)
    var_8_1.b = 3
    
    if (var_20_1 == 0)
        result = nullptr
    else
        (*(*var_20_1 + 4))(eax_2)
        result = nullptr
else
    void* var_2c_2 = edi
    void* var_28_1 = edi + ebx_7
    var_8_1.b = 4
    (*(*var_20_1 + 4))(eax_2)
    var_8_1.b = 1
label_4cdb2b:
    result = sub_6e810c(0x18)
    arg2 = result
    result[1] = 1
    *result = &
        partsengine::CFlatTimeLineData::`vftable'{for `common::SuicideRefCounter<class IInterface>'}
    result[2] = 0
    result[3] = 0
    result[4] = 0
    result[5] = 0xffffffff
    int32_t var_54_3 = *(arg1 + 0x30)
    
    if (sub_4da0e0(result, &var_30) == 0)
        (*(*result + 4))(eax_2)
        result = nullptr

if (edi != 0)
    sub_403160(edi, var_34 - edi, 1)

fsbase->NtTib.ExceptionList = ExceptionList
return result
