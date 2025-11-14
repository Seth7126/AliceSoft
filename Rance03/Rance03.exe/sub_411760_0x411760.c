// 函数: sub_411760
// 地址: 0x411760
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b3b01
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_ac
int32_t eax_2 = __security_cookie ^ &var_ac
int32_t __saved_edi
int32_t eax_4 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void* edi = arg1
void* var_9c = edi
struct dpanalysis::CBrowseFolderDlg::VTable* const var_94 = &dpanalysis::CBrowseFolderDlg::`vftable'
void** eax_5 = sub_69adc6(0x18)
int32_t* ebp = eax_5
void** var_a4 = eax_5

if (ebp == 0)
    ebp = nullptr
    var_a4 = nullptr
else
    ebp[5] = 0xf
    ebp[4] = 0
    *ebp = 0

int32_t* var_90 = ebp
int32_t var_4 = 0
int32_t var_78 = 0xf
int32_t var_7c = 0
char var_8c = 0
sub_402110(&var_8c, 0x6d9ffa, nullptr)
var_4.b = 1
int32_t var_48 = 0xf
int32_t var_4c = 0
char var_5c = 0
sub_402110(&var_5c, 0x6d9ffb, nullptr)
var_4.b = 2
int32_t var_60 = 0xf
int32_t var_64 = 0
char var_74 = 0
sub_402110(&var_74, 0x6da011, nullptr)
var_4.b = 3
HRESULT ebx
ebx.b = sub_4140b0(ebp, arg2, &var_74, &var_5c, &var_8c).b == 0

if (var_60 u>= 0x10)
    j__free(var_74.d)

int32_t var_60_1 = 0xf
int32_t var_64_1 = 0
var_74 = 0

if (var_48 u>= 0x10)
    j__free(var_5c.d)

var_4.b = 0
int32_t var_48_1 = 0xf
int32_t var_4c_1 = 0
var_5c = 0

if (var_78 u>= 0x10)
    j__free(var_8c.d)

HRESULT lpBuffer

if (ebx.b == 0)
    lpBuffer = (*(**(edi + 0x3c) + 0x20))(eax_4)
    int32_t ebp_1 = 0
    HRESULT lpBuffer_1 = lpBuffer
    
    if (lpBuffer s<= 0)
    label_411b4d:
        ebx.b = 1
    else
        while (true)
            ebx = (*(**(edi + 0x3c) + 0x28))(ebp_1)
            
            if (ebx != 0)
                char* eax_8 = sub_4028a0(&var_8c, var_a4)
                var_4.b = 4
                char* eax_9 = (*(**(edi + 0x3c) + 0x24))(ebp_1)
                sub_410a80(eax_9.b, eax_8, &var_5c, eax_9)
                var_4.b = 6
                
                if (var_78 u>= 0x10)
                    j__free(var_8c.d)
                
                int32_t var_78_1 = 0xf
                int32_t var_7c_1 = 0
                var_8c = 0
                var_4.b = 7
                var_4.b = 8
                char var_44
                int32_t var_2c
                sub_607ce0(sub_402e90(&var_44, sub_402960(&var_2c, &var_5c)))
                int32_t var_30
                
                if (var_30 u>= 0x10)
                    j__free(var_44.d)
                
                var_30 = 0xf
                int32_t var_34_1 = 0
                var_44 = 0
                int32_t var_18
                
                if (var_18 u>= 0x10)
                    j__free(var_2c)
                
                var_74.d = &filesystem::CFile::`vftable'
                HANDLE var_70_1 = 0xffffffff
                int32_t var_6c_1 = 0
                int32_t var_68_1 = 0
                var_4.b = 9
                char* edx_6 = &var_5c
                var_78 = 0xf
                
                if (var_48_1 u>= 0x10)
                    edx_6 = var_5c.d
                
                int32_t var_7c_2 = 0
                var_8c = 0
                void* ecx_12
                
                if (*edx_6 != 0)
                    char* ecx_13 = edx_6
                    char i
                    
                    do
                        i = *ecx_13
                        ecx_13 = &ecx_13[1]
                    while (i != 0)
                    ecx_12 = ecx_13 - &ecx_13[1]
                else
                    ecx_12 = nullptr
                
                sub_402110(&var_8c, edx_6, ecx_12)
                lpBuffer.b = sub_604970(&var_74, &var_8c).b == 0
                char var_a5_1 = lpBuffer.b
                
                if (var_78 u>= 0x10)
                    j__free(var_8c.d)
                    lpBuffer.b = var_a5_1
                
                if (lpBuffer.b != 0)
                label_411bb5:
                    
                    if (var_70_1 == 0xffffffff)
                        goto label_411bc2
                    
                    CloseHandle(var_70_1)
                label_411bc2:
                    
                    if (var_48_1 u>= 0x10)
                        j__free(var_5c.d)
                    
                    ebx.b = 0
                    break
                
                if ((*(*ebx + 0x14))() s> 0x1)
                    int32_t eax_14 = (*(*ebx + 0x14))()
                    lpBuffer = (*(*ebx + 0x18))()
                    
                    if (var_70_1 == 0xffffffff)
                        goto label_411bc2
                    
                    uint32_t numberOfBytesWritten
                    
                    if (WriteFile(var_70_1, lpBuffer, eax_14 - 1, &numberOfBytesWritten, nullptr)
                            == 0 || eax_14 - 1 != numberOfBytesWritten)
                        goto label_411bb5
                    
                    edi = var_9c
                
                if (var_70_1 == 0xffffffff)
                    goto label_411b1f
                
                if (CloseHandle(var_70_1) == 0)
                    goto label_411bb5
                
                int32_t var_70_2 = 0xffffffff
            label_411b1f:
                var_4.b = 0
                var_74.d = &filesystem::CFile::`vftable'
                
                if (var_48_1 u>= 0x10)
                    j__free(var_5c.d)
            
            ebp_1 += 1
            
            if (ebp_1 s>= lpBuffer_1)
                goto label_411b4d
    
    ebp = var_a4
else
    ebx.b = 0

if (ebp != 0)
    if (ebp[5] u>= 0x10)
        j__free(*ebp)
    
    ebp[5] = 0xf
    ebp[4] = 0
    *ebp = 0
    j__free(ebp)

lpBuffer.b = ebx.b
fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_ac)
return lpBuffer
