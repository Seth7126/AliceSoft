// 函数: sub_51b060
// 地址: 0x51b060
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_3c = 0xffffffff
int32_t (* var_40)(void* arg1) = sub_738c99
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
struct partsengine::CGraph::VTable* const var_38
int32_t eax_2 = __security_cookie ^ &var_38
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t ebx = 1
var_38 = &partsengine::CGraph::`vftable'

if (arg2 s> 0)
    ebx = arg2

int32_t var_3c_1 = 0
int32_t* esi = data_7fcb5c
int32_t* var_34 = esi

if (esi != 0)
    void* const edi_1 = data_7fcbbc
    void* const var_24_1
    
    if (edi_1 != 0)
        if (sub_63c080(edi_1) != 0)
            var_24_1 = (*(**(edi_1 + 0x2c) + 0x50))(eax_2)
        else
            var_24_1 = nullptr
        
        edi_1 = data_7fcbbc
        
        if (edi_1 != 0)
            if (sub_63c080(edi_1) != 0)
                edi_1 = (*(**(edi_1 + 0x2c) + 0x54))(eax_2)
            else
                edi_1 = nullptr
    else
        var_24_1 = edi_1
    
    int32_t var_11c[0x1b]
    sub_54d5a0(&var_11c)
    var_3c_1.b = 2
    sub_54ea30(&var_11c)
    void* const var_28 = 1
    int32_t var_2c
    int32_t* ecx_9 = &var_2c
    int32_t temp0_1 = divs.dp.d(sx.q(ebx * edi_1), var_24_1)
    var_2c = temp0_1
    
    if (temp0_1 s<= 1)
        ecx_9 = &var_28
    
    var_2c = *ecx_9
    int32_t var_b0[0x1b]
    sub_54d5a0(&var_b0)
    var_3c_1.b = 3
    sub_54f960(&var_b0, ebx, var_2c)
    void* eax_17 = var_11c[0]
    
    if (eax_17 != 0)
        var_28 = *(eax_17 + 0x118)
    else
        var_28 = eax_17
    
    (*(*esi + 0x3c))(sub_54e9a0(&var_b0), 0, 0, ebx, var_2c, var_28, 0, 0, var_24_1, edi_1)
    void* eax_20 = var_b0[0]
    
    if (eax_20 != 0)
        eax_20 = *(eax_20 + 0x118)
    
    GSI1::QueryMiniPDBForTiDefnUDT2(arg1, eax_20)
    ebx.b = 1
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_b0)
    Concurrency::details::AllocatorBucket::~AllocatorBucket(&var_11c)
else
    struct _EXCEPTION_REGISTRATION_RECORD** var_c_1 = 0xf
    int32_t* var_10_1 = esi
    char var_20 = 0
    sub_403490(&var_20, 0x76696c, 0x2c)
    var_3c_1.b = 1
    sub_6c52e0(&var_20)
    
    if (var_c_1 u>= 0x10)
        sub_403160(var_20.d, var_c_1 + 1, 1)
    
    ebx.b = 0

int32_t var_3c_2 = 4

if (esi != 0)
    (*(*esi + 4))(eax_2)

struct _EXCEPTION_REGISTRATION_RECORD** result
result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_38)
return result
