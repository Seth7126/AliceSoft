// 函数: sub_4a03f0
// 地址: 0x4a03f0
// 来自: E:\torrent\AliceSoft\ランス１０\Rance10.exe

int32_t var_8 = 0xffffffff
int32_t (* var_c)(void* arg1) = sub_730e44
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
int32_t __saved_ebp
int32_t eax_2 = __security_cookie ^ &__saved_ebp
fsbase->NtTib.ExceptionList = &ExceptionList
void* var_18c = arg1
char ebx = 0
int32_t var_19c = 0
void* var_184
sub_4a3ad0(arg1, &var_184)
int32_t var_8_1 = 0
struct mainwindow::CScreenshotFolderPath::VTable* var_d0 =
    &mainwindow::CScreenshotFolderPath::`vftable'
int32_t var_b8 = 0xf
int32_t var_bc = 0
char var_cc = 0
var_8_1.b = 1
int32_t var_a0 = 0xf
int32_t var_a4 = 0
char var_b4 = 0
sub_403490(&var_b4, "ScreenshotFolderPath.sav", 0x18)
var_8_1.b = 2
struct _EXCEPTION_REGISTRATION_RECORD** eax_4 = sub_4a4a10(&var_d0)
char var_185_1
void* var_6c

if (var_bc == 0)
    var_185_1 = 1
else
    char* lpFileName = sub_405320(&var_6c, &var_cc)
    ebx = 1
    
    if (*(lpFileName + 0x14) u>= 0x10)
        lpFileName = *lpFileName
    
    eax_4 = GetFileAttributesA(lpFileName)
    
    if (eax_4 == 0xffffffff)
        var_185_1 = 1
    else
        var_185_1 = 0
        eax_4.b = (eax_4 u>> 4).b & 1
        
        if (eax_4.b == 0)
            var_185_1 = 1

struct _EXCEPTION_REGISTRATION_RECORD** var_58

if ((ebx & 1) != 0)
    eax_4 = var_58
    
    if (eax_4 u>= 0x10)
        eax_4 = sub_403160(var_6c, eax_4 + 1, 1)

if (var_185_1 != 0)
    int32_t* eax_6 = sub_4175e0(eax_4, &var_184, &var_6c, "Screenshot\")
    var_8_1.b = 3
    
    if (&var_cc != eax_6)
        sub_403590(&var_cc, eax_6, 0, 0xffffffff)
    
    var_8_1.b = 2
    
    if (var_58 u>= 0x10)
        sub_403160(var_6c, var_58 + 1, 1)

int32_t* var_194 = nullptr
char eax_9 = sub_4a4b90(&var_194)
int32_t* esi = var_194
struct win32only::CSaveFileNameDlg::VTable* const var_1a4 = &win32only::CSaveFileNameDlg::`vftable'

if (eax_9 == 0)
    esi = nullptr

int32_t* eax_10 = sub_6e810c(0x560)
var_194 = eax_10
int32_t* param0 = sub_6ce920(eax_10)
int32_t* param0_1 = param0
sub_6ce9e0(param0, 0x760f74, "*.bmp")
sub_6ce9e0(param0, "jpeg", "*.jpg")
int32_t var_40 = 0xf
int32_t var_44 = 0
char var_54 = 0
var_8_1.b = 5
void* const var_1c0_3

if (esi == 0)
    int32_t var_1bc_3 = 3
    param0[6] = 1
    var_1c0_3 = &data_760fb4
