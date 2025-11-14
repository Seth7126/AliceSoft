// 函数: sub_414780
// 地址: 0x414780
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3e18
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_edi
int32_t var_30 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
char* arg_8
char* edi = arg_8
int32_t var_1c = 0

if (*(edi + 0x14) u>= 0x10)
    edi = *edi

char* ecx = nullptr
char* esi = nullptr
char* var_18 = nullptr
char* var_14 = nullptr
int32_t var_10 = 0
int32_t var_4 = 0
char i = *edi

while (i != 0)
    if ((i u< 0x81 || i u> 0x9f) && (i u< 0xe0 || i u> 0xef))
        if (i != 0x40)
            goto label_41484f
        
        i = edi[1]
        edi = &edi[1]
        
        if (i == 0x30)
            arg_8.b = 0x3a
            sub_414b60(&var_18, &arg_8)
            arg_8.b = 0x3a
            sub_414b60(&var_18, &arg_8)
            ecx = var_14
            esi = var_18
            int32_t j_5 = ecx - esi - 2
            
            if (j_5 s<= 0)
                break
            
            int32_t j
            
            do
                sub_414b60(&var_18, esi)
                esi = var_18
                j = j_5
                j_5 -= 1
            while (j != 1)
            ecx = var_14
            break
        
        if (i == 0x31)
            arg_8.b = 0x3a
            sub_414b60(&var_18, &arg_8)
            arg_8.b = 0x3a
            sub_414b60(&var_18, &arg_8)
            arg_8.b = 0x7e
            sub_414b60(&var_18, &arg_8)
            ecx = var_14
            esi = var_18
            int32_t j_4 = ecx - esi - 3
            
            if (j_4 s<= 0)
                break
            
            int32_t j_1
            
            do
                sub_414b60(&var_18, esi)
                esi = var_18
                j_1 = j_4
                j_4 -= 1
            while (j_1 != 1)
            ecx = var_14
            break
        
        if (i == 0x32)
            arg_8.b = 0x3a
            sub_414b60(&var_18, &arg_8)
            arg_8.b = 0x3a
            sub_414b60(&var_18, &arg_8)
            arg_8.b = 0x21
            sub_414b60(&var_18, &arg_8)
            ecx = var_14
            esi = var_18
            int32_t j_3 = ecx - esi - 3
            
            if (j_3 s<= 0)
                break
            
            int32_t j_2
            
            do
                sub_414b60(&var_18, esi)
                esi = var_18
                j_2 = j_3
                j_3 -= 1
            while (j_2 != 1)
            ecx = var_14
            break
        
        char var_1f = 0x3a
        
        if (&var_1f u>= ecx || esi u> &var_1f)
            if (ecx == var_10)
                sub_403590(&var_18, 1)
                ecx = var_14
                esi = var_18
            
            if (ecx != 0)
                *ecx = 0x3a
        else
            char* ebx_5 = &var_1f - esi
            
            if (ecx == var_10)
                sub_403590(&var_18, 1)
                ecx = var_14
                esi = var_18
            
            if (ecx != 0)
                *ecx = *(ebx_5 + esi)
        
        void* ecx_7 = &ecx[1]
        char var_1e = 0x3a
        
        if (&var_1e u>= ecx_7 || esi u> &var_1e)
            if (ecx_7 == var_10)
                sub_403590(&var_18, 1)
                esi = var_18
            
            if (ecx_7 != 0)
                *ecx_7 = 0x3a
            
            ecx = ecx_7 + 1
        else
            char* ebx_6 = &var_1e - esi
            
            if (ecx_7 == var_10)
                sub_403590(&var_18, 1)
                esi = var_18
            
            if (ecx_7 != 0)
                *ecx_7 = *(ebx_6 + esi)
            
            ecx = ecx_7 + 1
    else
        if (edi u>= ecx || esi u> edi)
            if (ecx == var_10)
                sub_403590(&var_18, 1)
                ecx = var_14
                esi = var_18
            
            if (ecx != 0)
                *ecx = *edi
        else
            void* ebx_2 = edi - esi
            
            if (ecx == var_10)
                sub_403590(&var_18, 1)
                ecx = var_14
                esi = var_18
            
            if (ecx != 0)
                *ecx = *(esi + ebx_2)
        
        ecx = &ecx[1]
        edi = &edi[1]
        var_14 = ecx
    label_41484f:
        
        if (edi u>= ecx || esi u> edi)
            if (ecx == var_10)
                sub_403590(&var_18, 1)
                ecx = var_14
                esi = var_18
            
            if (ecx != 0)
                *ecx = *edi
        else
            void* ebx_4 = edi - esi
            
            if (ecx == var_10)
                sub_403590(&var_18, 1)
                ecx = var_14
                esi = var_18
            
            if (ecx != 0)
                *ecx = *(ebx_4 + esi)
        
        ecx = &ecx[1]
        edi = &edi[1]
    
    i = *edi
    var_14 = ecx

char var_1d = 0

if (&var_1d u>= ecx || esi u> &var_1d)
    if (ecx == var_10)
        sub_403590(&var_18, 1)
        ecx = var_14
        esi = var_18
    
    if (ecx != 0)
        *ecx = 0
else
    char* edi_7 = &var_1d - esi
    
    if (ecx == var_10)
        sub_403590(&var_18, 1)
        ecx = var_14
        esi = var_18
    
    if (ecx != 0)
        *ecx = *(edi_7 + esi)

void* var_14_2 = &ecx[1]
*(arg1 + 0x14) = 0xf
*(arg1 + 0x10) = 0
*arg1 = 0
void* ecx_24

if (*esi != 0)
    char* ecx_25 = esi
    char i_1
    
    do
        i_1 = *ecx_25
        ecx_25 = &ecx_25[1]
    while (i_1 != 0)
    ecx_24 = ecx_25 - &ecx_25[1]
else
    ecx_24 = nullptr

sub_402110(arg1, esi, ecx_24)
j__free(esi)
fsbase->NtTib.ExceptionList = ExceptionList
return arg1
