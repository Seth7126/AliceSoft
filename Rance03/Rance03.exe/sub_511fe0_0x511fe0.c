// 函数: sub_511fe0
// 地址: 0x511fe0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6c2100
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_64
int32_t eax_2 = __security_cookie ^ &var_64
int32_t __saved_edi
int32_t var_78 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
int32_t var_4 = 0
int32_t var_5c
void* var_44
int32_t* ecx_2 =
    sub_410930(sub_410930(&ExceptionList, arg4, &var_44, ."), &var_44, &var_5c, 0x6e29b8)
var_4.b = 1
int32_t* edx_2 = *(arg3 + 4)
int32_t eax_8

if (edx_2 != 0)
    if (ecx_2[5] u>= 0x10)
        ecx_2 = *ecx_2
    
    eax_8 = (*(*edx_2 + 0x44))(ecx_2)
else
    eax_8 = 0

var_4.b = 0
eax_8.b = eax_8 == 1
*(arg1 + 0x1c) = eax_8.b
int32_t var_48

if (var_48 u>= 0x10)
    eax_8 = j__free(var_5c)

int32_t* ecx_5 = sub_410930(eax_8, &var_44, &var_5c, 0x6e29c8)
var_4.b = 2
int32_t* edx_4 = *(arg3 + 4)
int32_t eax_11

if (edx_4 != 0)
    if (ecx_5[5] u>= 0x10)
        ecx_5 = *ecx_5
    
    eax_11 = (*(*edx_4 + 0x44))(ecx_5)
else
    eax_11 = 0

sub_510cf0(arg1, eax_11, 1)
void* result = *(arg1 + 0x28)
int32_t* edi = *(result + 4)
var_4.b = 0

if (var_48 u>= 0x10)
    result = j__free(var_5c)

int32_t var_48_1 = 0xf
int32_t var_4c = 0
var_5c.b = 0
void* ebx

if (edi == 0)
    ebx.b = 0
else
    var_4.b = 3
    var_4.b = 0
    int32_t var_2c
    result.b = (*(*edi + 0x78))(arg2, arg3, sub_410930(result, &var_44, &var_2c, 0x6e2954)).b == 0
    char var_5d_1 = result.b
    int32_t var_18
    
    if (var_18 u>= 0x10)
        j__free(var_2c)
        result.b = var_5d_1
    
    if (result.b != 0)
        ebx.b = 0
    else
        int32_t* ecx_11 = sub_410930(result, &var_44, &var_5c, 0x6e2960)
        var_4.b = 4
        int32_t* edx_8 = *(arg3 + 4)
        int32_t eax_16
        
        if (edx_8 != 0)
            if (ecx_11[5] u>= 0x10)
                ecx_11 = *ecx_11
            
            eax_16 = (*(*edx_8 + 0x44))(ecx_11)
        else
            eax_16 = 0
        
        sub_510cf0(arg1, eax_16, 2)
        result = *(arg1 + 0x28)
        int32_t* edi_1 = *(result + 8)
        var_4.b = 0
        
        if (var_48_1 u>= 0x10)
            result = j__free(var_5c)
        
        int32_t var_48_2 = 0xf
        int32_t var_4c_1 = 0
        var_5c.b = 0
        
        if (edi_1 == 0)
            ebx.b = 0
        else
            var_4.b = 5
            var_4.b = 0
            result.b =
                (*(*edi_1 + 0x78))(arg2, arg3, sub_410930(result, &var_44, &var_2c, 0x6e2980)).b
                == 0
            char var_5d_2 = result.b
            
            if (var_18 u>= 0x10)
                j__free(var_2c)
                result.b = var_5d_2
            
            if (result.b != 0)
                ebx.b = 0
            else
                int32_t* ecx_17 = sub_410930(result, &var_44, &var_2c, 0x6e2994)
                var_4.b = 6
                int32_t* edx_12 = *(arg3 + 4)
                int32_t eax_21
                
                if (edx_12 != 0)
                    if (ecx_17[5] u>= 0x10)
                        ecx_17 = *ecx_17
                    
                    eax_21 = (*(*edx_12 + 0x44))(ecx_17)
                else
                    eax_21 = 0
                
                sub_510cf0(arg1, eax_21, 3)
                int32_t* edi_2 = *(*(arg1 + 0x28) + 0xc)
                var_4.b = 0
                result = sub_401fb0(&var_2c)
                
                if (edi_2 == 0)
                    ebx.b = 0
                else
                    var_4.b = 7
                    ebx.b = (*(*edi_2 + 0x78))(arg2, arg3, 
                        sub_410930(result, &var_44, &var_5c, 0x6e2944)) == 0
                    sub_401fb0(&var_5c)
                    
                    if (ebx.b != 0)
                        ebx.b = 0
                    else
                        *(arg1 + 0x14) = 1
                        ebx.b = 1

int32_t var_30

if (var_30 u>= 0x10)
    j__free(var_44)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_64)
return result
