// 函数: sub_43b880
// 地址: 0x43b880
// 来自: E:/torrent/AliceSoft/ランス03/Rance03.exe.bndb

int32_t var_4_1 = 0xffffffff
int32_t (* var_8)(void* arg1) = sub_6b6368
TEB* fsbase
struct _EXCEPTION_REGISTRATION_RECORD* ExceptionList = fsbase->NtTib.ExceptionList
void var_84
int32_t eax_2 = __security_cookie ^ &var_84
int32_t __saved_edi
int32_t var_98 = __security_cookie ^ &__saved_edi
fsbase->NtTib.ExceptionList = &ExceptionList
void** esi = arg2
struct filesystem::CFile::VTable* const var_74 = &filesystem::CFile::`vftable'
HANDLE hObject_1 = 0xffffffff
int32_t var_6c = 0
int32_t var_68 = 0
int32_t var_4 = 0
char var_81
int32_t* result
HANDLE hObject
int32_t var_5c
int32_t var_48
int32_t var_44

if (sub_6049e0(&var_74, esi) != 0)
    var_44 = 0
    int32_t var_40_1 = 0
    int32_t var_3c_1 = 0
    var_4.b = 3
    int32_t var_80
    int32_t* var_9c_5 = &var_80
    uint32_t var_78 = 0
    var_80 = 0
    uint32_t var_7c = 0
    result = sub_43bf80(arg1, &var_74, &var_44, &var_78, &var_7c)
    hObject = hObject_1
    
    if (hObject != 0xffffffff)
        result.b = result.b
        
        if (CloseHandle(hObject) != 0)
            hObject = 0xffffffff
        
        HANDLE hObject_2 = hObject
    
    if (result.b != 0)
        uint32_t ebp_1 = var_78
        int32_t edi_1 = 0
        int32_t var_64 = 0
        
        if (ebp_1 s<= 0)
        label_43ba85:
            result.b = 1
        else
            while (true)
                if (sub_43bb60(arg1, &var_44, &var_64, esi, var_7c, var_80).b == 0)
                    if (esi[5] u>= 0x10)
                        esi = *esi
                    
                    void** var_9c_13 = esi
                    int32_t var_2c
                    void** eax_9 = sub_4691f0(&var_2c, 0x6db34c)
                    var_4.b = 5
                    int32_t* eax_10 = sub_410930(eax_9, eax_9, &var_5c, U"\n")
                    var_4.b = 6
                    
                    if (eax_10[5] u>= 0x10)
                        eax_10 = *eax_10
                    
                    sub_455870(eax_10)
                    
                    if (var_48 u>= 0x10)
                        j__free(var_5c)
                    
                    int32_t var_18
                    
                    if (var_18 u>= 0x10)
                        j__free(var_2c)
                    
                    break
                
                edi_1 += 1
                
                if (edi_1 s>= ebp_1)
                    goto label_43ba85
            
            result.b = 0
    else
        if (esi[5] u>= 0x10)
            esi = *esi
        
        void** var_9c_7 = esi
        var_4.b = 4
        sub_43b7f0(sub_4691f0(&var_5c, 0x6db384))
        
        if (var_48 u< 0x10)
            result.b = 0
        else
            j__free(var_5c)
            result.b = 0
    
    int32_t ecx_4 = var_44
    var_81 = result.b
    
    if (ecx_4 != 0)
        j__free(ecx_4)
        result.b = var_81
else
    if (esi[5] u>= 0x10)
        esi = *esi
    
    void** var_9c_1 = esi
    void** eax_6 = sub_4691f0(&var_5c, 0x6db3b4)
    var_4.b = 1
    int32_t* eax_7 = sub_410930(eax_6, eax_6, &var_44, U"\n")
    var_4.b = 2
    
    if (eax_7[5] u>= 0x10)
        eax_7 = *eax_7
    
    sub_455870(eax_7)
    int32_t var_30
    
    if (var_30 u>= 0x10)
        j__free(var_44)
    
    if (var_48 u>= 0x10)
        j__free(var_5c)
    
    hObject = hObject_1
    result.b = 0
    var_81 = 0

if (hObject != 0xffffffff)
    CloseHandle(hObject)
    result.b = var_81

fsbase->NtTib.ExceptionList = ExceptionList
sub_69a5bc(eax_2 ^ &var_84)
return result
