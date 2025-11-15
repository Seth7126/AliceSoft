// 函数: sub_563490
// 地址: 0x563490
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73bb86
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
struct fileimage::CFileImageMaker::VTable* const var_34 = &fileimage::CFileImageMaker::`vftable'
void* var_30 = nullptr
char* var_2c = nullptr
int32_t var_28 = 0
int32_t var_8_1 = 0
sub_6ca100(&var_34, *(arg1 + 0x28))
int32_t* esi = *(arg1 + 0x24)
int64_t* i = *esi
int64_t* var_18 = i

for (; i != esi; i = var_18)
    sub_6ca100(&var_34, i[2].d)
    sub_429080(&var_18)

sub_6ca100(&var_34, *(arg1 + 0x30))
void** esi_1 = *(arg1 + 0x2c)
int64_t* i_1 = *esi_1
var_18 = i_1

for (; i_1 != esi_1; i_1 = var_18)
    void* ecx_4 = &i_1[2]
    int32_t eax_3 = *(ecx_4 + 0x14)
    void* edx_1
    
    if (eax_3 u< 0x10)
        edx_1 = ecx_4
    else
        edx_1 = *ecx_4
    
    if (eax_3 u>= 0x10)
        ecx_4 = *ecx_4
    
    int32_t var_1c
    var_1c.b = 0
    int32_t var_48_3 = 0
    sub_6ca200(&var_30, var_2c, ecx_4, edx_1 + i_1[4].d)
    char var_11 = 0
    sub_4263a0(&var_30, &var_11)
    sub_429080(&var_18)

struct passregister::CZlibCompressor::VTable* const var_24 =
    &passregister::CZlibCompressor::`vftable'
int32_t var_20 = 0
var_8_1.b = 1
int64_t* result = sub_6cc630(0x767c38)
void* ebx = var_30
int64_t* result_1 = result
int64_t* result_2 = result_1
void* eax_6

if (result_1 != 0)
    eax_6 = var_2c - ebx
    result = (*(*result_1 + 8))(ebx, eax_6)
    var_18 = result

char arg_7

if (result_1 == 0 || result == 0)
    arg_7 = 0
else
    int32_t* esi_2 = arg2
    sub_405950(esi_2, (*(*result + 0x14))(eax_2))
    char* eax_8 = *esi_2
    int64_t* esi_3 = var_18
    
    if (eax_8 != esi_2[1])
        sub_700660(eax_8, (*(*esi_3 + 0x18))((*(*esi_3 + 0x14))()))
    
    *arg3 = eax_6
    (*(*esi_3 + 4))()
    arg_7 = 1

var_8_1.b = 2

if (result_1 != 0)
    (*(*result_1 + 4))(eax_2)

if (ebx != 0)
    sub_403160(ebx, var_28 - ebx, 1)

result.b = arg_7
fsbase->NtTib.ExceptionList = ExceptionList
return result
