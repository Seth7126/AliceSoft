// 函数: sub_5d2ce0
// 地址: 0x5d2ce0
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6ca458
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_44 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** var_28 = arg2
void* result = arg1
void* result_1 = result
void* esi = nullptr
int32_t var_1c = 0
char* edi = nullptr
void* var_14 = nullptr
char* var_18 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
uint32_t eax_3 = arg2[4]

if (eax_3 != 0)
    if (eax_3 u> 0xffffffff)
        sub_69a551("vector<T> too long")
        noreturn
    
    sub_403640(&var_18, eax_3)
    esi = var_14
    edi = var_18
    arg2 = var_28

int32_t eax_4 = arg2[4]

if (arg2[5] u>= 0x10)
    arg2 = *arg2
    var_28 = arg2

int32_t ebp = 0
char var_29

if (eax_4 s> 0)
    do
        result.b = *(arg2 + ebp)
        
        if ((result.b u>= 0x81 && result.b u<= 0x9f) || (result.b u>= 0xe0 && result.b u<= 0xef))
            char var_2f = result.b
            
            if (&var_2f u>= esi || edi u> &var_2f)
                if (esi == var_10)
                    sub_403590(&var_18, 1)
                    esi = var_14
                    edi = var_18
                    arg2 = var_28
                
                if (esi != 0)
                    *esi = result.b
            else
                result = &var_2f - edi
                
                if (esi == var_10)
                    sub_403590(&var_18, 1)
                    esi = var_14
                    edi = var_18
                    arg2 = var_28
                
                if (esi != 0)
                    *esi = *(result + edi)
            
            result.b = *(arg2 + ebp + 1)
            char* esi_1 = esi + 1
            char var_2e = result.b
            ebp += 2
            
            if (&var_2e u>= esi_1 || edi u> &var_2e)
                if (esi_1 == var_10)
                    sub_403590(&var_18, 1)
                    edi = var_18
                
                if (esi_1 != 0)
                    *esi_1 = result.b
                
                esi = &esi_1[1]
                var_14 = esi
            else
                result = &var_2e - edi
                
                if (esi_1 == var_10)
                    sub_403590(&var_18, 1)
                    edi = var_18
                
                if (esi_1 != 0)
                    *esi_1 = *(result + edi)
                
                esi = &esi_1[1]
                var_14 = esi
        else if (result.b == 0x2d)
            char var_2d = 0x81
            
            if (&var_2d u>= esi || edi u> &var_2d)
                if (esi == var_10)
                    sub_403590(&var_18, 1)
                    esi = var_14
                    edi = var_18
                
                if (esi != 0)
                    *esi = 0x81
            else
                result = &var_2d - edi
                
                if (esi == var_10)
                    sub_403590(&var_18, 1)
                    esi = var_14
                    edi = var_18
                
                if (esi != 0)
                    *esi = *(result + edi)
            
            void* esi_2 = esi + 1
            char var_2c = 0x7c
            
            if (&var_2c u>= esi_2 || edi u> &var_2c)
                if (esi_2 == var_10)
                    sub_403590(&var_18, 1)
                    edi = var_18
                
                if (esi_2 == 0)
                    goto label_5d2f32
                
                *esi_2 = 0x7c
            label_5d2f32:
                esi = esi_2 + 1
                ebp += 1
                var_14 = esi
            else
                result = &var_2c - edi
                
                if (esi_2 == var_10)
                    sub_403590(&var_18, 1)
                    edi = var_18
                
                if (esi_2 == 0)
                    goto label_5d2f32
                
                *esi_2 = *(result + edi)
                esi = esi_2 + 1
                var_14 = esi
                ebp += 1
        else if (result.b != 0x2e)
            if (result.b == 0x20)
                var_29 = 0x81
                sub_414b60(&var_18, &var_29)
                var_29 = 0x40
                sub_414b60(&var_18, &var_29)
                ebp += 1
            else if (result.b s< 0x30 || result.b s> 0x39)
                var_29 = result.b
                ebp += 1
                sub_414b60(&var_18, &var_29)
            else
                var_29 = 0x82
                sub_414b60(&var_18, &var_29)
                result.b += 0x1f
                var_29 = result.b
                sub_414b60(&var_18, &var_29)
                ebp += 1
            
            esi = var_14
            edi = var_18
        else
            char var_2b = 0x81
            
            if (&var_2b u>= esi || edi u> &var_2b)
                if (esi == var_10)
                    sub_403590(&var_18, 1)
                    esi = var_14
                    edi = var_18
                
                if (esi != 0)
                    *esi = 0x81
            else
                result = &var_2b - edi
                
                if (esi == var_10)
                    sub_403590(&var_18, 1)
                    esi = var_14
                    edi = var_18
                
                if (esi != 0)
                    *esi = *(result + edi)
            
            void* esi_3 = esi + 1
            char var_2a = 0x44
            
            if (&var_2a u>= esi_3 || edi u> &var_2a)
                if (esi_3 == var_10)
                    sub_403590(&var_18, 1)
                    edi = var_18
                
                if (esi_3 == 0)
                    goto label_5d3006
                
                *esi_3 = 0x44
            label_5d3006:
                esi = esi_3 + 1
                ebp += 1
                var_14 = esi
            else
                result = &var_2a - edi
                
                if (esi_3 == var_10)
                    sub_403590(&var_18, 1)
                    edi = var_18
                
                if (esi_3 == 0)
                    goto label_5d3006
                
                *esi_3 = *(result + edi)
                esi = esi_3 + 1
                var_14 = esi
                ebp += 1
        
        arg2 = var_28
    while (ebp s< eax_4)
    
    result = result_1

var_29 = 0
sub_414b60(&var_18, &var_29)
char* esi_4 = var_18
*(result + 0x14) = 0xf
*(result + 0x10) = 0
*result = 0
void* ecx_19

if (*esi_4 != 0)
    char* ecx_21 = esi_4
    char i
    
    do
        i = *ecx_21
        ecx_21 = &ecx_21[1]
    while (i != 0)
    ecx_19 = ecx_21 - &esi_4[1]
else
    ecx_19 = nullptr

sub_402110(result, esi_4, ecx_19)
j__free(esi_4)
fsbase->NtTib.ExceptionList = ExceptionList
return result
