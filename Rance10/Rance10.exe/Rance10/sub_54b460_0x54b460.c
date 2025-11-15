// 函数: sub_54b460
// 地址: 0x54b460
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_73a414
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t* ebx = arg1
int32_t* var_118 = ebx
int32_t eax_4 = *ebx

if (arg3 == 0)
    (*(eax_4 + 0x34))(eax_2)
else
    (*(eax_4 + 0x30))(eax_2)

int32_t eax_5 = ebx[0x20]
void* edi = &ebx[0x1f]
int32_t* esi = *edi

if (esi != eax_5)
    do
        (**esi)(0)
        esi = &esi[0x32]
    while (esi != eax_5)
    
    ebx = var_118

*(edi + 4) = *edi
int32_t var_30 = 0xf
int32_t var_34 = 0
char var_44 = 0
sub_403490(&var_44, 0x767040, 0xa)
int32_t var_8_1 = 0
int32_t* ecx_3 = *(arg2 + 4)
int32_t* esi_1

if (ecx_3 != 0)
    char* edx_1 = &var_44
    
    if (var_30 u>= 0x10)
        edx_1 = var_44.d
    
    esi_1 = (*(*ecx_3 + 0x24))(edx_1)
else
    esi_1 = nullptr

struct common::CEXTreeReader::VTable* const var_12c = &common::CEXTreeReader::`vftable'
var_8_1.b = 2

if (var_30 u>= 0x10)
    sub_403160(var_44.d, var_30 + 1, 1)

int32_t var_30_1 = 0xf
int32_t var_34_1 = 0
var_44 = 0
struct common::CEXTreeReader::VTable* const var_124
char var_2c

if (esi_1 != 0)
    int32_t eax_13 = (*(*esi_1 + 0x14))(eax_2)
    int32_t esi_2 = 0
    
    if (eax_13 s> 0)
        var_124 = &common::CEXTreeReader::`vftable'
        
        do
            struct partsengine::CConstructionProcess::VTable* var_10c
            sub_4c3030(&var_10c)
            var_8_1.b = 3
            char* ecx_7 = sub_403dc0(&var_12c, &var_2c, esi_2)
            var_8_1.b = 4
            int32_t edi_1
            
            if (esi_1 != 0)
                if (*(ecx_7 + 0x14) u>= 0x10)
                    ecx_7 = *ecx_7
                
                edi_1 = (*(*esi_1 + 0x24))(ecx_7)
            else
                edi_1 = 0
            
            int32_t var_18
            
            if (var_18 u>= 0x10)
                sub_403160(var_2c.d, var_18 + 1, 1)
            
            var_18 = 0xf
            int32_t var_1c_1 = 0
            var_2c = 0
            int32_t var_120_1 = edi_1
            var_8_1.b = 5
            sub_4c4260(&var_10c, &var_124)
            int16_t top = top + 1
            var_8_1.b = 3
            var_124 = &common::CEXTreeReader::`vftable'
            sub_4c52a0(edi, &var_10c)
            var_8_1.b = 2
            sub_4c3130(&var_10c)
            esi_2 += 1
        while (esi_2 s< eax_13)
        
        ebx = var_118

sub_54c110(ebx)
int32_t var_18_1 = 0xf
int32_t var_1c_2 = 0
var_2c = 0
sub_403490(&var_2c, 0x76702c, 0x12)
var_8_1.b = 6
int32_t* ecx_16 = *(arg2 + 4)
int32_t* esi_3

if (ecx_16 != 0)
    char* edx_3 = &var_2c
    
    if (var_18_1 u>= 0x10)
        edx_3 = var_2c.d
    
    esi_3 = (*(*ecx_16 + 0x2c))(edx_3)
else
    esi_3 = nullptr

var_124 = &common::CEXArrayReader::`vftable'
int32_t* var_120_2 = esi_3
var_8_1.b = 8

if (var_18_1 u>= 0x10)
    sub_403160(var_2c.d, var_18_1 + 1, 1)

int32_t var_18_2 = 0xf
int32_t var_1c_3 = 0
var_2c = 0
int32_t result
int32_t ecx_17
int32_t edx_4
int32_t edi_2

if (esi_3 != 0)
    edi_2 = (*(*esi_3 + 0xc))(3, 0)
    int32_t eax_24 = (*(*esi_3 + 0xc))(2, 0)
    int32_t result_1 = (*(*esi_3 + 0xc))(1, 0)
    edx_4 = eax_24
    ecx_17 = (*(*esi_3 + 0xc))(0, 0)
    
    if (edx_4 s>= 0 && edi_2 s>= 0 && ecx_17 s>= 0)
        result = result_1
        
        if (result s>= 0)
            goto label_54b75b
else
    edi_2 = 0
    edx_4 = 0
    result = 0
    ecx_17 = 0
label_54b75b:
    ebx[0x24] = ecx_17
    ebx[0x25] = result
    ebx[0x27] = edx_4
    ebx[0x28] = edi_2
    ebx[0x29].b = 1
result.b = 1
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
