// 函数: sub_6d0230
// 地址: 0x6d0230
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

void var_3cc
int32_t eax_1 = __security_cookie ^ &var_3cc
char var_3c0

if (data_7fcbde == 0)
    if (CoInitializeEx(nullptr, 0) s< 0)
        int32_t var_3ac_1 = 0xf
        int32_t var_3b0_1 = 0
        var_3c0 = 0
        sub_403490(&var_3c0, 0x7944a4, 0x19)
        sub_6c52e0(&var_3c0)
        
        if (var_3ac_1 u>= 0x10)
            sub_403160(var_3c0.d, var_3ac_1 + 1, 1)
    else
        data_7fcbde = 1

int32_t var_344 = 0xf
int32_t var_348 = 0
char var_358 = 0
sub_403490(&var_358, "lasdf62uihf29fosif83oisdhf15j2l87asdf", 0x25)
sub_403590(&data_7fd478, &var_358, 0, 0xffffffff)
char buffer
_memset(&buffer, 0, 0x105)
GetCurrentDirectoryA(0x104, &buffer)
bool cond:1 = buffer != 0
int32_t var_32c = 0xf
int32_t var_330 = 0
char var_340 = 0
void* ecx_4

if (cond:1)
    char* ecx_5 = &buffer
    char i
    
    do
        i = *ecx_5
        ecx_5 = &ecx_5[1]
    while (i != 0)
    void var_117
    ecx_4 = ecx_5 - &var_117
else
    ecx_4 = nullptr

sub_403490(&var_340, &buffer, ecx_4)
sub_403590(&data_7fd490, &var_340, 0, 0xffffffff)

if (var_32c u>= 0x10)
    sub_403160(var_340.d, var_32c + 1, 1)

int32_t var_3ac_2 = 0xf
int32_t var_3b0_2 = 0
var_3c0 = 0
sub_403490(&var_3c0, "AliceStart.ini", 0xe)
int32_t ebx
ebx.b = sub_5f2400(&var_3c0) == 0

if (var_3ac_2 u>= 0x10)
    sub_403160(var_3c0.d, var_3ac_2 + 1, 1)

if (ebx.b != 0)
    struct filesystem::CFilePath::VTable* const var_3a8 = &filesystem::CFilePath::`vftable'
    int32_t var_390_1 = 0xf
    int32_t var_394_1 = 0
    char var_3a4_1 = 0
    sub_67e580(&var_3a8)
    void* var_370
    char* eax_12 = sub_67e9f0(&var_3a8, &var_370)
    char* lpFileName = sub_4176f0(eax_12.b, eax_12, &var_3c0, "\AliceStart.ini")
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    uint32_t eax_13 = GetFileAttributesA(lpFileName)
    uint32_t ebx_1
    
    if (eax_13 != 0xffffffff)
        ebx_1.b = not.b((eax_13 u>> 4).b)
        ebx_1.b &= 1
    else
        ebx_1.b = 0
    
    if (var_3ac_2 u>= 0x10)
        sub_403160(var_3c0.d, var_3ac_2 + 1, 1)
    
    int32_t var_3ac_3 = 0xf
    int32_t var_3b0_3 = 0
    var_3c0 = 0
    int32_t var_35c
    
    if (var_35c u>= 0x10)
        sub_403160(var_370, var_35c + 1, 1)
    
    if (ebx_1.b != 0)
        char* lpPathName = sub_67e9f0(&var_3a8, &var_370)
        
        if (*(lpPathName + 0x14) u>= 0x10)
            lpPathName = *lpPathName
        
        SetCurrentDirectoryA(lpPathName)
        
        if (var_35c u>= 0x10)
            sub_403160(var_370, var_35c + 1, 1)
        
        char* eax_20 = sub_67e9f0(&var_3a8, &var_370)
        
        if (eax_20 != &data_7fd490)
            sub_403590(&data_7fd490, eax_20, 0, 0xffffffff)
        
        if (var_35c u>= 0x10)
            sub_403160(var_370, var_35c + 1, 1)
    
    var_3a8 = &filesystem::CFilePath::`vftable'
    
    if (var_390_1 u>= 0x10)
        sub_403160(var_3a4_1.d, var_390_1 + 1, 1)

struct win32only::CAliceRunPatch::VTable* var_38c
sub_6cc7b0(&var_38c)
int32_t* lpFileName_2
int32_t* lpFileName_1 = &lpFileName_2
int32_t var_374

if (var_374 u>= 0x10)
    lpFileName_1 = lpFileName_2

uint32_t eax_25 = GetFileAttributesA(lpFileName_1)
HMODULE result

if (eax_25 == 0xffffffff || (not.b((eax_25 u>> 4).b) & 1) == 0)
    struct IMainSystem::mainsystem::CMainSystem::VTable* var_328
    sub_496a00(&var_328)
    struct IMainSystem::mainsystem::CMainSystem::VTable** ecx_18 = &var_328
    
    if (sub_496eb0(&var_328, arg1, arg3) != 0)
        result = sub_497e70(ecx_18)
        sub_496c80(&var_328)
        goto label_6d05fa
    
    sub_497de0(ecx_18)
    sub_496c80(&var_328)
    result = nullptr
else
    result = sub_6cc950(&var_38c, arg1, arg2, arg3, arg4, &var_358)
label_6d05fa:
    
    if (data_7fcbde != 0)
        CoUninitialize()
        data_7fcbde = 0

var_38c = &win32only::CAliceRunPatch::`vftable'

if (var_374 u>= 0x10)
    sub_403160(lpFileName_2, var_374 + 1, 1)

int32_t var_374_1 = 0xf
int32_t var_378 = 0
lpFileName_2.b = 0

if (var_344 u>= 0x10)
    sub_403160(var_358.d, var_344 + 1, 1)

@__security_check_cookie@4(eax_1 ^ &var_3cc)
return result
