// 函数: sub_4de1f0
// 地址: 0x4de1f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_9c = 0xffffffff
int32_t (* var_a0)(void* arg1) = sub_734a38
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
char var_98[0x10]
int32_t eax_2 = __security_cookie ^ &var_98
fsbase->NtTib.ExceptionList = &ExceptionList
sub_4dd450(arg1)
sub_4dd0c0(arg1)
int32_t var_24 = 0xf
int32_t var_28 = 0
char var_38 = 0
sub_403490(&var_38, 0x764724, 0x10)
int32_t var_9c_1 = 0
int32_t* ecx_2 = *(arg3 + 4)
int32_t* esi_1

if (ecx_2 != 0)
    char* edx_1 = &var_38
    
    if (var_24 u>= 0x10)
        edx_1 = var_38.d
    
    esi_1 = (*(*ecx_2 + 0x24))(edx_1)
else
    esi_1 = nullptr

struct common::CEXTreeReader::VTable* const var_bc = &common::CEXTreeReader::`vftable'
var_9c_1.b = 2

if (var_24 u>= 0x10)
    sub_403160(var_38.d, var_24 + 1, 1)

int32_t var_24_1 = 0xf
int32_t var_28_1 = 0
var_38 = 0
struct common::CEXArrayReader::VTable* const var_b4
int32_t var_84
char var_80[0x10]
int32_t var_6c
char var_68[0x10]
int32_t var_54
char var_50
char var_20

if (esi_1 != 0)
    int32_t eax_8 = (*(*esi_1 + 0x18))(eax_2)
    int32_t edi_1 = 0
    
    if (eax_8 s> 0)
        do
            char* ecx_5 = sub_403e80(&var_bc, &var_68, edi_1)
            var_9c_1.b = 3
            int32_t esi_2
            
            if (esi_1 != 0)
                if (*(ecx_5 + 0x14) u>= 0x10)
                    ecx_5 = *ecx_5
                
                esi_2 = (*(*esi_1 + 0x2c))(ecx_5)
            else
                esi_2 = 0
            
            if (var_54 u>= 0x10)
                sub_403160(var_68[0].d, var_54 + 1, 1)
            
            var_54 = 0xf
            int32_t var_58_1 = 0
            var_68[0] = 0
            var_b4 = &common::CEXArrayReader::`vftable'
            int32_t var_b0_1 = esi_2
            var_9c_1.b = 4
            int32_t var_c_1 = 0xf
            int32_t var_10_1 = 0
            var_20 = 0
            sub_403490(&var_20, 0x75d0aa, nullptr)
            var_9c_1.b = 5
            int32_t var_3c_1 = 0xf
            int32_t var_40_1 = 0
            var_50 = 0
            sub_403490(&var_50, 0x75d0ab, nullptr)
            var_9c_1.b = 6
            char* eax_12 = sub_403230(&var_b4, &var_98, 1, &var_20)
            var_9c_1.b = 7
            var_9c_1.b = 8
            sub_4dcdd0(arg1, sub_403230(&var_b4, &var_80, 0, &var_50), eax_12)
            
            if (var_6c u>= 0x10)
                sub_403160(var_80[0].d, var_6c + 1, 1)
            
            var_6c = 0xf
            int32_t var_70_1 = 0
            var_80[0] = 0
            
            if (var_84 u>= 0x10)
                sub_403160(var_98[0].d, var_84 + 1, 1)
            
            var_84 = 0xf
            int32_t var_88_1 = 0
            var_98[0] = 0
            
            if (var_3c_1 u>= 0x10)
                sub_403160(var_50.d, var_3c_1 + 1, 1)
            
            int32_t var_3c_2 = 0xf
            int32_t var_40_2 = 0
            var_50 = 0
            
            if (var_c_1 u>= 0x10)
                sub_403160(var_20.d, var_c_1 + 1, 1)
            
            edi_1 += 1
            var_9c_1.b = 2
            var_b4 = &common::CEXArrayReader::`vftable'
        while (edi_1 s< eax_8)

int32_t var_3c_3 = 0xf
int32_t var_40_3 = 0
var_50 = 0
sub_403490(&var_50, 0x764738, 0x14)
var_9c_1.b = 9
int32_t* ecx_16 = *(arg3 + 4)
int32_t* esi_4

if (ecx_16 != 0)
    char* edx_3 = &var_50
    
    if (var_3c_3 u>= 0x10)
        edx_3 = var_50.d
    
    esi_4 = (*(*ecx_16 + 0x24))(edx_3)
else
    esi_4 = nullptr

struct common::CEXTreeReader::VTable* const var_c4 = &common::CEXTreeReader::`vftable'
var_9c_1.b = 0xb

