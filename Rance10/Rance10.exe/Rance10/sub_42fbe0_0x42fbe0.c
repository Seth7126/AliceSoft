// 函数: sub_42fbe0
// 地址: 0x42fbe0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_7c = 0xffffffff
int32_t (* var_80)(void* arg1) = sub_72a230
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t* var_78
int32_t eax_2 = __security_cookie ^ &var_78
int32_t var_ac = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
var_78 = arg1
void* var_50
char* eax_3 = sub_405070(&var_50, arg2)
int32_t var_7c_1 = 0
int32_t* var_38
sub_4176f0(eax_3.b, eax_3, &var_38, ".afa")
int32_t var_3c

if (var_3c u>= 0x10)
    sub_403160(var_50, var_3c + 1, 1)

struct storage::CStorageFile::VTable* const var_98 = &storage::CStorageFile::`vftable'
struct filesystem::CFile::VTable* const var_94 = &filesystem::CFile::`vftable'
HANDLE var_90 = 0xffffffff
int32_t var_8c = 0
int32_t var_88 = 0
var_7c_1.b = 3
uint32_t var_6c
int32_t var_24
char var_20
char* var_c
char* eax_9

if (sub_5f21b0(&var_98, &var_38) == 0)
    int32_t* eax_7 = &var_38
    
    if (var_24 u>= 0x10)
        eax_7 = var_38
    
    var_6c = eax_7
    var_c = 0xf
    int32_t var_10_1 = 0
    var_20 = 0
    sub_403490(&var_20, 0x75daec, 0x2b)
    var_7c_1.b = 4
    eax_9 = sub_409240(&var_6c, &var_20, &var_50, &var_6c)
    var_7c_1.b = 5
    goto label_42fd2a

uint32_t result_1 = 0
uint32_t* var_b0_2 = &result_1
char* result
int32_t* result_2
HANDLE esi

if (sub_42ffe0(&var_98) != 0)
    esi = var_90
    
    if (esi != 0xffffffff && var_88 u> 0)
        SetFilePointer(esi, 0, nullptr, FILE_BEGIN)
        int32_t var_8c_1 = 0
    
    result = result_1
    int32_t* var_74
    void var_68
    
    if (result == 2)
        void* var_14 = nullptr
        int32_t var_10_2 = 0
        int32_t var_c_1 = 0
        var_7c_1.b = 8
        int32_t var_9c
        int32_t* var_b0_5 = &var_9c
        result_1 = 0
        var_9c = 0
        var_6c = 0
        esi = var_90
        result_2.b = sub_430490(arg1, &var_98, &var_14, &result_1, &var_6c).b
        
        if (esi != 0xffffffff)
            if (CloseHandle(esi) != 0)
                esi = 0xffffffff
            
            HANDLE var_90_1 = esi
        
        if (result_2.b == 0)
            int32_t** eax_16 = &var_38
            
            if (var_24 u>= 0x10)
                eax_16 = var_38
            
            var_6c = eax_16
            sub_403360(&var_50, 0x75dbbc)
            var_7c_1.b = 9
            var_7c_1.b = 0xa
            sub_42faf0(sub_409240(&var_6c, &var_50, &var_68, &var_6c))
            sub_403320(&var_68)
            sub_403320(&var_50)
            goto label_42ff44
        
        result_2 = result_1
        int32_t edi_1 = 0
        var_74 = nullptr
        
        if (result_2 s<= 0)
        label_42fe93:
            void* ecx_13 = var_14
            
            if (ecx_13 != 0)
                sub_403160(ecx_13, var_c_1 - ecx_13, 1)
            
            result_2.b = 1
        else
            while (true)
                if (sub_430100(var_78, &var_14, &var_74, &var_38, var_6c, var_9c).b == 0)
                    int32_t* eax_21 = &var_38
                    
                    if (var_24 u>= 0x10)
                        eax_21 = var_38
                    
                    var_78 = eax_21
                    sub_403360(&var_50, 0x75db1c)
                    var_7c_1.b = 0xb
                    var_7c_1.b = 0xc
                    sub_42faf0(sub_409240(&var_78, &var_50, &var_68, &var_78))
                    sub_403320(&var_68)
                    sub_403320(&var_50)
                    break
                
                edi_1 += 1
                
                if (edi_1 s>= result_2)
                    goto label_42fe93
            
        label_42ff44:
            void* ecx_23 = var_14
            
            if (ecx_23 == 0)
                result_2.b = 0
            else
                sub_403160(ecx_23, var_c_1 - ecx_23, 1)
                result_2.b = 0
    else if (result != 3)
        result_2.b = 1
    else if (sub_430740(arg1, &var_98, &var_38).b != 0)
        esi = var_90
        result_2.b = 1
    else
        int32_t* eax_26 = &var_38
        
        if (var_24 u>= 0x10)
            eax_26 = var_38
        
        var_74 = eax_26
        sub_403360(&var_20, 0x75db54)
        var_7c_1.b = 0xd
        var_7c_1.b = 0xe
        sub_42faf0(sub_409240(&var_74, &var_20, &var_68, &var_74))
        sub_403320(&var_68)
        sub_403320(&var_20)
        esi = var_90
        result_2.b = 0
else
    int32_t** eax_11 = &var_38
    
    if (var_24 u>= 0x10)
        eax_11 = var_38
    
    var_6c = eax_11
    sub_403360(&var_20, 0x75db8c)
    var_7c_1.b = 6
    eax_9 = sub_409240(&var_6c, &var_20, &var_50, &var_6c)
    var_7c_1.b = 7
label_42fd2a:
    sub_42faf0(eax_9)
    
    if (var_3c u>= 0x10)
        sub_403160(var_50, var_3c + 1, 1)
    
    var_50.b = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0xf
    
    if (var_c u>= 0x10)
        sub_403160(var_20.d, &var_c[1], 1)
    
    esi = var_90
    result_2.b = 0

if (esi != 0xffffffff)
    CloseHandle(esi)

if (var_24 u>= 0x10)
    sub_403160(var_38, var_24 + 1, 1)

result.b = result_2.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &var_78)
return result