label_4a0601:
    sub_403490(&var_54, var_1c0_3, 3)
    void var_198
    __time64(&var_198)
    void* var_1bc_5 = &var_198
    void var_3c
    void* var_1c0_4 = &var_3c
    sub_703d21()
    int32_t var_28
    var_19c = var_28 + 0x76c
    __time64(&var_198)
    void* var_1bc_6 = &var_198
    int32_t var_16c
    int32_t* var_1c0_5 = &var_16c
    sub_703d21()
    int32_t* eax_14 = (***(var_18c + 0x2b8))(0x760e0c)
    int32_t var_88_1 = 0xf
    int32_t var_8c_1 = 0
    char var_9c = 0
    sub_403490(&var_9c, "_%4d%02d%02d_%02d%02d%02d", 0x19)
    var_8_1.b = 6
    int32_t var_168
    int32_t var_164
    void** var_30
    int32_t var_2c
    char* eax_16 = sub_4a3f80(&var_19c, &var_9c, &var_6c, &var_19c, var_2c + 1, var_30, var_164, 
        var_168, var_16c)
    var_8_1.b = 7
    char* esi_4 = (*(*eax_14 + 4))(eax_2)
    int32_t var_70_1 = 0xf
    int32_t var_74_1 = 0
    char var_84 = 0
    void* ecx_16
    
    if (*esi_4 != 0)
        char* ecx_17 = esi_4
        char* eax_17
        
        do
            eax_17.b = *ecx_17
            ecx_17 = &ecx_17[1]
        while (eax_17.b != 0)
        ecx_16 = ecx_17 - &ecx_17[1]
    else
        ecx_16 = nullptr
    
    sub_403490(&var_84, esi_4, ecx_16)
    var_8_1.b = 8
    char var_148
    void* eax_18 = sub_404f20(&var_148, &var_cc)
    var_8_1.b = 9
    char var_130[0x10]
    void* eax_19 = sub_4177a0(eax_18, eax_18, &var_130, &var_84)
    var_8_1.b = 0xa
    char var_118[0x10]
    char* eax_20 = sub_4177a0(eax_19, eax_19, &var_118, eax_16)
    var_8_1.b = 0xb
    char var_100[0x10]
    char* eax_21 = sub_4176f0(eax_20.b, eax_20, &var_100, U".")
    var_8_1.b = 0xc
    int32_t* var_e8
    sub_417750(eax_21, eax_21, &var_e8, &var_54)
    int32_t var_ec
    
    if (var_ec u>= 0x10)
        sub_403160(var_100[0].d, var_ec + 1, 1)
    
    int32_t var_ec_1 = 0xf
    int32_t var_f0_1 = 0
    var_100[0] = 0
    int32_t var_104
    
    if (var_104 u>= 0x10)
        sub_403160(var_118[0].d, var_104 + 1, 1)
    
    int32_t var_104_1 = 0xf
    int32_t var_108_1 = 0
    var_118[0] = 0
    int32_t var_11c
    
    if (var_11c u>= 0x10)
        sub_403160(var_130[0].d, var_11c + 1, 1)
    
    int32_t var_11c_1 = 0xf
    int32_t var_120_1 = 0
    var_130[0] = 0
    int32_t var_134
    
    if (var_134 u>= 0x10)
        sub_403160(var_148.d, var_134 + 1, 1)
    
    int32_t var_134_1 = 0xf
    int32_t var_138_1 = 0
    var_148 = 0
    
    if (var_70_1 u>= 0x10)
        sub_403160(var_84.d, var_70_1 + 1, 1)
    
    int32_t var_70_2 = 0xf
    int32_t var_74_2 = 0
    var_84 = 0
    
    if (var_58 u>= 0x10)
        sub_403160(var_6c, var_58 + 1, 1)
    
    int32_t var_58_1 = 0xf
    int32_t var_5c_1 = 0
    var_6c.b = 0
    var_8_1.b = 0x14
    
    if (var_88_1 u>= 0x10)
        sub_403160(var_9c.d, var_88_1 + 1, 1)
    
    int32_t* eax_36 = &var_e8
    int32_t var_88_2 = 0xf
    int32_t var_d4
    
    if (var_d4 u>= 0x10)
        eax_36 = var_e8
    
    int32_t var_8c_2 = 0
    var_9c = 0
    
    if (eax_36 != 0)
        _strcpy_s(&param0[0x16], 0x104, eax_36)
    
    char* edx_11 = &var_cc
    int32_t var_1c_1 = 0xf
    
    if (var_b8 u>= 0x10)
        edx_11 = var_cc.d
    
    int32_t var_20_1 = 0
    var_30.b = 0
    void* ecx_24
    
    if (*edx_11 != 0)
        char* ecx_25 = edx_11
        
        do
            eax_36.b = *ecx_25
            ecx_25 = &ecx_25[1]
        while (eax_36.b != 0)
        
        ecx_24 = ecx_25 - &ecx_25[1]
    else
        ecx_24 = nullptr
    
    sub_403490(&var_30, edx_11, ecx_24)
    *(param0[0x157] + param0 + 0x15c) = 0
    param0[1] = arg2
    char* eax_40 = &var_54
    
    if (var_40 u>= 0x10)
        eax_40 = var_54.d
    
    param0[0xf] = eax_40
    void** eax_41 = &var_30
    
    if (var_1c_1 u>= 0x10)
        eax_41 = var_30
    
    param0[0xb] = eax_41
    bool cond:3_1 = GetSaveFileNameA(param0) != 0
    
    if (var_1c_1 u>= 0x10)
        sub_403160(var_30, var_1c_1 + 1, 1)
    
    if (cond:3_1 != 0)
        int32_t eax_45 = param0[6]
        int32_t esi_6
        
        if (eax_45 == 1)
            esi_6 = 0
        label_4a09e9:
            sub_403360(&var_30, &param0[0x16])
            var_8_1.b = 0x15
            void* eax_48 = var_18c
            char eax_49 =
                sub_4a0bd0(eax_48, &var_30, esi_6, 0, 0, *(eax_48 + 0x60), *(eax_48 + 0x64))
            var_8_1.b = 0x14
            
            if (var_1c_1 u>= 0x10)
                sub_403160(var_30, var_1c_1 + 1, 1)
            
            void** ecx_31 = &var_30
            
            if (eax_49 == 0)
                sub_403360(ecx_31, 0x7611e8)
                var_8_1.b = 0x18
                sub_6c56d0(&var_30)
                sub_403320(&var_30)
            else
                var_18c = &param0[0x16]
                sub_403360(ecx_31, 0x761210)
                var_8_1.b = 0x16
                var_8_1.b = 0x17
                void var_160
                sub_6c56d0(sub_409240(&var_18c, &var_30, &var_160, &var_18c))
                sub_403320(&var_160)
                var_8_1.b = 0x14
                sub_403320(&var_30)
                sub_4a4d40(esi_6)
                sub_403360(&var_30, &param0[0x16])
                var_8_1.b = 0x19
                void** eax_52 = sub_404ea0(&var_160)
                var_8_1.b = 0x1a
                
                if (&var_cc != eax_52)
                    sub_403590(&var_cc, eax_52, 0, 0xffffffff)
                
                sub_403320(&var_160)
                var_8_1.b = 0x14
                sub_403320(&var_30)
                sub_4a48b0(&var_d0)
        else if (eax_45 == 2)
            esi_6 = eax_45 - 1
            goto label_4a09e9
    
    if (var_d4 u>= 0x10)
        sub_403160(var_e8, var_d4 + 1, 1)
    
    int32_t var_d4_1 = 0xf
    int32_t var_d8_1 = 0
    var_e8.b = 0
    
    if (var_40 u>= 0x10)
        sub_403160(var_54.d, var_40 + 1, 1)
else if (esi == 1)
    int32_t var_1bc_2 = 3
    param0[6] = 2
    var_1c0_3 = &data_760fb0
    goto label_4a0601
int32_t var_40_1 = 0xf
int32_t var_44_1 = 0
var_54 = 0

if (param0 != 0)
    int32_t var_1bc_19 = 0x560
    operator new(param0)

sub_4a4830(&var_d0)
int32_t result_1
int32_t result = result_1

if (result u>= 0x10)
    result = sub_403160(var_184, result + 1, 1)

fsbase->NtTib.ExceptionList = ExceptionList
@__security_check_cookie@4(eax_2 ^ &__saved_ebp)
return result
