// 函数: sub_44c9d0
// 地址: 0x44c9d0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_72ad9e
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
int32_t var_88 = eax_2
fsbase->NtTib.ExceptionList = &ExceptionList
void* numberOfBytesRead_1 = arg1
int32_t var_34 = 0xf
int32_t var_38 = 0
char var_48 = 0
sub_403490(&var_48, 0x75cd6e, nullptr)
int32_t var_8_1 = 0
bool cond:0 = *arg2 != 0
int32_t var_1c = 0xf
int32_t var_20 = 0
char var_30 = 0
void* ecx_1

if (cond:0)
    char* ecx_2 = arg2
    char i
    
    do
        i = *ecx_2
        ecx_2 = &ecx_2[1]
    while (i != 0)
    ecx_1 = ecx_2 - &ecx_2[1]
else
    ecx_1 = nullptr

sub_403490(&var_30, arg2, ecx_1)
var_8_1.b = 1
var_8_1.b = 0
void* ebx
ebx.b = sub_44d910(arg1 + 0x50, &var_30)

if (var_1c u>= 0x10)
    sub_403160(var_30.d, var_1c + 1, 1)

void* var_60
sub_403360(&var_60, arg2)

if (ebx.b != 0)
    var_8_1.b = 2
    char* eax_6 = sub_44d600(arg1 + 0x50, &var_30, &var_60)
    
    if (&var_48 != eax_6)
        if (var_34 u>= 0x10)
            sub_403160(var_48.d, var_34 + 1, 1)
        
        var_34 = 0xf
        int32_t var_38_1 = 0
        var_48 = 0
        sub_4056a0(&var_48, eax_6)
    
    goto label_44cb5e

var_8_1.b = 4
void* numberOfBytesRead_2 = numberOfBytesRead_1
var_8_1.b = 0
ebx.b = sub_44d910(numberOfBytesRead_2 + 0x60, &var_60).b
int32_t var_4c

if (var_4c u>= 0x10)
    sub_403160(var_60, var_4c + 1, 1)

BOOL result

if (ebx.b == 0)
    ebx.b = 0
else
    sub_403360(&var_60, arg2)
    var_8_1.b = 5
    sub_409670(&var_48, sub_44d600(numberOfBytesRead_2 + 0x60, &var_30, &var_60))
label_44cb5e:
    
    if (var_1c u>= 0x10)
        sub_403160(var_30.d, var_1c + 1, 1)
    
    var_30 = 0
    int32_t var_20_1 = 0
    int32_t var_1c_1 = 0xf
    
    if (var_4c u>= 0x10)
        sub_403160(var_60, var_4c + 1, 1)
    
    struct filesystem::CFile::VTable* const var_28 = &filesystem::CFile::`vftable'
    HANDLE var_24_1 = 0xffffffff
    int32_t lDistanceToMove_1 = 0
    void* var_1c_2 = nullptr
    HANDLE edi_1
    
    if (sub_67ed50(&var_28, &var_48).b == 0)
    label_44cd63:
        edi_1 = var_24_1
    label_44cd66:
        ebx.b = 0
    else
        int32_t lDistanceToMove = lDistanceToMove_1
        ebx = var_1c_2
        edi_1 = var_24_1
        
        if (lDistanceToMove u>= ebx)
        label_44cd66_1:
            ebx.b = 0
        else
            while (true)
                if (edi_1 == 0xffffffff)
                    goto label_44cd66_1
                
                lDistanceToMove += 2
                
                if (lDistanceToMove u> ebx)
                    goto label_44cd66_1
                
                int16_t buffer_1
                
                if (ReadFile(edi_1, &buffer_1, 2, &numberOfBytesRead_1, nullptr) == 0)
                    goto label_44cd66_1
                
                if (numberOfBytesRead_1 != 2)
                    goto label_44cd66_1
                
                result.w = buffer_1
                
                if (result.b != 0xff)
                    goto label_44cd66_1
                
                if (result:1.b != 0xd8 && result:1.b != 0xd9)
                    int16_t numberOfBytesRead
                    
                    if (result:1.b == 0xc0 || result:1.b == 0xc1 || result:1.b == 0xc2
                            || result:1.b == 0xc3 || result:1.b == 0xc5 || result:1.b == 0xc6
                            || result:1.b == 0xc7 || result:1.b == 0xc9 || result:1.b == 0xca
                            || result:1.b == 0xcb || result:1.b == 0xcd || result:1.b == 0xce
                            || result:1.b == 0xcf)
                        if (lDistanceToMove + 3 u>= ebx)
                            goto label_44cd66_1
                        
                        SetFilePointer(edi_1, lDistanceToMove + 3, nullptr, FILE_BEGIN)
                        int32_t var_20_2 = lDistanceToMove + 3
                        
                        if (sub_67f160(&var_28, &numberOfBytesRead, 2).b == 0)
                            goto label_44cd63
                        
                        result.w = numberOfBytesRead
                        *arg4 = zx.d(result.b) << 8 | zx.d(result:1.b)
                        
                        if (sub_67f160(&var_28, &numberOfBytesRead_1, 2).b == 0)
                            goto label_44cd63
                        
                        result.w = numberOfBytesRead_1.w
                        ebx.b = 1
                        edi_1 = var_24_1
                        *arg3 = zx.d(result.b) << 8 | zx.d(result:1.b)
                        break
                    
                    if (lDistanceToMove + 2 u> var_1c_2)
                        goto label_44cd66_1
                    
                    int16_t buffer
                    
                    if (ReadFile(edi_1, &buffer, 2, &numberOfBytesRead, nullptr) == 0)
                        goto label_44cd66_1
                    
                    if (numberOfBytesRead.d != 2)
                        goto label_44cd66_1
                    
                    result.w = buffer
                    lDistanceToMove =
                        (zx.d(result.b) << 8 | (zx.d(result:1.b) - 2)) + lDistanceToMove + 2
                    ebx = var_1c_2
                    
                    if (lDistanceToMove u>= ebx)
                        goto label_44cd66_1
                    
                    SetFilePointer(edi_1, lDistanceToMove, nullptr, FILE_BEGIN)
                
                if (lDistanceToMove u>= ebx)
                    goto label_44cd66_1
    
    if (edi_1 != 0xffffffff)
        CloseHandle(edi_1)

if (var_34 u>= 0x10)
    sub_403160(var_48.d, var_34 + 1, 1)

result.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