if (var_3c_3 u>= 0x10)
    sub_403160(var_50.d, var_3c_3 + 1, 1)

int32_t var_3c_4 = 0xf
int32_t var_40_4 = 0
var_50 = 0
int32_t eax_27
int32_t edi_2

if (esi_4 != 0)
    eax_27 = (*(*esi_4 + 0x18))(eax_2)
    edi_2 = 0

void* esi_7

if (esi_4 == 0 || eax_27 s<= 0)
    esi_7 = arg1
else
    do
        char* ecx_19 = sub_403e80(&var_c4, &var_98, edi_2)
        var_9c_1.b = 0xc
        int32_t esi_5
        
        if (esi_4 != 0)
            if (*(ecx_19 + 0x14) u>= 0x10)
                ecx_19 = *ecx_19
            
            esi_5 = (*(*esi_4 + 0x2c))(ecx_19)
        else
            esi_5 = 0
        
        if (var_84 u>= 0x10)
            sub_403160(var_98[0].d, var_84 + 1, 1)
        
        var_84 = 0xf
        int32_t var_88_2 = 0
        var_98[0] = 0
        var_b4 = &common::CEXArrayReader::`vftable'
        int32_t var_b0_2 = esi_5
        var_9c_1.b = 0xd
        int32_t var_c_2 = 0xf
        int32_t var_10_2 = 0
        var_20 = 0
        sub_403490(&var_20, 0x75d0b7, nullptr)
        var_9c_1.b = 0xe
        int32_t var_24_2 = 0xf
        int32_t var_28_2 = 0
        var_38 = 0
        sub_403490(&var_38, 0x75d0bd, nullptr)
        var_9c_1.b = 0xf
        void** eax_31 = sub_403230(&var_b4, &var_68, 1, &var_20)
        var_9c_1.b = 0x10
        esi_7 = arg1
        var_9c_1.b = 0x11
        sub_4dd1a0(esi_7, sub_403230(&var_b4, &var_80, 0, &var_38), eax_31)
        
        if (var_6c u>= 0x10)
            sub_403160(var_80[0].d, var_6c + 1, 1)
        
        var_6c = 0xf
        int32_t var_70_2 = 0
        var_80[0] = 0
        
        if (var_54 u>= 0x10)
            sub_403160(var_68[0].d, var_54 + 1, 1)
        
        var_54 = 0xf
        int32_t var_58_2 = 0
        var_68[0] = 0
        
        if (var_24_2 u>= 0x10)
            sub_403160(var_38.d, var_24_2 + 1, 1)
        
        int32_t var_24_3 = 0xf
        int32_t var_28_3 = 0
        var_38 = 0
        
        if (var_c_2 u>= 0x10)
            sub_403160(var_20.d, var_c_2 + 1, 1)
        
        edi_2 += 1
        var_9c_1.b = 0xb
        var_b4 = &common::CEXArrayReader::`vftable'
    while (edi_2 s< eax_27)

int32_t result_1 = 0xf
int32_t var_10_3 = 0
var_20 = 0
sub_403490(&var_20, "FPS", 3)
var_9c_1.b = 0x12
int32_t* ecx_29 = *(arg3 + 4)
int32_t xmm0

if (ecx_29 != 0)
    char* edx_5 = &var_20
    
    if (result_1 u>= 0x10)
        edx_5 = var_20.d
    
    int32_t* var_d8_13 = ecx_29
    (*(*ecx_29 + 0xc))(edx_5, 0)
    xmm0 = fconvert.s(arg2)
else
    xmm0 = (zx.o(0)).d

int32_t result = result_1
*(esi_7 + 0x18) = xmm0

if (result u>= 0x10)
    result = sub_403160(var_20.d, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_98)
return result
